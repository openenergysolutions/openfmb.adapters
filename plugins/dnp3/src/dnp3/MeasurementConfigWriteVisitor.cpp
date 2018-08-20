
#include "MeasurementConfigWriteVisitor.h"

#include "adapter-api/ConfigStrings.h"

#include "ConfigStrings.h"
#include "ControlCodeMeta.h"
#include "generated/SourceType.h"

namespace adapter {

namespace dnp3 {

    void write_scaled_keys(YAML::Emitter& out, const std::initializer_list<SourceType::Value>& supported_sources)
    {
        out << YAML::Key << SourceType::label << YAML::Value << SourceType::none << YAML::Comment(enumeration::get_value_set_from_list<SourceType>(supported_sources));
        out << YAML::Key << ::adapter::keys::index << YAML::Value << 0;
        out << YAML::Key << ::adapter::keys::scale << YAML::Value << 1.0;
    }

    MeasurementConfigWriteVisitor::MeasurementConfigWriteVisitor(YAML::Emitter& out)
        : ConfigWriteVisitorBase(out)
    {
    }

    // --- map write function from base class ---

    void MeasurementConfigWriteVisitor::write_mapped_bool_keys(YAML::Emitter& out)
    {
        out << YAML::Comment("bool mapping not supported for measurements");
    }

    void MeasurementConfigWriteVisitor::write_mapped_int32_keys(YAML::Emitter& out)
    {
        out << YAML::Comment("int32 mapping not supported for measurements");
    }

    void MeasurementConfigWriteVisitor::write_mapped_int64_keys(YAML::Emitter& out)
    {
        write_scaled_keys(
            out,
            { SourceType::Value::none, SourceType::Value::analog, SourceType::Value::counter });
    }

    void MeasurementConfigWriteVisitor::write_mapped_float_keys(YAML::Emitter& out)
    {
        write_scaled_keys(
            out,
            { SourceType::Value::none, SourceType::Value::analog });
    }

    void MeasurementConfigWriteVisitor::write_mapped_enum_keys(YAML::Emitter& out, google::protobuf::EnumDescriptor const* descriptor)
    {
        out << YAML::Key << SourceType::label << YAML::Value << SourceType::none << YAML::Comment(enumeration::get_value_set_from_list<SourceType>({ SourceType::Value::none, SourceType::Value::binary }));
        out << YAML::Key << ::adapter::keys::index << YAML::Value << 0;
        out << YAML::Key << ::adapter::keys::when_true << YAML::Value << descriptor->value(0)->name();
        out << YAML::Key << ::adapter::keys::when_false << YAML::Value << descriptor->value(1)->name();
    }
}
}