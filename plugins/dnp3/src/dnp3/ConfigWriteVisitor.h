
#ifndef OPENFMB_ADAPTER_DNP3_CONFIGWRITEVISITOR_H
#define OPENFMB_ADAPTER_DNP3_CONFIGWRITEVISITOR_H


#include "adapter-api/config/ConfigWriteVisitorBase.h"
#include "adapter-api/util/EnumUtil.h"
#include "adapter-api/util/Exception.h"



namespace adapter {

namespace dnp3 {

    class ConfigWriteVisitor final : public ConfigWriteVisitorBase {

    public:

        explicit ConfigWriteVisitor(YAML::Emitter& out);

    protected:

        void write_mapped_enum_keys(google::protobuf::EnumDescriptor const* descriptor, YAML::Emitter& out) override;

        /*
        void write_crob_keys(uint16_t index, uint32_t priority, opendnp3::ControlCode code)
        {
            this->out << YAML::BeginMap;

            this->out << YAML::Key << keys::index << YAML::Value << index;
            this->out << YAML::Key << keys::priority << YAML::Value << priority;
            this->out << YAML::Key << keys::g12v1;

            this->out << YAML::BeginMap;
            this->out << YAML::Key << keys::control_code << YAML::Value << ControlCodeMeta::to_string(code);
            this->out << YAML::Key << keys::count << YAML::Value << 1;
            this->out << YAML::Key << keys::on_time_ms << YAML::Value << 1000;
            this->out << YAML::Key << keys::off_time_ms << YAML::Value << 1000;
            this->out << YAML::EndMap;

            this->out << YAML::EndMap;
        }

        void write_bcr_keys() override
        {

            this->out << YAML::Key << keys::input_type << YAML::Value << InputTypeMeta::disabled << YAML::Comment("{ disabled, analog, counter }");
            this->out << YAML::Key << keys::index << 0;
            // scaling is required for BCRs to change orders of magnitude, e.g. kWh to Wh (x1000)
            this->out << YAML::Key << keys::scale << 1.0;
        }

        void write_analogue_keys() override
        {
            this->out << YAML::Key << keys::input_type << YAML::Value << InputTypeMeta::disabled << YAML::Comment("{ disabled, analog }");
            this->out << YAML::Key << keys::index << 0;
            this->out << YAML::Key << keys::scale << 1.0;
        }

        void write_status_dps_keys() override
        {
            this->out << YAML::Key << keys::input_type << YAML::Value << InputTypeMeta::disabled << YAML::Comment("{ disabled, binary }");
            this->out << YAML::Key << keys::index << 0;
            this->out << YAML::Key << keys::high << commonmodule::DbPosKind_descriptor()->FindValueByNumber(commonmodule::DbPosKind::DbPosKind_closed)->name();
            this->out << YAML::Key << keys::low << commonmodule::DbPosKind_descriptor()->FindValueByNumber(commonmodule::DbPosKind::DbPosKind_open)->name();
        }

        void write_check_conditions_interlockCheck_keys() override
        {
            //this->out << YAML::BeginMap;

            this->out << YAML::Key << keys::when_true_execute;
            this->out << YAML::BeginSeq;
            this->write_crob_keys(0, 0, opendnp3::ControlCode::LATCH_ON);
            this->out << YAML::EndSeq;

            this->out << YAML::Key << keys::when_false_execute;
            this->out << YAML::BeginSeq;
            this->write_crob_keys(0, 1, opendnp3::ControlCode::LATCH_OFF);
            this->out << YAML::EndSeq;

            //this->out << YAML::EndMap;
        }

        void write_check_conditions_synchroCheck_keys() override
        {
            //this->out << YAML::BeginMap;

            this->out << YAML::Key << keys::when_true_execute;
            this->out << YAML::BeginSeq;
            this->write_crob_keys(1, 2, opendnp3::ControlCode::LATCH_ON);
            this->out << YAML::EndSeq;

            this->out << YAML::Key << keys::when_false_execute;
            this->out << YAML::BeginSeq;
            this->write_crob_keys(1, 3, opendnp3::ControlCode::LATCH_OFF);
            this->out << YAML::EndSeq;

            //this->out << YAML::EndMap;
        }

        void write_switch_csg_keys() override
        {
            //this->out << YAML::Comment("DNP3 adapter supports a SwitchCSG with a single value in schedule");
            //this->out << YAML::BeginMap;

            this->out << YAML::Key << keys::when_true_execute;
            this->out << YAML::BeginSeq;
            this->write_crob_keys(2, 4, opendnp3::ControlCode::LATCH_ON);
            this->out << YAML::EndSeq;

            this->out << YAML::Key << keys::when_false_execute;
            this->out << YAML::BeginSeq;
            this->write_crob_keys(2, 5, opendnp3::ControlCode::LATCH_OFF);
            this->out << YAML::EndSeq;

            //this->out << YAML::EndMap;
        }

        void write_schedule_csg_keys() override
        {
            throw Exception("not implemented");
        }

        void write_status_sps_keys() override
        {
            throw Exception("not implemented");
        }

        void write_control_dpc_keys() override
        {
            throw Exception("not implemented");
        }

        void write_float_value_keys() override
        {
            throw Exception("not implemented");
        }
        void write_enum_keys(const google::protobuf::EnumDescriptor& descriptor) override
        {
            this->out << YAML::Key << keys::input_type << InputTypeMeta::to_string(InputType::disabled) << YAML::Comment("set to binary");
            this->out << YAML::Key << keys::index << YAML::Value << 0;
            this->out << YAML::Key << keys::when_true << YAML::Value << descriptor.value(0)->name();
            this->out << YAML::Key << keys::when_false << YAML::Value << descriptor.value(1)->name();
        }
         */
    };
}
}

#endif
