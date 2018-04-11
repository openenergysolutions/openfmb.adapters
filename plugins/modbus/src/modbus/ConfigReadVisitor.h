
#ifndef OPENFMB_ADAPTER_MODBUS_CONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_MODBUS_CONFIGREADVISITOR_H

#include "ProfileMapping.h"
#include "ConfigStrings.h"
#include "MappingType.h"
#include "Register16.h"
#include "Register32.h"

#include <adapter-api/helpers/ConfigReadVisitorBase.h>

namespace adapter
{
    namespace modbus
    {
        template <class U>
        using setter_t = std::function<void (U&)>;

        template <class T>
        class ConfigReadVisitor final : public ConfigReadVisitorBase<T>
        {
        public:

            ConfigReadVisitor(const YAML::Node& root, ProfileMapping<T>& mapping) :
                ConfigReadVisitorBase<T>(root),
                mapping(mapping)
            {}

            void handle(const std::string& field_name, getter_t<commonmodule::MV, T> getter) override
            {
                // MV only has a magnitude
                this->configure_analogue(
                    yaml::require(this->get_config_node(field_name), ::adapter::keys::mag),
                    [getter](T & profile) -> commonmodule::AnalogueValue*
                {
                    return getter(profile)->mutable_mag();
                }
                );
            }

            void handle(const std::string& field_name, getter_t<commonmodule::CMV, T> getter) override
            {
                const YAML::Node vector_node = yaml::require(
                                                   this->get_config_node(field_name),
                                                   ::adapter::keys::cVal
                                               );

                // independently configure the angle and magnitude

                this->configure_analogue(
                    yaml::require(vector_node, ::adapter::keys::mag),
                    [getter](T & profile) -> commonmodule::AnalogueValue*
                {
                    return getter(profile)->mutable_cval()->mutable_mag();
                }
                );

                this->configure_analogue(
                    yaml::require(vector_node, ::adapter::keys::ang),
                    [getter](T & profile) -> commonmodule::AnalogueValue*
                {
                    return getter(profile)->mutable_cval()->mutable_ang();
                }
                );

            }

            void handle(const std::string& field_name, getter_t<commonmodule::BCR, T> getter) override
            {
                this->configure_bcr(
                    this->get_config_node(field_name),
                    getter
                );
            }

            void handle(const std::string& field_name, getter_t<commonmodule::StatusDPS, T> getter) override
            {
                // TODO
            }

        private:

            void configure_analogue(const YAML::Node& node, getter_t<commonmodule::AnalogueValue, T> getter)
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
                        getter(profile)->set_f(reg->to_uint16() * scale);
                    });
                    break;
                case (MappingType::sint16):
                    this->map_register16(node, [getter, scale = get_float_scale(node)](T & profile,
                                         const std::shared_ptr<Register16>& reg)
                    {
                        getter(profile)->set_f(reg->to_sint16() * scale);
                    });
                    break;
                case (MappingType::uint32):
                    this->map_register32(node, [getter, scale = get_float_scale(node)](T & profile,
                                         const std::shared_ptr<Register32>& reg)
                    {
                        getter(profile)->set_f(reg->to_uint32() * scale);
                    });
                    break;
                case (MappingType::sint32):
                    this->map_register32(node, [getter, scale = get_float_scale(node)](T & profile,
                                         const std::shared_ptr<Register32>& reg)
                    {
                        getter(profile)->set_f(reg->to_sint32() * scale);
                    });
                    break;
                case (MappingType::uint32_with_modulus):
                    {
                        this->map_register32(node, [getter, scale = get_float_scale(node), modulus = get_modulus(node)]
                                             (T & profile, const std::shared_ptr<Register32>& reg)
                        {
                            getter(profile)->set_f(reg->to_uint32(modulus) * scale);
                        });
                        break;
                    }
                case (MappingType::sint32_with_modulus):
                    {
                        this->map_register32(node, [getter, scale = get_float_scale(node), modulus = get_modulus(node)]
                                             (T & profile, const std::shared_ptr<Register32>& reg)
                        {
                            getter(profile)->set_f(reg->to_sint32(modulus) * scale);
                        });
                        break;
                    }
                default:
                    throw Exception("Unhandled modbus mapping type: ", type_string);
                }
            }

            void configure_bcr(const YAML::Node& node, getter_t<commonmodule::BCR, T> getter)
            {
                const auto type_string = yaml::require_string(node, keys::type);

                switch(MappingTypeMeta::from_string(type_string))
                {
                case(MappingType::none):
                    break;
                case(MappingType::uint16):
                    this->map_register16(node, [getter](T & profile, const std::shared_ptr<Register16>& reg)
                    {
                        getter(profile)->set_actval(reg->to_uint16());
                    });
                    break;
                case(MappingType::sint16):
                    this->map_register16(node, [getter](T & profile, const std::shared_ptr<Register16>& reg)
                    {
                        getter(profile)->set_actval(reg->to_sint16());
                    });
                    break;
                case(MappingType::uint32):
                    this->map_register32(node, [getter](T & profile, const std::shared_ptr<Register32>& reg)
                    {
                        getter(profile)->set_actval(reg->to_uint32());
                    });
                    break;
                case(MappingType::sint32):
                    this->map_register32(node, [getter](T & profile, const std::shared_ptr<Register32>& reg)
                    {
                        getter(profile)->set_actval(reg->to_sint32());
                    });
                case(MappingType::uint32_with_modulus):
                    {
                        this->map_register32(node, [getter, modulus = get_modulus(node)](T & profile, const std::shared_ptr<Register32>& reg)
                        {
                            getter(profile)->set_actval(reg->to_uint32(modulus));
                        });
                    }
                    break;
                case(MappingType::sint32_with_modulus):
                    {
                        this->map_register32(node, [getter, modulus = get_modulus(node)](T & profile, const std::shared_ptr<Register32>& reg)
                        {
                            getter(profile)->set_actval(reg->to_sint32(modulus));
                        });
                    }
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

                this->mapping.add_holding_register(index, reg);

                this->mapping.add_init_action([reg]()
                {
                    reg->reset();
                });

                this->mapping.add_flush_action(
                    [reg, setter](T & profile)
                {
                    if(reg->is_set())
                    {
                        setter(profile, reg);
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

                this->mapping.add_holding_register(lower_index, reg->get_lower());
                this->mapping.add_holding_register(upper_index, reg->get_upper());

                this->mapping.add_init_action([reg]()
                {
                    reg->reset();
                });

                this->mapping.add_flush_action(
                    [reg, setter](T & profile)
                {
                    if(reg->is_set())
                    {
                        setter(profile, reg);
                    }
                }
                );
            }

        protected:

            void add_message_init_action(const std::function<void(T&)>& action) override
            {
                this->mapping.add_flush_action(action);
            }

            void add_message_complete_action(const std::function<void(T&)>& action) override
            {
                this->mapping.add_flush_action(action);
            }

        private:

            ProfileMapping<T>& mapping;
        };
    }
}

#endif
