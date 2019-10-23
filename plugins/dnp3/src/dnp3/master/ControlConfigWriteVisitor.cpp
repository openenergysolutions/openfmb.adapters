
#include "ControlConfigWriteVisitor.h"

#include "adapter-util/ConfigStrings.h"

#include "dnp3/ConfigStrings.h"
#include "dnp3/master/Control.h"
#include "dnp3/generated/CommandActionType.h"
#include "dnp3/generated/SourceType.h"

namespace adapter {

namespace dnp3 {

    namespace master {

        ControlConfigWriteVisitor::ControlConfigWriteVisitor(YAML::Emitter& out)
            : ConfigWriteVisitorBase(out)
        {
        }

        // --- map write function from base class ---

        void ControlConfigWriteVisitor::write_mapped_bool_keys(YAML::Emitter& out)
        {
            out << YAML::Key << util::keys::when_true;
            out << YAML::BeginSeq;
            write_crob_keys(out, 0, opendnp3::ControlCode::LATCH_ON);
            out << YAML::EndSeq;

            out << YAML::Key << util::keys::when_false;
            out << YAML::BeginSeq;
            write_crob_keys(out, 0, opendnp3::ControlCode::LATCH_OFF);
            out << YAML::EndSeq;
        }

        void ControlConfigWriteVisitor::write_mapped_int32_keys(YAML::Emitter& out)
        {
            out << YAML::Key << util::keys::outputs << YAML::Value;
            out << YAML::BeginSeq;
            write_analog_keys(out, 0);
            out << YAML::EndSeq;
        }

        void ControlConfigWriteVisitor::write_mapped_int64_keys(YAML::Emitter& out)
        {
            out << YAML::Key << util::keys::outputs << YAML::Value;
            out << YAML::BeginSeq;
            write_analog_keys(out, 0);
            out << YAML::EndSeq;
        }

        void ControlConfigWriteVisitor::write_mapped_float_keys(YAML::Emitter& out)
        {
            out << YAML::Key << util::keys::outputs << YAML::Value;
            out << YAML::BeginSeq;
            write_analog_keys(out, 0);
            out << YAML::EndSeq;
        }

        void ControlConfigWriteVisitor::write_mapped_enum_keys(YAML::Emitter& out,
                                                               google::protobuf::EnumDescriptor const* descriptor)
        {
            out << YAML::Key << util::keys::mapping << YAML::Value;
            out << YAML::BeginSeq;
            for (auto i = 0; i < descriptor->value_count(); ++i)
            {
                const auto value = descriptor->value(i);
                out << YAML::BeginMap;
                out << YAML::Key << util::keys::name << YAML::Value << value->name();
                out << YAML::Key << util::keys::outputs;
                out << YAML::BeginSeq;
                write_crob_keys(out, 0, opendnp3::ControlCode::LATCH_ON);
                out << YAML::EndSeq;
                out << YAML::EndMap;
            }
            out << YAML::EndSeq;
        }

        void ControlConfigWriteVisitor::write_mapped_schedule_parameter_keys(YAML::Emitter& out)
        {
            out << YAML::Key << util::keys::outputs << YAML::Value;
            out << YAML::BeginSeq;
            write_analog_keys(out, 0);
            out << YAML::EndSeq;
        }

        // --- various helpers ---

        void ControlConfigWriteVisitor::write_crob_keys(YAML::Emitter& out, uint16_t index, opendnp3::ControlCode code)
        {
            out << YAML::BeginMap;
            out << YAML::Key << CommandActionType::label << YAML::Value << CommandActionType::g12v1 << YAML::Comment(util::enumeration::get_value_set<CommandActionType>());

            const Control control{
                index,
                opendnp3::ControlRelayOutputBlock(code, 1, 1000, 1000)
            };

            Control::write(control, out);

            out << YAML::EndMap;
        }

        void ControlConfigWriteVisitor::write_analog_keys(YAML::Emitter& out, uint16_t index)
        {
            out << YAML::BeginMap;
            out << YAML::Key << util::keys::command_id << "some-command-id";
            out << YAML::Key << CommandActionType::label << YAML::Value << CommandActionType::g41v1 << YAML::Comment(util::enumeration::get_value_set_from_list<CommandActionType>({CommandActionType::Value::g41v1, CommandActionType::Value::g41v2, CommandActionType::Value::g41v3, CommandActionType::Value::g41v4}));
            out << YAML::Key << util::keys::index << YAML::Value << index;
            out << YAML::Key << util::keys::scale << YAML::Value << 1.0;
            out << YAML::EndMap;
        }
    }
}
}
