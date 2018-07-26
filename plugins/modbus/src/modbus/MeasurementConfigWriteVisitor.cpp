

#include "MeasurementConfigWriteVisitor.h"

#include "ConfigStrings.h"
#include "generated/RegisterMapping.h"
#include "generated/SourceType.h"

#include <adapter-api/ConfigStrings.h>
#include <adapter-api/util/EnumUtil.h>

namespace adapter {
namespace modbus {

    void write_scaled_register_mapping(YAML::Emitter& out)
    {
        out << YAML::Key << RegisterMapping::label << YAML::Value << RegisterMapping::none << YAML::Comment(enumeration::get_value_set<RegisterMapping>());
        out << YAML::Key << keys::lower_index << 0;
        out << YAML::Key << keys::upper_index << 1;
        out << YAML::Key << ::adapter::keys::scale << 1;
    }

    MeasurementConfigWriteVisitor::MeasurementConfigWriteVisitor(YAML::Emitter& out)
        : ConfigWriteVisitorBase(out)
    {
    }

    void MeasurementConfigWriteVisitor::write_mapped_bool_keys(YAML::Emitter& out)
    {
        out << YAML::Key << SourceType::label << YAML::Value << SourceType::none << YAML::Comment(enumeration::get_value_set<SourceType>());
        out << YAML::Key << ::adapter::keys::index << YAML::Value << 0;
        out << YAML::Key << keys::mask << YAML::Value << "0x0001" << YAML::Comment("mask the register. true if masked value != 0");
    }

    void MeasurementConfigWriteVisitor::write_mapped_int32_keys(YAML::Emitter& out)
    {
        out << YAML::Comment("int32 mapping not supported");
    }

    void MeasurementConfigWriteVisitor::write_mapped_int64_keys(YAML::Emitter& out)
    {
        write_scaled_register_mapping(out);
    }

    void MeasurementConfigWriteVisitor::write_mapped_float_keys(YAML::Emitter& out)
    {
        write_scaled_register_mapping(out);
    }

    void MeasurementConfigWriteVisitor::write_mapped_enum_keys(YAML::Emitter& out, google::protobuf::EnumDescriptor const* descriptor)
    {
        out << YAML::Key << SourceType::label << YAML::Value << SourceType::none << YAML::Comment(enumeration::get_value_set<SourceType>());
        out << YAML::Key << ::adapter::keys::index << YAML::Value << 0;
        out << YAML::Key << keys::mask << YAML::Value << YAML::Hex << 0xFFFF << YAML::Comment("mask the register. map masked values to enum values");
        out << YAML::Value << ::adapter::keys::mapping;

        out << YAML::BeginSeq;
        for (auto i = 0; i < descriptor->value_count(); ++i) {
            const auto value = descriptor->value(i);
            out << YAML::BeginMap;
            out << YAML::Key << ::adapter::keys::name << YAML::Value << value->name();
            out << YAML::Key << ::adapter::keys::value << YAML::Value << value->number();
            out << YAML::EndMap;
        }
        out << YAML::EndSeq;
    }
}
}
