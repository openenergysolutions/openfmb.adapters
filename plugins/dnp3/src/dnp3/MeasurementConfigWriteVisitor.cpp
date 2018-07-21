
#include "MeasurementConfigWriteVisitor.h"

#include "adapter-api/ConfigStrings.h"
#include "adapter-api/util/Exception.h"

#include "ConfigStrings.h"
#include "ControlCodeMeta.h"
#include "generated/SourceType.h"

namespace adapter {

namespace dnp3 {

    MeasurementConfigWriteVisitor::MeasurementConfigWriteVisitor(YAML::Emitter& out)
        : ConfigWriteVisitorBase(out)
    {
    }

    // --- remapping methods from base class ---

    BoolFieldType::Value MeasurementConfigWriteVisitor::remap(BoolFieldType::Value type)
    {
        return type;
    }

    Int32FieldType::Value MeasurementConfigWriteVisitor::remap(Int32FieldType::Value type)
    {
        return type;
    }

    EnumFieldType::Value MeasurementConfigWriteVisitor::remap(EnumFieldType::Value type)
    {
        return type;
    }

    StringFieldType::Value MeasurementConfigWriteVisitor::remap(StringFieldType::Value type)
    {
        return type;
    }

    // --- map write function from base class ---

    void MeasurementConfigWriteVisitor::write_mapped_bool_keys(YAML::Emitter& out)
    {
        throw Exception("no bool mapping for DNP3 measurements");
    }

    void MeasurementConfigWriteVisitor::write_mapped_int32_keys(YAML::Emitter& out)
    {
        throw Exception("no int32 mapping for DNP3 measurements");
    }

    void MeasurementConfigWriteVisitor::write_mapped_uint32_keys(YAML::Emitter& out)
    {
        throw Exception("no uint32 mapping for DNP3 measurements");
    }

    void MeasurementConfigWriteVisitor::write_mapped_int64_keys(YAML::Emitter& out)
    {
        throw Exception("no int64 mapping for DNP3 measurements");
    }

    void MeasurementConfigWriteVisitor::write_mapped_uint64_keys(YAML::Emitter& out)
    {
        throw Exception("no uint64 mapping for DNP3 measurements");
    }

    void MeasurementConfigWriteVisitor::write_mapped_float_keys(YAML::Emitter& out)
    {
        throw Exception("no float mapping for DNP3 measurements");
    }

    void MeasurementConfigWriteVisitor::write_mapped_enum_keys(YAML::Emitter& out, google::protobuf::EnumDescriptor const* descriptor)
    {
        out << YAML::Key << keys::source_type << SourceType::none << YAML::Comment(enumeration::get_value_set_as_string<SourceType>());
        out << YAML::Key << keys::index << YAML::Value << 0;
        out << YAML::Key << keys::when_true << YAML::Value << descriptor->value(0)->name();
        out << YAML::Key << keys::when_false << YAML::Value << descriptor->value(1)->name();
    }
}
}
