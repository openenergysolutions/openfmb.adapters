
#ifndef OPENFMB_ADAPTER_CONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_CONFIGREADVISITOR_H

#include "ProfileMapping.h"

#include "ConfigStrings.h"

#include <adapter-api/helpers/ConfigVisitorBase.h>

namespace adapter
{
    template <class T>
    class ConfigReadVisitor final : public ConfigVisitorBase<T>
    {
    public:

        ConfigReadVisitor(const YAML::Node& root, ProfileMapping<T>& mapping) :
            ConfigVisitorBase<T>(root),
            mapping(mapping)
        {}

        void handle(const std::string& field_name, getter_t<commonmodule::MV, T> getter) override
        {
            // MV only has a magnitude
            const auto node = yaml::require(this->get_config_node(field_name), keys::mag);
        }

        void handle(const std::string& field_name, getter_t<commonmodule::CMV, T> getter) override
        {
            this->configure_cmv(field_name, getter);
        }

        void handle(const std::string& field_name, getter_t<commonmodule::BCR, T> getter) override
        {
            const auto node = this->get_config_node(field_name);
        }

        void handle(const std::string& field_name, getter_t<commonmodule::ReadingMessageInfo, T> getter) override {}

        void handle(const std::string& field_name, getter_t<commonmodule::IdentifiedObject, T> getter) override {}

        void handle(const std::string& field_name, getter_t<commonmodule::ConductingEquipmentTerminalReading, T> getter) override
        {
            // TODO - nothing until we decide how to fill this in
        }

        void handle(const std::string& field_name, getter_t<commonmodule::LogicalNode, T> getter) override {}

        void handle(const std::string& field_name, getter_t<commonmodule::ENG_CalcMethodKind, T> getter) override {}

    private:

        void configure(const YAML::Node& node, uint16_t index, getter_t<commonmodule::MV, T> getter)
        {

        }

        void configure(const YAML::Node& node, uint16_t index, getter_t<commonmodule::BCR, T> getter)
        {

        }

        static double get_scale(const YAML::Node& node)
        {
            return yaml::require(node, keys::scale).as<double>();
        }

        void configure_cmv(const std::string& field_name, getter_t<commonmodule::CMV, T> getter)
        {
            const YAML::Node vector_node = yaml::require(
                                               this->get_config_node(field_name),
                                               "cVal"
                                           );

            // independently configure the angle and magnitude
            this->configure_cmv_mag(yaml::require(vector_node, keys::mag), getter);
            this->configure_cmv_ang(yaml::require(vector_node, keys::ang), getter);
        }

        void configure_cmv_ang(const YAML::Node& node, getter_t<commonmodule::CMV, T> getter)
        {

        }

        void configure_cmv_mag(const YAML::Node& node, getter_t<commonmodule::CMV, T> getter)
        {

        }

        ProfileMapping<T>& mapping;
    };

}

#endif //OPENFMB_ADAPTER_CONFIGREADVISITOR_H
