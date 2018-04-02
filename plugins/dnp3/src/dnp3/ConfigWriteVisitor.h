
#ifndef OPENFMB_ADAPTER_DNP3_CONFIGWRITEVISITOR_H
#define OPENFMB_ADAPTER_DNP3_CONFIGWRITEVISITOR_H

#include "adapter-api/helpers/ConfigWriteVisitorBase.h"

#include "ConfigKeys.h"

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
                this->out << YAML::Key << keys::index << -1;
                this->out << YAML::Key << keys::scale << 1.0;
                this->out << YAML::Key << keys::mapped_from << YAML::Value << keys::counter
                          << YAML::Comment("can be 'analog' or 'counter'");
                this->out << YAML::Key << commonmodule::UnitSymbolKind_descriptor()->name()
                          << commonmodule::UnitSymbolKind_Name(commonmodule::UnitSymbolKind::UnitSymbolKind_none);
                this->out << YAML::EndMap;
            }

            void handle(const std::string& field_name, getter_t<commonmodule::ReadingMessageInfo, T> getter) override
            {
                this->out << YAML::Key << field_name
                          << YAML::Comment("ReadingMessageInfo - the mRID is set dynamically");
                this->out << YAML::BeginMap;
                this->out << YAML::Key << keys::identified_object;
                this->out << YAML::BeginMap;
                this->out << YAML::Value << keys::description << YAML::Value << "default";
                this->out << YAML::Value << keys::name << YAML::Value << "default";
                this->out << YAML::EndMap;
                this->out << YAML::Key << keys::application_name << YAML::Value << "default";
                this->out << YAML::EndMap;
            }

            void handle(const std::string& field_name, getter_t<commonmodule::IdentifiedObject, T> getter) override
            {
                this->write_identified_object(field_name);
            }

            void handle(const std::string& field_name,
                        getter_t<commonmodule::ConductingEquipmentTerminalReading, T> getter) override
            {
                // don't do anything until we understand how to set these fields
            }

            void handle(const std::string& field_name, getter_t<commonmodule::ENG_PFSignKind, T> getter) override
            {

            }

            void handle(const std::string& field_name, getter_t<commonmodule::LogicalNode, T> getter) override
            {
                this->out << YAML::Key << field_name;
                this->out << YAML::BeginMap;
                this->write_identified_object(keys::identified_object);
                this->out << YAML::EndMap;
            }

            void handle(const std::string& field_name, getter_t<commonmodule::ENG_CalcMethodKind, T> getter) override
            {
                this->out << YAML::Key << field_name;
                this->out << YAML::BeginMap;
                // TODO - what should be the default here?
                this->out << YAML::Key << keys::set_val << YAML::Value
                          << commonmodule::CalcMethodKind_Name(commonmodule::CalcMethodKind::CalcMethodKind_M_CLASS);
                this->out << YAML::EndMap;
            }

        private:

            void write_identified_object(const std::string& field_name)
            {
                this->out << YAML::Key << field_name;
                this->out << YAML::BeginMap;
                this->out << YAML::Value << keys::description << YAML::Value << "default";
                this->out << YAML::Value << keys::mRID << YAML::Value << keys::default_uuid << YAML::Comment("set me");
                this->out << YAML::Value << keys::name << YAML::Value << "default";
                this->out << YAML::EndMap;
            }

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
