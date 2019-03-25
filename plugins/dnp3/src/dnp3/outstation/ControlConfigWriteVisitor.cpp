
#include "ControlConfigWriteVisitor.h"

#include "adapter-util/ConfigStrings.h"

#include "dnp3/ConfigStrings.h"
#include "dnp3/ControlCodeMeta.h"
#include "dnp3/generated/CommandType.h"
#include "dnp3/generated/ProfileAction.h"

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
            out << YAML::Key << ProfileAction::label << YAML::Value << ProfileAction::update;
            out << YAML::Key << CommandType::label << YAML::Value << CommandType::crob;
            out << YAML::Comment(util::enumeration::get_value_set_from_list<CommandType>({ CommandType::Value::crob }));
            out << YAML::Key << util::keys::index << YAML::Value << 0;

            out << YAML::Key << util::keys::mapping;
            out << YAML::BeginSeq;
            out << YAML::BeginMap;
            out << YAML::Key << ControlCodeMeta::latch_on << YAML::Value << true;
            out << YAML::EndMap;
            out << YAML::BeginMap;
            out << YAML::Key << ControlCodeMeta::latch_off << YAML::Value << false;
            out << YAML::EndMap;
            out << YAML::EndSeq;
        }

        void ControlConfigWriteVisitor::write_mapped_int32_keys(YAML::Emitter& out)
        {
            // throw api::Exception("int32 mapping not supported in DNP3 outstation control profiles");
        }

        void ControlConfigWriteVisitor::write_mapped_int64_keys(YAML::Emitter& out)
        {
            // throw api::Exception("int64 mapping not supported in DNP3 outstation control profiles");
        }

        void ControlConfigWriteVisitor::write_mapped_float_keys(YAML::Emitter& out)
        {
            //throw api::Exception("float mapping not supported in DNP3 outstation control profiles");
        }

        void ControlConfigWriteVisitor::write_mapped_enum_keys(YAML::Emitter& out,
                                                               google::protobuf::EnumDescriptor const* descriptor)
        {
            //throw api::Exception("enum mapping not supported in DNP3 outstation control profiles");
        }

        void ControlConfigWriteVisitor::write_mapped_schedule_parameter_keys(YAML::Emitter& out)
        {
            //throw api::Exception("schedule parameter mapping not supported in DNP3 outstation control profiles");
        }
    }
}
}