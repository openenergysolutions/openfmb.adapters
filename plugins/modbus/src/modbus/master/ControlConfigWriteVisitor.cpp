

#include "ControlConfigWriteVisitor.h"

#include "ConfigStrings.h"
#include "generated/BitwiseOperation.h"
#include "generated/OutputType.h"

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/util/EnumUtil.h>

namespace adapter {
namespace modbus {
namespace master {

    // ---- helpers ----

    void write_default_operation_id(YAML::Emitter& out)
    {
        out << YAML::Key << util::keys::command_id << "some-command-id";
    }

    void write_index_and_scale(YAML::Emitter& out)
    {
        out << YAML::Key << util::keys::index << YAML::Value << 0;
        out << YAML::Key << util::keys::scale << YAML::Value << 1.0;
    }

    void write_output_action(YAML::Emitter& out)
    {
        out << YAML::Key << OutputType::label << YAML::Value << OutputType::none << YAML::Comment(util::enumeration::get_value_set<OutputType>());
        write_default_operation_id(out);
        out << YAML::Key << BitwiseOperation::label << YAML::Value << BitwiseOperation::set_masked_bits << YAML::Comment(util::enumeration::get_value_set<BitwiseOperation>());
        out << YAML::Key << util::keys::index << YAML::Value << 0;
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
        write_binary_control_keys(out, util::keys::when_true);
        write_binary_control_keys(out, util::keys::when_false);
    }

    void ControlConfigWriteVisitor::write_mapped_int32_keys(YAML::Emitter& out)
    {
        write_scaled_register_mapping(out);
    }

    void ControlConfigWriteVisitor::write_mapped_int64_keys(YAML::Emitter& out)
    {
        write_scaled_register_mapping(out);
    }

    void ControlConfigWriteVisitor::write_mapped_float_keys(YAML::Emitter& out)
    {
        write_scaled_register_mapping(out);
    }

    void ControlConfigWriteVisitor::write_mapped_enum_keys(YAML::Emitter& out, google::protobuf::EnumDescriptor const* descriptor)
    {
        out << YAML::Value << util::keys::mapping;
        out << YAML::BeginSeq;
        for (auto i = 0; i < descriptor->value_count(); ++i) {
            const auto value = descriptor->value(i);
            out << YAML::BeginMap;
            out << YAML::Key << util::keys::name << YAML::Value << value->name();
            out << YAML::Key << util::keys::outputs;
            write_output_action_list(out);
            out << YAML::EndMap;
        }
        out << YAML::EndSeq;
    }

    void ControlConfigWriteVisitor::write_mapped_schedule_parameter_keys(YAML::Emitter& out)
    {
        write_scaled_register_mapping(out);
    }

    void ControlConfigWriteVisitor::write_scaled_register_mapping(YAML::Emitter& out)
    {
        out << YAML::Key << OutputType::label << YAML::Value << OutputType::none << YAML::Comment(util::enumeration::get_value_set_from_list<OutputType>({
            OutputType::Value::none,
            OutputType::Value::write_single_register_uint16,
            OutputType::Value::write_single_register_int16,
            OutputType::Value::write_multiple_registers_uint32,
            OutputType::Value::write_multiple_registers_int32,
            OutputType::Value::write_multiple_registers_float32
        }));
        write_default_operation_id(out);
        write_index_and_scale(out);
    }

}
}
}