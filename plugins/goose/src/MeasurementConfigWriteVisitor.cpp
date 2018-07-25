#include "MeasurementConfigWriteVisitor.h"

#include "adapter-api/util/Exception.h"

namespace adapter
{
namespace goose
{

MeasurementConfigWriteVisitor::MeasurementConfigWriteVisitor(YAML::Emitter& out)
    : ConfigWriteVisitorBase{out}
{

}

void MeasurementConfigWriteVisitor::write_mapped_bool_keys(YAML::Emitter& out)
{
    throw Exception("Bool mapping is not supported");
}

void MeasurementConfigWriteVisitor::write_mapped_int32_keys(YAML::Emitter& out)
{
    throw Exception("Int32 mapping is not supported");
}

void MeasurementConfigWriteVisitor::write_mapped_int64_keys(YAML::Emitter& out)
{
    //throw Exception("Int64 mapping is not supported");
}

void MeasurementConfigWriteVisitor::write_mapped_float_keys(YAML::Emitter& out)
{
    //throw Exception("Float mapping is not supported");
}

void MeasurementConfigWriteVisitor::write_mapped_enum_keys(YAML::Emitter& out, google::protobuf::EnumDescriptor const* descriptor)
{
    throw Exception("Enum mapping is not supported");
}

} // namespace goose
} // namespace adapter
