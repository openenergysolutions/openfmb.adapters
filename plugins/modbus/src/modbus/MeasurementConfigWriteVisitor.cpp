

#include "MeasurementConfigWriteVisitor.h"

#include "ConfigStrings.h"
#include "generated/EnumMappingType.h"
#include "generated/RegisterMapping.h"
#include "generated/SourceType.h"

#include <adapter-api/Exception.h>
#include <adapter-util/ConfigStrings.h>
#include <adapter-util/util/EnumUtil.h>

namespace adapter {
namespace modbus {

    void write_scaled_register_mapping(YAML::Emitter& out)
    {
        out << YAML::Key << SourceType::label << YAML::Value << SourceType::none << YAML::Comment(util::enumeration::get_value_set<SourceType>());
        out << YAML::Key << RegisterMapping::label << YAML::Value << RegisterMapping::sint32 << YAML::Comment(util::enumeration::get_value_set<RegisterMapping>());
        out << YAML::Key << keys::lower_index << 0;
        out << YAML::Key << keys::upper_index << 1;
        out << YAML::Key << util::keys::scale << 1;
    }

    MeasurementConfigWriteVisitor::MeasurementConfigWriteVisitor(YAML::Emitter& out)
        : ConfigWriteVisitorBase(out)
    {
    }

    void MeasurementConfigWriteVisitor::write_mapped_bool_keys(YAML::Emitter& out)
    {
        out << YAML::Key << SourceType::label << YAML::Value << SourceType::none << YAML::Comment(util::enumeration::get_value_set<SourceType>());
        out << YAML::Key << util::keys::index << YAML::Value << 0;
        out << YAML::Key << keys::mask << YAML::Value << "0x0001" << YAML::Comment("mask the register. true if masked value != 0");
        out << YAML::Key << keys::invert << YAML::Value << false << YAML::Comment("invert the boolean value.");
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
        out << YAML::Key << EnumMappingType::label << YAML::Value << EnumMappingType::none << YAML::Comment(util::enumeration::get_value_set<EnumMappingType>());
        out << YAML::Key << util::keys::index << YAML::Value << 0;
        out << YAML::Key << keys::mask << YAML::Value << YAML::Hex << 0xFFFF << YAML::Comment("mask the register. map masked values to enum values");
        out << YAML::Value << util::keys::mapping;

        out << YAML::BeginSeq;
        for (auto i = 0; i < descriptor->value_count(); ++i) {
            const auto value = descriptor->value(i);
            out << YAML::BeginMap;
            out << YAML::Key << util::keys::name << YAML::Value << value->name();
            out << YAML::Key << util::keys::value << YAML::Value << value->number();
            out << YAML::EndMap;
        }
        out << YAML::EndSeq;
    }

    void MeasurementConfigWriteVisitor::write_mapped_schedule_parameter_keys(YAML::Emitter& out)
    {
        throw api::Exception("schedule parameter lists not supported for Modbus measurement profiles");
    }
}
}
