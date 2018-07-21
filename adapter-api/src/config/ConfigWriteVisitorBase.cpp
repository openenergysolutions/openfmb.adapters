
#include "adapter-api/config/ConfigWriteVisitorBase.h"
#include <proto-api/commonmodule/commonmodule.pb.h>

#include "adapter-api/config/FieldInfo.h"

#include "adapter-api/ConfigStrings.h"

namespace adapter {

ConfigWriteVisitorBase::ConfigWriteVisitorBase(YAML::Emitter& out) : out(out)
{

}

bool ConfigWriteVisitorBase::start_message_field(const std::string& field_name, google::protobuf::Descriptor const* descriptor)
{
    if (fields::is_message_ignored(field_name, descriptor, this->path))
        return false;

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

void ConfigWriteVisitorBase::handle_bool(const std::string& field_name)
{
    const auto type = this->remap(fields::get_bool_type(field_name, path));

    out << YAML::Key << field_name;
    out << YAML::BeginMap;
    out << YAML::Key << "type" << BoolFieldType::to_string(type);

    switch (type) {
    case (BoolFieldType::Value::mapped_bool):
        this->write_mapped_bool_keys(out);
        break;
    default:
        break;
    }

    out << YAML::EndMap;
}

void ConfigWriteVisitorBase::handle_int32(const std::string& field_name)
{
    const auto type = this->remap(fields::get_int32_type(field_name, path));
    out << YAML::Key << field_name;
    out << YAML::BeginMap;
    out << YAML::Key << "type" << Int32FieldType::to_string(type);

    switch (type) {
    case (Int32FieldType::Value::mapped_int32):
        this->write_mapped_int32_keys(out);
        break;
    default:
        break;
    }

    out << YAML::EndMap;
}

void ConfigWriteVisitorBase::handle_uint32(const std::string& field_name)
{
    out << YAML::Key << field_name << YAML::Value << "uint32";
}

void ConfigWriteVisitorBase::handle_int64(const std::string& field_name)
{
    out << YAML::Key << field_name << YAML::Value << "int64";
}

void ConfigWriteVisitorBase::handle_uint64(const std::string& field_name)
{
    out << YAML::Key << field_name << YAML::Value << "uint64";
}

void ConfigWriteVisitorBase::handle_float(const std::string& field_name)
{
    out << YAML::Key << field_name << YAML::Value << "float";
}

void ConfigWriteVisitorBase::handle_string(const std::string& field_name)
{
    const auto type = this->remap(fields::get_string_type(field_name, path));

    out << YAML::Key << field_name;
    out << YAML::BeginMap;
    out << YAML::Key << keys::field_type << StringFieldType::to_string(type);


    switch (fields::get_string_type(field_name, path)) {
        case (StringFieldType::Value::optional_const_uuid):
        case (StringFieldType::Value::primary_uuid):
        case (StringFieldType::Value::optional_string):
            out << YAML::Key << field_name << YAML::Value << "";
            break;
        default:
            break;
    }

    out << YAML::EndMap;
}

void ConfigWriteVisitorBase::handle_enum(const std::string& field_name, google::protobuf::EnumDescriptor const* descriptor)
{
    const auto type = this->remap(fields::get_enum_type(descriptor));

    out << YAML::Key << field_name;
    out << YAML::BeginMap;
    out << YAML::Key << "type" << EnumFieldType::to_string(type);

    switch (type) {
    case (EnumFieldType::Value::optional_const_enum):
        out << YAML::Key << keys::value << YAML::Value << "";
        break;
    default:
        this->write_mapped_enum_keys(out, descriptor);
        break;
    }

    out << YAML::EndMap;
}
}
