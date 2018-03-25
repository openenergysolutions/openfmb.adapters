
#ifndef OPENFMB_ADAPTER_MAPPINGLOADER_H
#define OPENFMB_ADAPTER_MAPPINGLOADER_H

#include "ProfileMapping.h"
#include "ConfigStrings.h"
#include "MappingType.h"
#include "Register16.h"
#include "Register32.h"

#include <adapter-api/helpers/ConfigVisitorBase.h>

namespace adapter
{
    template <class T>
    class MappingLoader final : public ConfigVisitorBase<T>
    {
    public:

        MappingLoader(const YAML::Node& root, ProfileMapping<T>& mapping) :
            ConfigVisitorBase<T>(root),
            mapping(mapping)
        {}

        void handle(const std::string& field_name, getter_t<commonmodule::MV, T> getter) override
        {
            // MV only has a magnitude

            this->configure_analogue(
                yaml::require(this->get_config_node(field_name), keys::mag),
                [getter](T & profile) -> commonmodule::AnalogueValue*
            {
                return getter(profile)->mutable_mag();
            }
            );
        }

        void handle(const std::string& field_name, getter_t<commonmodule::CMV, T> getter) override
        {
            this->configure(field_name, getter);
        }

        void handle(const std::string& field_name, getter_t<commonmodule::BCR, T> getter) override {}

        void handle(const std::string& field_name, getter_t<commonmodule::ReadingMessageInfo, T> getter) override {}

        void handle(const std::string& field_name, getter_t<commonmodule::IdentifiedObject, T> getter) override {}

        void handle(const std::string& field_name, getter_t<commonmodule::ConductingEquipmentTerminalReading, T> getter) override {}

        void handle(const std::string& field_name, getter_t<commonmodule::LogicalNode, T> getter) override {}

        void handle(const std::string& field_name, getter_t<commonmodule::ENG_CalcMethodKind, T> getter) override {}

    private:

        static double get_scale(const YAML::Node& node)
        {
            return yaml::require(node, keys::scale).as<double>();
        }

        void configure(const std::string& field_name, getter_t<commonmodule::CMV, T> getter)
        {
            const YAML::Node vector_node = yaml::require(
                                               this->get_config_node(field_name),
                                               keys::cVal
                                           );

            // independently configure the angle and magnitude

            this->configure_analogue(
                yaml::require(vector_node, keys::mag),
                [getter](T & profile) -> commonmodule::AnalogueValue*
            {
                return getter(profile)->mutable_cval()->mutable_mag();
            }
            );

            this->configure_analogue(
                yaml::require(vector_node, keys::ang),
                [getter](T & profile) -> commonmodule::AnalogueValue*
            {
                return getter(profile)->mutable_cval()->mutable_ang();
            }
            );
        }

        template <class F>
        void configure_analogue(const YAML::Node& node, const F& getter)
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
        void map_analogue_bit16(const YAML::Node& node, const F& getter)
        {
            const auto scale = yaml::require(node, keys::scale).as<float>();
            const auto index = yaml::require(node, keys::index).as<uint16_t>();

            const auto reg = std::make_shared<Register16>();

            this->mapping.add_holding_register(index, reg);
            this->add_analogue_init_and_flush(reg, scale, getter);
        }

        template <class F>
        void map_analogue_bit32(const YAML::Node& node, const F& getter)
        {
            const auto scale = yaml::require(node, keys::scale).as<float>();
            const auto upper_index = yaml::require(node, keys::upper_index).as<uint16_t>();
            const auto lower_index = yaml::require(node, keys::lower_index).as<uint16_t>();

            const auto reg = std::make_shared<Register32>();

            this->mapping.add_holding_register(upper_index, reg->get_upper());
            this->mapping.add_holding_register(lower_index, reg->get_lower());
            this->add_analogue_init_and_flush(reg, scale, getter);
        }

        template <class F>
        void add_analogue_init_and_flush(const std::shared_ptr<ICachedValue>& value, float scale, const F& getter)
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

        ProfileMapping<T>& mapping;
    };

}

#endif //OPENFMB_ADAPTER_MAPPINGLOADER_H
