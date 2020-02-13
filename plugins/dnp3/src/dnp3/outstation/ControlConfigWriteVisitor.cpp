
#include "ControlConfigWriteVisitor.h"

#include "adapter-util/ConfigStrings.h"

#include <dnp3/ConfigStrings.h>
#include <dnp3/generated/CommandSourceType.h>
#include <dnp3/generated/ProfileAction.h>

namespace adapter {

namespace dnp3 {

    namespace outstation {

        ControlConfigWriteVisitor::ControlConfigWriteVisitor(YAML::Emitter& out)
            : ConfigWriteVisitorBase(out)
        {
        }

        // --- map write function from base class ---

        void ControlConfigWriteVisitor::write_mapped_bool_keys(YAML::Emitter& out)
        {
            out << YAML::Key << CommandSourceType::label << YAML::Value << CommandSourceType::none;
            out << YAML::Comment(util::enumeration::get_value_set_from_list<CommandSourceType>({ CommandSourceType::Value::none, CommandSourceType::Value::crob }));
            out << YAML::Key << ProfileAction::label << YAML::Value << ProfileAction::update;
            out << YAML::Comment(util::enumeration::get_value_set<ProfileAction>());
            out << YAML::Key << util::keys::index << YAML::Value << 0;

            out << YAML::Key << util::keys::mapping;
            out << YAML::BeginSeq;
            out << YAML::BeginMap;
            out << YAML::Key << keys::control_code << YAML::Value << opendnp3::ControlCodeSpec::to_string(opendnp3::ControlCode::LATCH_ON);
            out << YAML::Key << util::keys::value << YAML::Value << true;
            out << YAML::EndMap;
            out << YAML::BeginMap;
            out << YAML::Key << keys::control_code << YAML::Value << opendnp3::ControlCodeSpec::to_string(opendnp3::ControlCode::LATCH_OFF);
            out << YAML::Key << util::keys::value << YAML::Value << false;
            out << YAML::EndMap;
            out << YAML::EndSeq;
        }

        void ControlConfigWriteVisitor::write_mapped_int32_keys(YAML::Emitter& out)
        {
            write_mapped_numeric_keys(out);
        }

        void ControlConfigWriteVisitor::write_mapped_int64_keys(YAML::Emitter& out)
        {
            write_mapped_numeric_keys(out);
        }

        void ControlConfigWriteVisitor::write_mapped_float_keys(YAML::Emitter& out)
        {
            write_mapped_numeric_keys(out);
        }

        void ControlConfigWriteVisitor::write_mapped_enum_keys(YAML::Emitter& out,
                                                               google::protobuf::EnumDescriptor const* descriptor)
        {
            out << YAML::Key << CommandSourceType::label << YAML::Value << CommandSourceType::none;
            out << YAML::Comment(util::enumeration::get_value_set_from_list<CommandSourceType>({ CommandSourceType::Value::none, CommandSourceType::Value::analog_output }));
            out << YAML::Key << ProfileAction::label << YAML::Value << ProfileAction::update;
            out << YAML::Comment(util::enumeration::get_value_set<ProfileAction>());
            out << YAML::Key << util::keys::index << YAML::Value << 0;

            out << YAML::Key << util::keys::mapping;
            out << YAML::BeginSeq;

            for (int i = 0; i < descriptor->value_count(); ++i) {
                out << YAML::BeginMap;
                out << YAML::Key << util::keys::name << YAML::Value << descriptor->value(i)->name();
                out << YAML::Key << util::keys::value << YAML::Value << descriptor->value(i)->number();
                out << YAML::EndMap;
            }

            out << YAML::EndSeq;
        }

        void ControlConfigWriteVisitor::write_mapped_schedule_parameter_keys(YAML::Emitter& out)
        {
            //throw api::Exception("schedule parameter mapping not supported in DNP3 outstation control profiles");
        }

        void ControlConfigWriteVisitor::write_mapped_numeric_keys(YAML::Emitter& out)
        {
            out << YAML::Key << CommandSourceType::label << YAML::Value << CommandSourceType::none;
            out << YAML::Comment(util::enumeration::get_value_set_from_list<CommandSourceType>({ CommandSourceType::Value::none, CommandSourceType::Value::analog_output }));
            out << YAML::Key << ProfileAction::label << YAML::Value << ProfileAction::update;
            out << YAML::Comment(util::enumeration::get_value_set<ProfileAction>());
            out << YAML::Key << util::keys::index << YAML::Value << 0;
            out << YAML::Key << util::keys::scale << YAML::Value << 1.0;
        }
    }
}
}