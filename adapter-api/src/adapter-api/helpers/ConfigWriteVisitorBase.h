

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

        void handle(const std::string& field_name, getter_t<commonmodule::MV, T> getter) final
        {
            this->out << YAML::Key << field_name << YAML::Comment("MV");
            this->out << YAML::BeginMap;
            this->write_analogue_config(keys::mag);
            this->out << YAML::EndMap;
        }

        void handle(const std::string& field_name, getter_t<commonmodule::CMV, T> getter) final
        {
            this->out << YAML::Key << field_name << YAML::Comment("CMV");
            this->out << YAML::BeginMap << keys::cVal;
            this->out << YAML::BeginMap;
            this->write_analogue_config(keys::ang);
            this->write_analogue_config(keys::mag);
            this->out << YAML::EndMap;
            this->out << YAML::EndMap;
        }

        void handle(const std::string& field_name, getter_t<commonmodule::BCR, T> getter) final
        {
            this->out << YAML::Key << field_name << YAML::Comment("BCR");
            this->out << YAML::BeginMap;
            this->write_bcr_keys();
            this->out << YAML::EndMap;
        }

        void handle(const std::string& field_name, getter_t<commonmodule::StatusDPS, T> getter) override
        {
            this->out << YAML::Key << field_name << YAML::Comment("StatusDPS");
            this->out << YAML::BeginMap;
            this->write_status_dps_keys();
            this->out << YAML::EndMap;
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
            this->write_message_info(field_name);
        }

        void handle(const std::string& field_name, getter_t<commonmodule::StatusMessageInfo, T> getter) final
        {
            this->write_message_info(field_name);
        }

        // TODO - ignore these for now

        void handle(const std::string& field_name, getter_t<commonmodule::ConductingEquipmentTerminalReading, T> getter) final {}

        void handle(const std::string& field_name, getter_t<commonmodule::ENG_CalcMethodKind, T> getter) final {}

        void handle(const std::string& field_name, getter_t<commonmodule::ENG_PFSignKind, T> getter) final {}

    protected:

        virtual void write_analogue_keys() = 0;

        virtual void write_bcr_keys() = 0;

        virtual void write_status_dps_keys() = 0;

    private:

        void write_message_info(const std::string& field_name)
        {
            this->out << YAML::Key << field_name << YAML::Comment("mRID set dynamically");
            this->out << YAML::BeginMap;
            this->out << YAML::Key << keys::identified_object;
            this->out << YAML::BeginMap;
            this->out << YAML::Value << keys::description << YAML::Value << "";
            this->out << YAML::Value << keys::name << YAML::Value << "";
            this->out << YAML::EndMap;
            this->out << YAML::Key << ::adapter::keys::application_name << YAML::Value << "";
            this->out << YAML::EndMap;
        }

        void write_analogue_config(const std::string& name)
        {
            this->out << YAML::Key << name;
            this->out << YAML::BeginMap;
            this->write_analogue_keys();
            this->out << YAML::EndMap;
        }



    };

}

#endif //OPENFMB_ADAPTER_CONFIGWRITEVISITORBASE_H
