#include "MeasurementConfigWriteVisitor.h"

#include "ConfigStrings.h"
#include "adapter-util/util/Exception.h"

namespace adapter {
namespace goose {

    MeasurementConfigWriteVisitor::MeasurementConfigWriteVisitor(YAML::Emitter& out)
        : ConfigWriteVisitorBase{ out }
    {
    }

    void MeasurementConfigWriteVisitor::write_mapped_bool_keys(YAML::Emitter& out)
    {
        write_path(out);
    }

    void MeasurementConfigWriteVisitor::write_mapped_int32_keys(YAML::Emitter& out)
    {
        write_path(out);
    }

    void MeasurementConfigWriteVisitor::write_mapped_int64_keys(YAML::Emitter& out)
    {
        write_path(out);
    }

    void MeasurementConfigWriteVisitor::write_mapped_float_keys(YAML::Emitter& out)
    {
        write_path(out);
    }

    void MeasurementConfigWriteVisitor::write_mapped_enum_keys(YAML::Emitter& out, google::protobuf::EnumDescriptor const* descriptor)
    {
        throw Exception("Enum mapping is not supported");
    }

    void MeasurementConfigWriteVisitor::write_path(YAML::Emitter& out)
    {
        out << YAML::Key << keys::path << YAML::Value << "";
    }

    void MeasurementConfigWriteVisitor::write_mapped_function_parameter_keys(YAML::Emitter &out) {
        throw Exception("function parameter lists not supported for measurement profiles");
    }

} // namespace goose
} // namespace adapter
