

#ifndef OPENFMB_ADAPTER_CONFIGWRITEVISITORBASE_H
#define OPENFMB_ADAPTER_CONFIGWRITEVISITORBASE_H

#include "IModelVisitor.h"

#include "../ConfigStrings.h"

#include <yaml-cpp/yaml.h>

namespace adapter
{

    template<class T>
    class ConfigWriteVisitorBase : public IModelVisitor<T>
    {

    protected:

        YAML::Emitter& out;

    public:

        explicit ConfigWriteVisitorBase(YAML::Emitter& out) : out(out) {}

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

        void handle(const std::string& field_name, Accessor<commonmodule::MV, T> accessor) final
        {
            this->out << YAML::Key << field_name << YAML::Comment("MV");
            this->out << YAML::BeginMap;
            this->write_analogue_config(keys::mag);
            this->out << YAML::EndMap;
        }

        void handle(const std::string& field_name, Accessor<commonmodule::CMV, T> accessor) final
        {
            this->out << YAML::Key << field_name << YAML::Comment("CMV");
            this->out << YAML::BeginMap << keys::cVal;
            this->out << YAML::BeginMap;
            this->write_analogue_config(keys::ang);
            this->write_analogue_config(keys::mag);
            this->out << YAML::EndMap;
            this->out << YAML::EndMap;
        }

        void handle(const std::string& field_name, Accessor<commonmodule::BCR, T> accessor) final
        {
            this->out << YAML::Key << field_name << YAML::Comment("BCR");
            this->out << YAML::BeginMap;
            this->write_bcr_keys();
            this->out << YAML::EndMap;
        }

        void handle(const std::string& field_name, Accessor<commonmodule::StatusDPS, T> accessor) final
        {
            this->out << YAML::Key << field_name << YAML::Comment("StatusDPS");
            this->out << YAML::BeginMap;
            this->write_status_dps_keys();
            this->out << YAML::EndMap;
        }

        void handle(const std::string& field_name, Accessor <commonmodule::ControlValue, T> accessor) final
        {

        }

        void handle(const std::string& field_name, Accessor <commonmodule::StatusSPS, T> accessor) final
        {
            this->out << YAML::Key << field_name << YAML::Comment("StatusSPS");
            this->out << YAML::BeginMap;
            this->write_status_sps_keys();
            this->out << YAML::EndMap;
        }

        void handle(const std::string& field_name, Accessor <commonmodule::ControlDPC, T> accessor) final
        {
            this->out << YAML::Key << field_name << YAML::Comment("ControlDPC");
            this->out << YAML::BeginMap;
            this->write_control_dpc_keys();
            this->out << YAML::EndMap;
        }

        void handle(const std::string& field_name, Accessor <google::protobuf::FloatValue, T> accessor) final
        {
            this->out << YAML::Key << field_name << YAML::Comment("FloatValue");
            this->out << YAML::BeginMap;
            this->write_float_value_keys();
            this->out << YAML::EndMap;
        }

        void handle(const std::string& field_name, PrimitiveAccessor <commonmodule::StateKind, T> accessor) final
        {
            this->out << YAML::Key << field_name << YAML::Comment("StateKind");
            this->out << YAML::BeginMap;
            this->write_state_kind_keys();
            this->out << YAML::EndMap;
        }

        void handle(const std::string& field_name, Accessor <commonmodule::CheckConditions, T> accessor) final
        {
            this->out << YAML::Key << field_name;
            this->out << YAML::BeginMap;

            this->out << YAML::Value << keys::interlockCheck;
            this->write_check_conditions_interlockCheck_keys();

            this->out << YAML::Value << keys::synchroCheck;
            this->write_check_conditions_synchroCheck_keys();

            this->out << YAML::EndMap;
        }

        void handle(const std::string &field_name, Accessor <commonmodule::ControlFSCC, T> accessor) override {
            this->out << YAML::Key << field_name;
            this->write_control_fscc_keys();
        }

        void handle(const std::string& field_name, Accessor <switchmodule::SwitchCSG, T> accessor) final
        {
            this->out << YAML::Key << field_name;
            this->write_switch_csg_keys();
        }

        void handle(const std::string& field_name, Accessor<essmodule::ESSCSG, T> accessor) final
        {
            this->out << YAML::Key << field_name;
            this->write_ess_csg_keys();
        }

        void handle(const std::string& field_name, Accessor<commonmodule::ConductingEquipment, T> accessor) final
        {
            this->out << YAML::Key << field_name;
            this->out << YAML::BeginMap;

            this->out << YAML::Key << keys::named_object;
            this->out << YAML::BeginMap;
            this->out << YAML::Value << keys::description << YAML::Value << "";
            this->out << YAML::Value << keys::name << YAML::Value << "";
            this->out << YAML::EndMap;

            this->write_static_mrid();

            this->out << YAML::EndMap;
        }

        void handle(const std::string& field_name, Accessor<commonmodule::IdentifiedObject, T> accessor) final
        {
            this->out << YAML::Key << field_name;
            this->out << YAML::BeginMap;
            this->out << YAML::Value << keys::description << YAML::Value << "";
            this->write_static_mrid();
            this->out << YAML::Value << keys::name << YAML::Value << "";
            this->out << YAML::EndMap;
        }

        void handle(const std::string& field_name, Accessor<commonmodule::MessageInfo, T> accessor) final
        {
            this->out << YAML::Key << field_name << YAML::Comment("mRID set dynamically");
            this->out << YAML::BeginMap;
            this->out << YAML::Key << keys::identified_object;
            this->out << YAML::BeginMap;
            this->out << YAML::Value << keys::description << YAML::Value << "";
            this->out << YAML::Value << keys::name << YAML::Value << "";
            this->out << YAML::EndMap;
            this->out << YAML::EndMap;
        }

    protected:

        virtual void write_analogue_keys() = 0;

        virtual void write_bcr_keys() = 0;

        virtual void write_status_dps_keys() = 0;

        virtual void write_status_sps_keys() = 0;

        virtual void write_control_dpc_keys() = 0;

        virtual void write_float_value_keys() = 0;

        virtual void write_state_kind_keys() = 0;

        virtual void write_check_conditions_interlockCheck_keys() = 0;

        virtual void write_check_conditions_synchroCheck_keys() = 0;

        virtual void write_switch_csg_keys() = 0;

        virtual void write_ess_csg_keys() = 0;

        virtual void write_control_fscc_keys() = 0;

    private:

        void write_static_mrid()
        {
            this->out << YAML::Value << keys::mRID << YAML::Value << "" << YAML::Comment("can be empty or a valid UUID");
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

#endif
