

#include "ControlConfigWriteVisitor.h"

#include "ConfigStrings.h"
#include "generated/OutputType.h"
#include "generated/BitwiseOperation.h"

#include <adapter-api/ConfigStrings.h>
#include <adapter-api/util/EnumUtil.h>

namespace adapter {
namespace modbus {

    // ---- helpers ----

    void write_output_action(YAML::Emitter& out)
    {
        out << YAML::Key << OutputType::label << YAML::Value << OutputType::none << YAML::Comment(enumeration::get_value_set<OutputType>());
        out << YAML::Key << BitwiseOperation::label << YAML::Value << BitwiseOperation::set_masked_bits << YAML::Comment(enumeration::get_value_set<BitwiseOperation>());
        out << YAML::Key << ::adapter::keys::index << YAML::Value << 0;
        out << YAML::Key << keys::mask << YAML::Value << YAML::Hex << 0x0001;
    }

    void write_output_action_list(YAML::Emitter& out)
    {
        out << YAML::BeginSeq;
        out << YAML::BeginMap;
        write_output_action(out);
        out << YAML::EndMap;
        out << YAML::EndSeq;
    }

    void write_binary_control_keys(YAML::Emitter& out, const char* name)
    {
        out << YAML::Key << name;
        write_output_action_list(out);
    }

    // ---- class implementation ----

    ControlConfigWriteVisitor::ControlConfigWriteVisitor(YAML::Emitter& out)
        : ConfigWriteVisitorBase(out)
    {
    }

    void ControlConfigWriteVisitor::write_mapped_bool_keys(YAML::Emitter& out)
    {
        write_binary_control_keys(out, ::adapter::keys::when_true);
        write_binary_control_keys(out, ::adapter::keys::when_false);
    }

    void ControlConfigWriteVisitor::write_mapped_int32_keys(YAML::Emitter& out)
    {
        out << YAML::Comment("int32 mapping not supported for Modbus control profiles");
    }

    void ControlConfigWriteVisitor::write_mapped_int64_keys(YAML::Emitter& out)
    {
        out << YAML::Comment("int65 mapping not supported for Modbus control profiles");
    }

    void ControlConfigWriteVisitor::write_mapped_float_keys(YAML::Emitter& out)
    {
        out << YAML::Key << OutputType::label << YAML::Value << OutputType::none << YAML::Comment(enumeration::get_value_set<OutputType>());
        out << YAML::Key << ::adapter::keys::index << YAML::Value << 0;
        out << YAML::Key << ::adapter::keys::scale << YAML::Value << 1.0;
    }

    void ControlConfigWriteVisitor::write_mapped_enum_keys(YAML::Emitter& out, google::protobuf::EnumDescriptor const* descriptor)
    {
        out << YAML::Value << ::adapter::keys::mapping;
        out << YAML::BeginSeq;
        for (auto i = 0; i < descriptor->value_count(); ++i) {
            const auto value = descriptor->value(i);
            out << YAML::BeginMap;
            out << YAML::Key << ::adapter::keys::name << YAML::Value << value->name();
            out << YAML::Key << ::adapter::keys::outputs;
            write_output_action_list(out);
            out << YAML::EndMap;
        }
        out << YAML::EndSeq;
    }

    void write_index_and_scale(YAML::Emitter &out)
    {
        out << YAML::Key << ::adapter::keys::index << YAML::Value << 0;
        out << YAML::Key << ::adapter::keys::scale << YAML::Value << 1.0;
    }

    void ControlConfigWriteVisitor::write_mapped_function_parameter_keys(YAML::Emitter &out) {
        write_index_and_scale(out);
    }

    void ControlConfigWriteVisitor::write_mapped_schedule_parameter_keys(YAML::Emitter &out) {
        write_index_and_scale(out);
    }
}
}
