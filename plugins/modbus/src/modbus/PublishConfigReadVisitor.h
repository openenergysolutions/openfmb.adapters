
#ifndef OPENFMB_ADAPTER_MODBUS_PUBLISHCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_MODBUS_PUBLISHCONFIGREADVISITOR_H

#include "IConfigurationBuilder.h"
#include "ConfigStrings.h"
#include "MappingType.h"
#include "Register16.h"
#include "Register32.h"
#include "Source.h"

#include <adapter-api/config/PublishingConfigReadVisitorBase.h>

namespace adapter
{
    namespace modbus
    {
        template <class U>
        using setter_t = std::function<void (U&)>;

        template <class T>
        class PublishConfigReadVisitor final : public PublishingConfigReadVisitorBase<T>
        {
            const std::shared_ptr<T> profile = std::make_shared<T>();
            const publisher_t publisher;
            const std::shared_ptr<IConfigurationBuilder> builder;

        public:

            PublishConfigReadVisitor(const YAML::Node& root, publisher_t publisher, std::shared_ptr<IConfigurationBuilder> builder) :
                PublishingConfigReadVisitorBase<T>(root),
                publisher(std::move(publisher)),
                builder(std::move(builder))
            {
                this->builder->add_begin_action([profile = this->profile](Logger&)
                {
                    profile->Clear();
                });
            }

            ~PublishConfigReadVisitor()
            {
                this->builder->add_end_action(
                    [profile = this->profile, publisher = this->publisher](Logger&)
                {
                    publisher->publish(*profile);
                }
                );
            }

            void handle(const std::string& field_name, Accessor<commonmodule::MV, T> accessor) override
            {
                // MV only has a magnitude
                this->configure_float(
                    yaml::require(this->get_config_node(field_name), ::adapter::keys::mag),
                    [accessor](T & profile, float value)
                {
                    accessor.create(profile)->mutable_mag()->mutable_f()->set_value(value);
                }
                );
            }

            void handle(const std::string& field_name, Accessor<commonmodule::CMV, T> accessor) override
            {
                const YAML::Node vector_node = yaml::require(
                                                   this->get_config_node(field_name),
                                                   ::adapter::keys::cVal
                                               );

                // independently configure the angle and magnitude

                this->configure_float(
                    yaml::require(vector_node, ::adapter::keys::mag),
                    [accessor](T & profile, float value)
                {
                    accessor.create(profile)->mutable_cval()->mutable_mag()->mutable_f()->set_value(value);
                }
                );

                this->configure_float(
                    yaml::require(vector_node, ::adapter::keys::ang),
                    [accessor](T & profile, float value)
                {
                    return accessor.create(profile)->mutable_cval()->mutable_ang()->mutable_f()->set_value(value);
                }
                );

            }

            void handle(const std::string& field_name, Accessor<commonmodule::BCR, T> accessor) override
            {
                this->configure_bcr(
                    this->get_config_node(field_name),
                    accessor
                );
            }

            void handle(const std::string& field_name, Accessor<commonmodule::StatusDPS, T> accessor) override
            {
                throw Exception("not implemented");
            }

            void handle(const std::string& field_name, Accessor<commonmodule::CheckConditions, T> accessor) override
            {
                throw Exception("not implemented");
            }

            void handle(const std::string& field_name, Accessor<commonmodule::ControlFSCC, T> accessor) override
            {
                throw Exception("not implemented");
            }

            void handle(const std::string& field_name, Accessor<switchmodule::SwitchCSG, T> accessor) override
            {
                throw Exception("not implemented");
            }

            void handle(const std::string& field_name, Accessor<essmodule::ESSCSG, T> accessor) override
            {
                throw Exception("not implemented");
            }

            void handle(const std::string& field_name, Accessor<commonmodule::StatusSPS, T> accessor) override
            {
                const auto node = this->get_config_node(field_name);
                this->configure_boolean(
                    yaml::require(node, ::adapter::keys::stVal),
                    [accessor](T & profile, bool value)
                {
                    accessor.create(profile)->set_stval(value);
                }
                );
            }

            void handle(const std::string& field_name, Accessor<commonmodule::ControlDPC, T> accessor) override
            {
                const auto node = this->get_config_node(field_name);
                this->configure_boolean(
                    yaml::require(node, ::adapter::keys::ctlVal),
                    [accessor](T & profile, bool value)
                {
                    accessor.create(profile)->set_ctlval(value);
                }
                );
            }

            void handle(const std::string& field_name, Accessor<google::protobuf::FloatValue, T> accessor) override
            {
                const auto node = this->get_config_node(field_name);
                this->configure_float(
                    node,
                    [accessor](T & profile, float value)
                {
                    accessor.create(profile)->set_value(value);
                }
                );
            }

            void handle(const std::string& field_name, PrimitiveAccessor<commonmodule::StateKind, T> accessor) override
            {
                this->configure_enum<commonmodule::StateKind>(this->get_config_node(field_name), accessor, commonmodule::StateKind_descriptor());
            }

        private:

            template <class E>
            void configure_enum(const YAML::Node& node, PrimitiveAccessor<E, T> accessor, google::protobuf::EnumDescriptor const* descriptor)
            {
                const auto source = SourceMeta::from_string(yaml::require_string(node, keys::source));

                if(source  != Source::holding_register)
                {
                    return;
                }

                const auto mask = yaml::require_integer<uint16_t>(node, keys::mask);
                std::map<uint16_t, E> mapping;

                yaml::foreach(
                    yaml::require(node, keys::mapping),
                    [&mapping, &descriptor](const YAML::Node& item)
            {
                const auto value = yaml::require_integer<uint16_t>(item, keys::value);
                    const auto name = yaml::require_string(item, keys::name);
                    const auto value_descriptor = descriptor->FindValueByName(name);
                    if(!value_descriptor)
                    {
                        throw Exception("Bad ", descriptor->name(), " enum name: ", name);
                    }
                    mapping[value] = static_cast<E>(value_descriptor->number());
                }
                );

                this->map_register16(
                    node,
                    [accessor, mask, mapping = std::move(mapping), descriptor](T & profile, const std::shared_ptr<Register16>& reg, Logger & logger)
                {
                    const auto masked_value = reg->to_uint16() & mask;
                    const auto entry = mapping.find(masked_value);
                    if(entry == mapping.end())
                    {
                        logger.warn("No mapping to ", descriptor->name(), " for masked value:  ", masked_value);
                    }
                    else
                    {
                        accessor.set(profile, entry->second);
                    }
                }
                );
            }

            void configure_boolean(const YAML::Node& node, const std::function<void (T&, bool)>& setter)
            {
                const auto source = SourceMeta::from_string(yaml::require_string(node, keys::source));

                if(source  == Source::holding_register)
                {
                    const auto mask = yaml::require_integer<uint16_t>(node, keys::mask);
                    this->map_register16(
                        node,
                        [setter, mask](T & profile, const std::shared_ptr<Register16>& reg, Logger&)
                    {
                        setter(profile, (reg->to_uint16() & mask) != 0);
                    }
                    );
                }
            }

            void configure_float(const YAML::Node& node, const std::function<void (T&, float)>& setter)
            {
                const auto type_string = yaml::require_string(node, keys::type);

                switch(MappingTypeMeta::from_string(type_string))
                {
                case (MappingType::none):
                    break;
                case (MappingType::uint16):
                    this->map_register16(node, [setter, scale = get_float_scale(node)](T & profile,
                                         const std::shared_ptr<Register16>& reg, Logger&)
                    {
                        setter(profile, reg->to_uint16() * scale);
                    });
                    break;
                case (MappingType::sint16):
                    this->map_register16(node, [setter, scale = get_float_scale(node)](T & profile,
                                         const std::shared_ptr<Register16>& reg, Logger&)
                    {
                        setter(profile, reg->to_sint16() * scale);
                    });
                    break;
                case (MappingType::uint32):
                    this->map_register32(node, [setter, scale = get_float_scale(node)](T & profile,
                                         const std::shared_ptr<Register32>& reg, Logger&)
                    {
                        setter(profile, reg->to_uint32() * scale);
                    });
                    break;
                case (MappingType::sint32):
                    this->map_register32(node, [setter, scale = get_float_scale(node)](T & profile,
                                         const std::shared_ptr<Register32>& reg, Logger&)
                    {
                        setter(profile, reg->to_sint32() * scale);
                    });
                    break;
                case (MappingType::uint32_with_modulus):
                    this->map_register32(node, [setter, scale = get_float_scale(node), modulus = get_modulus(node)]
                                         (T & profile, const std::shared_ptr<Register32>& reg, Logger&)
                    {
                        setter(profile, reg->to_uint32(modulus) * scale);
                    });
                    break;
                case (MappingType::sint32_with_modulus):
                    this->map_register32(node, [setter, scale = get_float_scale(node), modulus = get_modulus(node)]
                                         (T & profile, const std::shared_ptr<Register32>& reg, Logger&)
                    {
                        setter(profile, reg->to_sint32(modulus) * scale);
                    });
                    break;
                default:
                    throw Exception("Unhandled modbus float mapping type: ", type_string);
                }
            }

            void configure_bcr(const YAML::Node& node, Accessor<commonmodule::BCR, T> accessor)
            {
                const auto type_string = yaml::require_string(node, keys::type);

                switch(MappingTypeMeta::from_string(type_string))
                {
                case(MappingType::none):
                    break;
                case(MappingType::uint16):
                    this->map_register16(node, [accessor](T & profile, const std::shared_ptr<Register16>& reg, Logger&)
                    {
                        accessor.create(profile)->set_actval(reg->to_uint16());
                    });
                    break;
                case(MappingType::sint16):
                    this->map_register16(node, [accessor](T & profile, const std::shared_ptr<Register16>& reg, Logger&)
                    {
                        accessor.create(profile)->set_actval(reg->to_sint16());
                    });
                    break;
                case(MappingType::uint32):
                    this->map_register32(node, [accessor](T & profile, const std::shared_ptr<Register32>& reg, Logger&)
                    {
                        accessor.create(profile)->set_actval(reg->to_uint32());
                    });
                    break;
                case(MappingType::sint32):
                    this->map_register32(node, [accessor](T & profile, const std::shared_ptr<Register32>& reg, Logger&)
                    {
                        accessor.create(profile)->set_actval(reg->to_sint32());
                    });
                case(MappingType::uint32_with_modulus):
                    this->map_register32(node, [accessor, modulus = get_modulus(node)](T & profile, const std::shared_ptr<Register32>& reg, Logger&)
                    {
                        accessor.create(profile)->set_actval(reg->to_uint32(modulus));
                    });
                    break;
                case(MappingType::sint32_with_modulus):
                    this->map_register32(node, [accessor, modulus = get_modulus(node)](T & profile, const std::shared_ptr<Register32>& reg, Logger&)
                    {
                        accessor.create(profile)->set_actval(reg->to_sint32(modulus));
                    });
                    break;

                default:
                    throw Exception("Unhandled modbus mapping type: ", type_string);
                }
            }

            static uint32_t get_modulus(const YAML::Node& node)
            {
                return yaml::require(node, keys::modulus).as<uint32_t>();
            }

            static float get_float_scale(const YAML::Node& node)
            {
                return yaml::require(node, keys::scale).as<float>();
            }

            template <class S>
            void map_register16(const YAML::Node& node, const S& setter)
            {
                const auto index = yaml::require(node, keys::index).as<uint16_t>();

                const auto reg = std::make_shared<Register16>();

                this->builder->add_holding_register(index, reg);

                this->builder->add_begin_action([reg](Logger & logger)
                {
                    reg->reset();
                });

                this->builder->add_end_action(
                    [reg, setter, profile = this->profile](Logger & logger)
                {
                    if(reg->is_set())
                    {
                        setter(*profile, reg, logger);
                    }
                }
                );
            }

            template <class S>
            void map_register32(const YAML::Node& node, const S& setter)
            {
                const auto lower_index = yaml::require(node, keys::lower_index).as<uint16_t>();
                const auto upper_index = yaml::require(node, keys::upper_index).as<uint16_t>();

                const auto reg = std::make_shared<Register32>();

                this->builder->add_holding_register(lower_index, reg->get_lower());
                this->builder->add_holding_register(upper_index, reg->get_upper());

                this->builder->add_begin_action([reg](Logger&)
                {
                    reg->reset();
                });

                this->builder->add_end_action(
                    [reg, setter, profile = this->profile](Logger & logger)
                {
                    if(reg->is_set())
                    {
                        setter(*profile, reg, logger);
                    }
                }
                );
            }

        protected:

            void add_message_init_action(const std::function<void(T&)>& action) override
            {
                this->builder->add_begin_action([action, profile = this->profile](Logger&)
                {
                    action(*profile);
                });
            }

            void add_message_complete_action(const std::function<void(T&)>& action) override
            {
                this->builder->add_end_action([action, profile = this->profile](Logger&)
                {
                    action(*profile);
                });
            }

        };
    }
}

#endif
