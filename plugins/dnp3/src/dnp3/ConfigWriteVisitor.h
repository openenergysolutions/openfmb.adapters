
#ifndef OPENFMB_ADAPTER_DNP3_CONFIGWRITEVISITOR_H
#define OPENFMB_ADAPTER_DNP3_CONFIGWRITEVISITOR_H

#include "adapter-api/helpers/ConfigWriteVisitorBase.h"
#include "adapter-api/ConfigStrings.h"

#include "ConfigStrings.h"

namespace adapter
{

    namespace dnp3
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
                this->write_analogue_config(keys::mag);
                this->out << YAML::EndMap;
            }

            void handle(const std::string& field_name, getter_t<commonmodule::CMV, T> getter) override
            {
                this->out << YAML::Key << field_name << YAML::Comment("CMV");
                this->out << YAML::BeginMap << "cVal";
                this->out << YAML::BeginMap;
                this->write_analogue_config(keys::ang);
                this->write_analogue_config(keys::mag);

                this->out << YAML::EndMap;
                this->out << YAML::EndMap;

            }

            void handle(const std::string& field_name, getter_t<commonmodule::BCR, T> getter) override
            {
                this->out << YAML::Key << field_name << YAML::Comment("BCR");
                this->out << YAML::BeginMap;
                this->out << YAML::Key << keys::index << -1;
                this->out << YAML::Key << keys::scale << 1.0;
                this->out << YAML::Key << keys::mapped_from << YAML::Value << keys::counter
                          << YAML::Comment("can be 'analog' or 'counter'");
                this->out << YAML::Key << commonmodule::UnitSymbolKind_descriptor()->name()
                          << commonmodule::UnitSymbolKind_Name(commonmodule::UnitSymbolKind::UnitSymbolKind_none);
                this->out << YAML::EndMap;
            }

        private:

            void write_analogue_config(const std::string& name)
            {
                this->out << YAML::Key << name;
                this->out << YAML::BeginMap;
                this->out << YAML::Key << keys::index << -1;
                this->out << YAML::Key << keys::scale << 1.0;
                this->out << YAML::EndMap;

            }
        };
    }
}

#endif
