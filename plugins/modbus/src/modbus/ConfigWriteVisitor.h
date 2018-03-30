#ifndef OPENFMB_ADAPTER_MODBUS_CONFIGWRITEVISITOR_H
#define OPENFMB_ADAPTER_MODBUS_CONFIGWRITEVISITOR_H

#include "adapter-api/helpers/IProtoVisitor.h"

#include <yaml-cpp/yaml.h>

#include "ConfigStrings.h"
#include "MappingType.h"

namespace adapter
{
    namespace modbus
    {

        template<class T>
        class ConfigWriteVisitor final : public IProtoVisitor<T>
        {
            YAML::Emitter& out;

        public:
            ConfigWriteVisitor(YAML::Emitter& out) : out(out) {}

            void start_message_field(const std::string& field_name) override
            {
                out << YAML::Key << field_name;
                out << YAML::BeginMap;
            }

            void handle(const std::string& field_name, getter_t<commonmodule::MV, T> getter) override
            {
                out << YAML::Key << field_name << YAML::Comment("MV");
                out << YAML::BeginMap;
                this->write_analogue_config("mag");
                out << YAML::EndMap;
            }

            void handle(const std::string& field_name, getter_t<commonmodule::CMV, T> getter) override
            {
                out << YAML::Key << field_name << YAML::Comment("CMV");
                out << YAML::BeginMap << "cVal";
                out << YAML::BeginMap;
                this->write_analogue_config("ang");
                this->write_analogue_config("mag");
                out << YAML::EndMap;
                out << YAML::EndMap;

            }

            void handle(const std::string& field_name, getter_t<commonmodule::BCR, T> getter) override
            {
                out << YAML::Key << field_name << YAML::Comment("BCR");
                out << YAML::BeginMap;
                out << YAML::Key << keys::type << YAML::Value << MappingTypeMeta::none << YAML::Comment("can be 'bit32', 'bit16', or 'none' to disable");
                out << YAML::Key << keys::lower_index << 0;
                out << YAML::Key << keys::upper_index << 1;
                out << YAML::EndMap;
            }

            void handle(const std::string& field_name, getter_t<commonmodule::ReadingMessageInfo, T> getter) override
            {
                out << YAML::Key << field_name << YAML::Comment("ReadingMessageInfo - the mRID is set dynamically");
                out << YAML::BeginMap;
                out << YAML::Key << keys::identified_object;
                out << YAML::BeginMap;
                out << YAML::Value << keys::description << YAML::Value << "" << YAML::Comment(comments::ignored_if_blank);
                out << YAML::Value << keys::name << YAML::Value << "" << YAML::Comment(comments::ignored_if_blank);
                out << YAML::EndMap;
                out << YAML::Key << keys::application_name << YAML::Value << "" << YAML::Comment(comments::ignored_if_blank);
                out << YAML::EndMap;
            }

            void handle(const std::string& field_name, getter_t<commonmodule::IdentifiedObject, T> getter) override
            {
                this->write_identified_object(field_name);
            }

            void handle(const std::string& field_name, getter_t<commonmodule::ConductingEquipmentTerminalReading, T> getter) override {}

            void handle(const std::string& field_name, getter_t<commonmodule::LogicalNode, T> getter) override
            {
                out << YAML::Key << field_name;
                out << YAML::BeginMap;
                this->write_identified_object(keys::identified_object);
                out << YAML::EndMap;
            }

            void handle(const std::string& field_name, getter_t<commonmodule::ENG_CalcMethodKind, T> getter) override {}

            void handle(const std::string &field_name, getter_t<commonmodule::ENG_PFSignKind, T> getter) override {}

            void end_message_field() override
            {
                out << YAML::EndMap;
            }

        private:

            void write_identified_object(const std::string& field_name)
            {
                out << YAML::Key << field_name;
                out << YAML::BeginMap;
                out << YAML::Value << keys::description << YAML::Value << "" << YAML::Comment(comments::ignored_if_blank);
                out << YAML::Value << keys::mRID << YAML::Value << "" << YAML::Comment(comments::ignored_if_blank);
                out << YAML::Value << keys::name << YAML::Value << "" << YAML::Comment(comments::ignored_if_blank);
                out << YAML::EndMap;
            }

            void write_analogue_config(const std::string& name)
            {
                out << YAML::Key << name;
                out << YAML::BeginMap;
                out << YAML::Key << keys::type << YAML::Value << MappingTypeMeta::none << YAML::Comment("can be 'bit32', 'bit16', or 'none' to disable");
                out << YAML::Key << keys::lower_index << 0;
                out << YAML::Key << keys::upper_index << 1;
                out << YAML::Key << keys::scale << 1.0;
                out << YAML::EndMap;
            }
        };
    }
}

#endif
