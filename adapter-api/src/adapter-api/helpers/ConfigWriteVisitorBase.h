

#ifndef OPENFMB_ADAPTER_CONFIGWRITEVISITORBASE_H
#define OPENFMB_ADAPTER_CONFIGWRITEVISITORBASE_H

#include "IProtoVisitor.h"

#include "../ConfigStrings.h"

#include <yaml-cpp/yaml.h>

namespace adapter
{

    template<class T>
    class ConfigWriteVisitorBase : public IProtoVisitor<T>
    {

    protected:

        YAML::Emitter& out;

    public:

        ConfigWriteVisitorBase(YAML::Emitter& out) : out(out) {}

        void start_message_field(const std::string& field_name) final
        {
            out << YAML::Key << field_name;
            out << YAML::BeginMap;
        }

        void end_message_field() final
        {
            out << YAML::EndMap;
        }

        virtual int start_repeated_message_field(const std::string& field_name) final
        {
            out << YAML::Key << field_name;
            out << YAML::BeginSeq;
            return 1;
        }

        virtual void start_iteration(int i) final
        {
            out << YAML::BeginMap;
        }

        virtual void end_iteration() final
        {
            out << YAML::EndMap;
        }

        virtual void end_repeated_message_field() final
        {
            out << YAML::EndSeq;
        }

        void handle(const std::string& field_name, getter_t <commonmodule::IdentifiedObject, T> getter) final
        {
            this->out << YAML::Key << field_name;
            this->out << YAML::BeginMap;
            this->out << YAML::Value << keys::description << YAML::Value << "";
            this->out << YAML::Value << keys::mRID << YAML::Value << "" << YAML::Comment("can be empty or a valid UUID");
            this->out << YAML::Value << keys::name << YAML::Value << "";
            this->out << YAML::EndMap;
        }

        void handle(const std::string& field_name, getter_t<commonmodule::ReadingMessageInfo, T> getter) final
        {
            this->out << YAML::Key << field_name << YAML::Comment("ReadingMessageInfo - mRID set dynamically");
            this->out << YAML::BeginMap;
            this->out << YAML::Key << keys::identified_object;
            this->out << YAML::BeginMap;
            this->out << YAML::Value << keys::description << YAML::Value << "";
            this->out << YAML::Value << keys::name << YAML::Value << "";
            this->out << YAML::EndMap;
            this->out << YAML::Key << ::adapter::keys::application_name << YAML::Value << "";
            this->out << YAML::EndMap;
        }

        // TODO - ignore these for now

        void handle(const std::string& field_name, getter_t<commonmodule::ConductingEquipmentTerminalReading, T> getter) final {}

        void handle(const std::string& field_name, getter_t<commonmodule::ENG_CalcMethodKind, T> getter) final {}

        void handle(const std::string& field_name, getter_t<commonmodule::ENG_PFSignKind, T> getter) final {}

    };

}

#endif //OPENFMB_ADAPTER_CONFIGWRITEVISITORBASE_H
