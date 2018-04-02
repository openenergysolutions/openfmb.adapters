#ifndef OPENFMB_ADAPTER_MODBUS_CONFIGWRITEVISITOR_H
#define OPENFMB_ADAPTER_MODBUS_CONFIGWRITEVISITOR_H

#include "adapter-api/helpers/ConfigWriteVisitorBase.h"

#include "ConfigStrings.h"
#include "MappingType.h"

namespace adapter
{
    namespace modbus
    {

        template<class T>
        class ConfigWriteVisitor final : public ConfigWriteVisitorBase<T>
        {

        public:
            ConfigWriteVisitor(YAML::Emitter& out) : ConfigWriteVisitorBase<T>(out) {}


            void handle(const std::string& field_name, getter_t<commonmodule::MV, T> getter) override
            {
                this->out << YAML::Key << field_name << YAML::Comment("MV");
                this->out << YAML::BeginMap;
                this->write_analogue_config("mag");
                this->out << YAML::EndMap;
            }

            void handle(const std::string& field_name, getter_t<commonmodule::CMV, T> getter) override
            {
                this->out << YAML::Key << field_name << YAML::Comment("CMV");
                this->out << YAML::BeginMap << "cVal";
                this->out << YAML::BeginMap;
                this->write_analogue_config("ang");
                this->write_analogue_config("mag");
                this->out << YAML::EndMap;
                this->out << YAML::EndMap;

            }

            void handle(const std::string& field_name, getter_t<commonmodule::BCR, T> getter) override
            {
                this->out << YAML::Key << field_name << YAML::Comment("BCR");
                this->out << YAML::BeginMap;
                this->out << YAML::Key << keys::type << YAML::Value << MappingTypeMeta::none << YAML::Comment("can be 'bit32', 'bit16', or 'none' to disable");
                this->out << YAML::Key << keys::lower_index << 0;
                this->out << YAML::Key << keys::upper_index << 1;
                this->out << YAML::EndMap;
            }

        private:

            void write_analogue_config(const std::string& name)
            {
                this->out << YAML::Key << name;
                this->out << YAML::BeginMap;
                this->out << YAML::Key << keys::type << YAML::Value << MappingTypeMeta::none << YAML::Comment("can be 'bit32', 'bit16', or 'none' to disable");
                this->out << YAML::Key << keys::lower_index << 0;
                this->out << YAML::Key << keys::upper_index << 1;
                this->out << YAML::Key << keys::scale << 1.0;
                this->out << YAML::EndMap;
            }
        };
    }
}

#endif
