
#ifndef OPENFMB_ADAPTER_MODBUS_CONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_MODBUS_CONFIGREADVISITOR_H

#include "IConfigurationBuilder.h"
#include "ConfigStrings.h"
#include "MappingType.h"
#include "Register16.h"
#include "Register32.h"

#include <adapter-api/config/PublishingConfigReadVisitor.h>

namespace adapter
{
    namespace modbus
    {
        template <class U>
        using setter_t = std::function<void (U&)>;

        template <class T>
        class ConfigReadVisitor final : public PublishingConfigReadVisitor<T>
        {
            const std::shared_ptr<T> profile;
            const std::shared_ptr<IConfigurationBuilder> builder;

        public:

            ConfigReadVisitor(const YAML::Node& root, std::shared_ptr<T> profile, std::shared_ptr<IConfigurationBuilder> builder) :
                PublishingConfigReadVisitor<T>(root),
                profile(profile),
                builder(std::move(builder))
            {}

            void handle(const std::string& field_name, Accessor<commonmodule::MV, T> accessor) override
            {
                // MV only has a magnitude
                this->configure_analogue(
                    yaml::require(this->get_config_node(field_name), ::adapter::keys::mag),
                    [accessor](T & profile) -> commonmodule::AnalogueValue*
                {
                    return accessor.create(profile)->mutable_mag();
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

                this->configure_analogue(
                    yaml::require(vector_node, ::adapter::keys::mag),
                    [accessor](T & profile) -> commonmodule::AnalogueValue*
                {
                    return accessor.create(profile)->mutable_cval()->mutable_mag();
                }
                );

                this->configure_analogue(
                    yaml::require(vector_node, ::adapter::keys::ang),
                    [accessor](T & profile) -> commonmodule::AnalogueValue*
                {
                    return accessor.create(profile)->mutable_cval()->mutable_ang();
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

            void handle(const std::string& field_name, Accessor<commonmodule::ControlValue, T> accessor) override
            {
                throw Exception("not implemented");
            }

            void handle(const std::string& field_name, Accessor<commonmodule::CheckConditions, T> accessor) override
            {
                throw Exception("not implemented");
            }

            void handle(const std::string& field_name, Accessor<switchmodule::SwitchCSG, T> accessor) override
            {
                throw Exception("not implemented");
            }

        private:

            void configure_analogue(const YAML::Node& node, mutable_getter_t<commonmodule::AnalogueValue, T> getter)
            {
                const auto type_string = yaml::require_string(node, keys::type);

                switch(MappingTypeMeta::from_string(type_string))
                {
                case (MappingType::none):
                    break;
                case (MappingType::uint16):
                    this->map_register16(node, [getter, scale = get_float_scale(node)](T & profile,
                                         const std::shared_ptr<Register16>& reg)
                    {
                        getter(profile)->mutable_f()->set_value(reg->to_uint16() * scale);
                    });
                    break;
                case (MappingType::sint16):
                    this->map_register16(node, [getter, scale = get_float_scale(node)](T & profile,
                                         const std::shared_ptr<Register16>& reg)
                    {
                        getter(profile)->mutable_f()->set_value(reg->to_sint16() * scale);
                    });
                    break;
                case (MappingType::uint32):
                    this->map_register32(node, [getter, scale = get_float_scale(node)](T & profile,
                                         const std::shared_ptr<Register32>& reg)
                    {
                        getter(profile)->mutable_f()->set_value(reg->to_uint32() * scale);
                    });
                    break;
                case (MappingType::sint32):
                    this->map_register32(node, [getter, scale = get_float_scale(node)](T & profile,
                                         const std::shared_ptr<Register32>& reg)
                    {
                        getter(profile)->mutable_f()->set_value(reg->to_sint32() * scale);
                    });
                    break;
                case (MappingType::uint32_with_modulus):
                    this->map_register32(node, [getter, scale = get_float_scale(node), modulus = get_modulus(node)]
                                         (T & profile, const std::shared_ptr<Register32>& reg)
                    {
                        getter(profile)->mutable_f()->set_value(reg->to_uint32(modulus) * scale);
                    });
                    break;
                case (MappingType::sint32_with_modulus):
                    this->map_register32(node, [getter, scale = get_float_scale(node), modulus = get_modulus(node)]
                                         (T & profile, const std::shared_ptr<Register32>& reg)
                    {
                        getter(profile)->mutable_f()->set_value(reg->to_sint32(modulus) * scale);
                    });
                    break;
                default:
                    throw Exception("Unhandled modbus mapping type: ", type_string);
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
                    this->map_register16(node, [accessor](T & profile, const std::shared_ptr<Register16>& reg)
                    {
                        accessor.create(profile)->set_actval(reg->to_uint16());
                    });
                    break;
                case(MappingType::sint16):
                    this->map_register16(node, [accessor](T & profile, const std::shared_ptr<Register16>& reg)
                    {
                        accessor.create(profile)->set_actval(reg->to_sint16());
                    });
                    break;
                case(MappingType::uint32):
                    this->map_register32(node, [accessor](T & profile, const std::shared_ptr<Register32>& reg)
                    {
                        accessor.create(profile)->set_actval(reg->to_uint32());
                    });
                    break;
                case(MappingType::sint32):
                    this->map_register32(node, [accessor](T & profile, const std::shared_ptr<Register32>& reg)
                    {
                        accessor.create(profile)->set_actval(reg->to_sint32());
                    });
                case(MappingType::uint32_with_modulus):
                    this->map_register32(node, [accessor, modulus = get_modulus(node)](T & profile, const std::shared_ptr<Register32>& reg)
                    {
                        accessor.create(profile)->set_actval(reg->to_uint32(modulus));
                    });
                    break;
                case(MappingType::sint32_with_modulus):
                    this->map_register32(node, [accessor, modulus = get_modulus(node)](T & profile, const std::shared_ptr<Register32>& reg)
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

                this->builder->add_begin_action([reg]()
                {
                    reg->reset();
                });

                this->builder->add_end_action(
                    [reg, setter, profile = this->profile]()
                {
                    if(reg->is_set())
                    {
                        setter(*profile, reg);
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

                this->builder->add_begin_action([reg]()
                {
                    reg->reset();
                });

                this->builder->add_end_action(
                    [reg, setter, profile = this->profile]()
                {
                    if(reg->is_set())
                    {
                        setter(*profile, reg);
                    }
                }
                );
            }

        protected:

            void add_message_init_action(const std::function<void(T&)>& action) override
            {
                this->builder->add_begin_action([action, profile = this->profile]()
                {
                    action(*profile);
                });
            }

            void add_message_complete_action(const std::function<void(T&)>& action) override
            {
                this->builder->add_end_action([action, profile = this->profile]()
                {
                    action(*profile);
                });
            }

        };
    }
}

#endif
