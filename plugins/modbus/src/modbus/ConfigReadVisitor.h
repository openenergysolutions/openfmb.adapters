
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
                const auto node = this->get_config_node(field_name);

                const auto type = MappingTypeMeta::from_string(yaml::require_string(node, keys::type));
                switch(type)
                {
                case(MappingType::bit16):
                    this->map_bcr_bit16(node, getter);
                    break;
                case(MappingType::bit32):
                    this->map_bcr_bit32(node, getter);
                    break;
                default:
                    break;
                }
            }

            void handle(const std::string& field_name, getter_t<commonmodule::StatusDPS, T> getter) override
            {

            }

        private:

            void map_bcr_bit16(const YAML::Node& node, getter_t<commonmodule::BCR, T> getter)
            {
                const auto index = yaml::require(node, keys::index).as<uint16_t>();

                const auto reg = std::make_shared<Register16>();
                this->mapping.add_holding_register(index, reg);
                this->add_bcr_init_and_flush(reg, getter);
            }

            void map_bcr_bit32(const YAML::Node& node, getter_t<commonmodule::BCR, T> getter)
            {
                const auto lower_index = yaml::require(node, keys::lower_index).as<uint16_t>();
                const auto upper_index = yaml::require(node, keys::upper_index).as<uint16_t>();
                const auto modulus = yaml::require(node, keys::modulus).as<uint32_t>();

                const auto reg = std::make_shared<Register32>(modulus);

                this->mapping.add_holding_register(lower_index, reg->get_lower());
                this->mapping.add_holding_register(upper_index, reg->get_upper());

                this->add_bcr_init_and_flush(reg, getter);
            }

            void add_bcr_init_and_flush(const std::shared_ptr<ICachedValue>& value, getter_t<commonmodule::BCR, T> getter)
            {
                this->mapping.add_init_action([value]()
                {
                    value->reset();
                });

                this->mapping.add_flush_action(
                    [value, getter](T & profile) -> bool
                {
                    if(value->is_set())
                    {
                        getter(profile)->set_actval(value->to_int64());
                        return true;
                    }
                    return false;
                }
                );
            }

            template <class F>
            void configure_analogue(const YAML::Node& node, F getter)
            {
                const auto type = MappingTypeMeta::from_string(yaml::require_string(node, keys::type));
                switch(type)
                {
                case(MappingType::bit16):
                    this->map_analogue_bit16(node, getter);
                    break;
                case(MappingType::bit32):
                    this->map_analogue_bit32(node, getter);
                    break;
                default:
                    break;
                }
            }

            template <class F>
            void map_analogue_bit16(const YAML::Node& node, F getter)
            {
                const auto scale = yaml::require(node, keys::scale).as<float>();
                const auto index = yaml::require(node, keys::index).as<uint16_t>();

                const auto reg = std::make_shared<Register16>();

                this->mapping.add_holding_register(index, reg);
                this->add_analogue_init_and_flush(reg, scale, getter);
            }

            template <class F>
            void map_analogue_bit32(const YAML::Node& node, F getter)
            {
                const auto scale = yaml::require(node, keys::scale).as<float>();
                const auto upper_index = yaml::require(node, keys::upper_index).as<uint16_t>();
                const auto lower_index = yaml::require(node, keys::lower_index).as<uint16_t>();
                const auto modulus = yaml::require(node, keys::modulus).as<uint32_t>();

                const auto reg = std::make_shared<Register32>(modulus);

                this->mapping.add_holding_register(upper_index, reg->get_upper());
                this->mapping.add_holding_register(lower_index, reg->get_lower());
                this->add_analogue_init_and_flush(reg, scale, getter);
            }

            template <class F>
            void add_analogue_init_and_flush(const std::shared_ptr<ICachedValue>& value, float scale, F getter)
            {
                this->mapping.add_init_action([value]()
                {
                    value->reset();
                });

                this->mapping.add_flush_action(
                    [value, getter, scale](T & profile) -> bool
                {
                    if(value->is_set())
                    {
                        getter(profile)->set_f(value->to_float()*scale);
                        return true;
                    }
                    return false;
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
