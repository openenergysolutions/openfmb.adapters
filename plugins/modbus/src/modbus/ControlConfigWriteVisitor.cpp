

#include "ControlConfigWriteVisitor.h"

#include "ConfigStrings.h"
#include "generated/RegisterOpType.h"

#include <adapter-api/ConfigStrings.h>
#include <adapter-api/util/EnumUtil.h>

namespace adapter {
namespace modbus {

    void write_binary_action(YAML::Emitter& out)
    {
        out << YAML::Key << RegisterOpType::label << YAML::Value << RegisterOpType::label << YAML::Comment(enumeration::get_value_set<RegisterOpType>());
        out << YAML::Key << ::adapter::keys::index << YAML::Value << 0;
        out << YAML::Key << keys::mask << YAML::Value << YAML::Hex << 0x0001;
        out << YAML::Key << keys::priority << YAML::Value << 0;
    }

    void write_binary_action_list(YAML::Emitter& out)
    {
        out << YAML::Key << keys::actions;
        out << YAML::BeginSeq;
        out << YAML::BeginMap;
        write_binary_action(out);
        out << YAML::EndMap;
        out << YAML::EndSeq;
    }

    ControlConfigWriteVisitor::ControlConfigWriteVisitor(YAML::Emitter& out)
        : ConfigWriteVisitorBase(out)
    {
    }

    void ControlConfigWriteVisitor::write_mapped_bool_keys(YAML::Emitter& out)
    {
    }

    void ControlConfigWriteVisitor::write_mapped_int32_keys(YAML::Emitter& out)
    {
    }

    void ControlConfigWriteVisitor::write_mapped_int64_keys(YAML::Emitter& out)
    {
    }

    void ControlConfigWriteVisitor::write_mapped_float_keys(YAML::Emitter& out)
    {
    }

    void ControlConfigWriteVisitor::write_mapped_enum_keys(YAML::Emitter& out, google::protobuf::EnumDescriptor const* descriptor)
    {
        out << YAML::Value << ::adapter::keys::mapping;
        out << YAML::BeginSeq;
        for (auto i = 0; i < descriptor->value_count(); ++i) {
            const auto value = descriptor->value(i);
            out << YAML::BeginMap;
            out << YAML::Key << ::adapter::keys::name << YAML::Value << value->name();
            write_binary_action_list(out);
            out << YAML::EndMap;
        }
        out << YAML::EndSeq;
    }
}
}
