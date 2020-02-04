
#include "outstation/MeasurementConfigWriteVisitor.h"

#include "ConfigStrings.h"
#include "generated/EnumMappingType.h"
#include "generated/RegisterMapping.h"
#include "generated/SourceType.h"

#include <adapter-api/Exception.h>
#include <adapter-util/ConfigStrings.h>
#include <adapter-util/util/EnumUtil.h>

namespace adapter {
namespace modbus {
namespace outstation {

    MeasurementConfigWriteVisitor::MeasurementConfigWriteVisitor(YAML::Emitter& out)
        : ConfigWriteVisitorBase(out)
    {
    }

    void MeasurementConfigWriteVisitor::write_mapped_bool_keys(YAML::Emitter& out)
    {
        out << YAML::Key << keys::actions << YAML::Value << YAML::BeginSeq;
        out << YAML::BeginMap;
        out << YAML::Key << SourceType::label << YAML::Value << SourceType::none;
        out << YAML::Comment(util::enumeration::get_value_set_from_list<SourceType>({SourceType::Value::none, SourceType::Value::coil, SourceType::Value::discrete_input}));
        out << YAML::Key << util::keys::index << YAML::Value << 0;
        out << YAML::Key << util::keys::negate << YAML::Value << false;
        out << YAML::EndMap;
        out << YAML::EndSeq;
    }

    void MeasurementConfigWriteVisitor::write_mapped_int32_keys(YAML::Emitter& out)
    {
        write_mapped_numeric(out);
    }

    void MeasurementConfigWriteVisitor::write_mapped_int64_keys(YAML::Emitter& out)
    {
        write_mapped_numeric(out);
    }

    void MeasurementConfigWriteVisitor::write_mapped_float_keys(YAML::Emitter& out)
    {
        write_mapped_numeric(out);
    }

    void MeasurementConfigWriteVisitor::write_mapped_enum_keys(YAML::Emitter& out, google::protobuf::EnumDescriptor const* descriptor)
    {
        out << YAML::Value << util::keys::mapping;

        out << YAML::BeginSeq;
        for (auto i = 0; i < descriptor->value_count(); ++i) {
            const auto value = descriptor->value(i);
            out << YAML::BeginMap;
            out << YAML::Key << util::keys::name << YAML::Value << value->name();
            out << YAML::Key << keys::actions << YAML::BeginSeq << YAML::BeginMap;
            out << YAML::Key << SourceType::label << YAML::Value << SourceType::none;
            out << YAML::Comment(util::enumeration::get_value_set<SourceType>());
            out << YAML::Key << util::keys::index << YAML::Value << 0;
            out << YAML::Key << util::keys::value << YAML::Value << value->number();
            out << YAML::EndMap << YAML::EndSeq;
            out << YAML::EndMap;
        }
        out << YAML::EndSeq;
    }

    void MeasurementConfigWriteVisitor::write_mapped_schedule_parameter_keys(YAML::Emitter& out)
    {
        throw api::Exception("schedule parameter lists not supported for Modbus measurement profiles");
    }

    void MeasurementConfigWriteVisitor::write_mapped_numeric(YAML::Emitter& out)
    {
        out << YAML::Key << keys::actions << YAML::Value << YAML::BeginSeq;
        out << YAML::BeginMap;

        out << YAML::Key << SourceType::label << YAML::Value << SourceType::none;
        out << YAML::Comment(util::enumeration::get_value_set_from_list<SourceType>(
            {SourceType::Value::none, SourceType::Value::holding_register, SourceType::Value::input_register})
        );

        out << YAML::Key << RegisterMapping::label << YAML::Value << RegisterMapping::sint16;
        out << YAML::Comment(util::enumeration::get_value_set_from_list<RegisterMapping>(
            {RegisterMapping::Value::sint16, RegisterMapping::Value::uint16, RegisterMapping::Value::sint32, RegisterMapping::Value::uint32, RegisterMapping::Value::float32})
        );

        out << YAML::Key << util::keys::index << YAML::Value << 0;

        out << YAML::EndMap;
        out << YAML::EndSeq;
    }

}
}
}
