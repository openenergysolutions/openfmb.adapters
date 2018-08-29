
#include "adapter-api/config/ConfigWriteVisitorBase.h"
#include <adapter-api/util/Exception.h>

#include <proto-api/commonmodule/commonmodule.pb.h>
#include <proto-api/essmodule/essmodule.pb.h>

#include "adapter-api/config/FieldInfo.h"

#include "adapter-api/ConfigStrings.h"

namespace adapter {

ConfigWriteVisitorBase::ConfigWriteVisitorBase(YAML::Emitter& out)
    : out(out)
{
}

bool ConfigWriteVisitorBase::start_message_field(const std::string& field_name, google::protobuf::Descriptor const* descriptor)
{
    this->path.push(field_name, descriptor);

    out << YAML::Key << field_name;
    out << YAML::BeginMap;

    return true;
}

void ConfigWriteVisitorBase::end_message_field()
{
    this->path.pop();
    out << YAML::EndMap;
}

int ConfigWriteVisitorBase::start_repeated_message_field(const std::string& field_name, google::protobuf::Descriptor const* descriptor)
{
    this->path.push(field_name, descriptor);

    out << YAML::Key << field_name;
    out << YAML::BeginSeq;

    return 1;
}

void ConfigWriteVisitorBase::start_iteration(int i)
{
    out << YAML::BeginMap;
}

void ConfigWriteVisitorBase::end_iteration()
{
    out << YAML::EndMap;
}

void ConfigWriteVisitorBase::end_repeated_message_field()
{
    this->path.pop();
    out << YAML::EndSeq;
}

template <class E, class W>
void handle_mapped_field(YAML::Emitter& out, const std::string& field_name, typename E::Value type, typename E::Value mapped, const W& writer)
{
    out << YAML::Key << field_name;
    out << YAML::BeginMap;
    out << YAML::Key << E::label << E::to_string(type);

    if (type == mapped) {
        writer();
    }

    out << YAML::EndMap;
};

void ConfigWriteVisitorBase::handle_bool(const std::string& field_name)
{
    handle_mapped_field<BoolFieldType>(
        this->out,
        field_name,
        this->remap(fields::get_bool_type(field_name, path)),
        BoolFieldType::Value::mapped,
        [&]() { this->write_mapped_bool_keys(out); });
}

void ConfigWriteVisitorBase::handle_int32(const std::string& field_name)
{
    handle_mapped_field<Int32FieldType>(
        this->out,
        field_name,
        this->remap(fields::get_int32_type(field_name, path)),
        Int32FieldType::Value::mapped,
        [&]() { this->write_mapped_int32_keys(out); });
}

void ConfigWriteVisitorBase::handle_int64(const std::string& field_name)
{
    handle_mapped_field<Int64FieldType>(
        this->out,
        field_name,
        this->remap(fields::get_int64_type(field_name, path)),
        Int64FieldType::Value::mapped,
        [&]() { this->write_mapped_int64_keys(out); });
}

void ConfigWriteVisitorBase::handle_float(const std::string& field_name)
{
    handle_mapped_field<FloatFieldType>(
        this->out,
        field_name,
        this->remap(fields::get_float_type(field_name, path)),
        FloatFieldType::Value::mapped,
        [&]() { this->write_mapped_float_keys(out); });
}

void ConfigWriteVisitorBase::handle_string(const std::string& field_name)
{
    const auto type = this->remap(fields::get_string_type(field_name, path));

    out << YAML::Key << field_name;
    out << YAML::BeginMap;
    out << YAML::Key << StringFieldType::label << StringFieldType::to_string(type);

    switch (type) {
    case (StringFieldType::Value::constant_uuid):
    case (StringFieldType::Value::primary_uuid):
    case (StringFieldType::Value::constant):
        out << YAML::Key << keys::value << YAML::Value << "";
        break;
    default:
        break;
    }

    out << YAML::EndMap;
}

void ConfigWriteVisitorBase::handle_enum(const std::string& field_name, google::protobuf::EnumDescriptor const* descriptor)
{
    const auto type = remap(fields::get_enum_type(descriptor));

    out << YAML::Key << field_name;
    out << YAML::BeginMap;
    out << YAML::Key << EnumFieldType::label << YAML::Value << EnumFieldType::to_string(type);

    if (type == EnumFieldType::Value::mapped) {
        this->write_mapped_enum_keys(out, descriptor);
    }

    out << YAML::EndMap;
}

void ConfigWriteVisitorBase::handle_commonmodule_Quality(const std::string& field_name)
{
    out << YAML::Key << field_name;
    out << YAML::BeginMap;
    out << YAML::Key << QualityFieldType::label << YAML::Value << QualityFieldType::ignored;
    out << YAML::EndMap;
}

void ConfigWriteVisitorBase::handle_commonmodule_Timestamp(const std::string& field_name)
{
    const auto type = fields::get_timestamp_type(field_name, path);

    out << YAML::Key << field_name;
    out << YAML::BeginMap;
    out << YAML::Key << TimestampFieldType::label << YAML::Value << TimestampFieldType::to_string(type);
    out << YAML::EndMap;
}

void ConfigWriteVisitorBase::handle_commonmodule_ControlTimestamp(const std::string& field_name)
{
    out << YAML::Key << field_name;
    out << YAML::BeginMap;
    out << YAML::Key << ControlTimestampFieldType::label << YAML::Value << ControlTimestampFieldType::ignored;
    out << YAML::EndMap;
}

void ConfigWriteVisitorBase::handle_repeated_function_parameter(const std::string& field_name)
{
    out << YAML::Key << field_name;
    out << YAML::BeginSeq << YAML::Comment("A sequence of function parameters names and the corresponding actions to take for each of them");

    for(int i = 0; i < essmodule::ESSFunctionKind_descriptor()->value_count(); ++i)
    {
        out << YAML::BeginMap;
        out << YAML::Key << keys::name << YAML::Value << essmodule::ESSFunctionKind_descriptor()->value(i)->name();
        this->write_mapped_function_parameter_keys(out);
        out << YAML::EndMap;
    }

    out << YAML::EndSeq;
}

BoolFieldType::Value ConfigWriteVisitorBase::remap(BoolFieldType::Value type)
{
    switch (type) {
    // it's impossible to provide intelligent defaults for constants, so let the user override it if they want a constant
    case (BoolFieldType::Value::constant):
        return BoolFieldType::Value::ignored;
    default:
        return type;
    }
}

Int32FieldType::Value ConfigWriteVisitorBase::remap(Int32FieldType::Value type)
{
    switch (type) {
    // it's impossible to provide intelligent defaults for constants, so let the user override it if they want a constant
    case (Int32FieldType::Value::constant):
        return Int32FieldType::Value::ignored;
    default:
        return type;
    }
}

Int64FieldType::Value ConfigWriteVisitorBase::remap(Int64FieldType::Value type)
{
    switch (type) {
    // it's impossible to provide intelligent defaults for constants, so let the user override it if they want a constant
    case (Int64FieldType::Value::constant):
        return Int64FieldType::Value::ignored;
    default:
        return type;
    }
}

FloatFieldType::Value ConfigWriteVisitorBase::remap(FloatFieldType::Value type)
{
    switch (type) {
    // it's impossible to provide intelligent defaults for constants, so let the user override it if they want a constant
    case (FloatFieldType::Value::constant):
        return FloatFieldType::Value::ignored;
    default:
        return type;
    }
}

StringFieldType::Value ConfigWriteVisitorBase::remap(StringFieldType::Value type)
{
    switch (type) {
    // it's impossible to provide intelligent defaults for constants, so let the user override it if they want a constant
    case (StringFieldType::Value::constant):
    case (StringFieldType::Value::constant_uuid):
        return StringFieldType::Value::ignored;
    default:
        return type;
    }
}

EnumFieldType::Value ConfigWriteVisitorBase::remap(EnumFieldType::Value type)
{
    switch (type) {
    // it's impossible to provide intelligent defaults for constants, so let the user override it if they want a constant
    case (EnumFieldType::Value::constant):
        return EnumFieldType::Value::ignored;
    default:
        return type;
    }
}

}
