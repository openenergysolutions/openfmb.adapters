
#include "adapter-api/config/ConfigWriteVisitorBase.h"
#include <proto-api/commonmodule/commonmodule.pb.h>

#include "adapter-api/config/FieldInfo.h"

#include "adapter-api/ConfigStrings.h"

namespace adapter {

void ConfigWriteVisitorBase::DelayedWriter::push(const write_fun_t& fun)
{
    this->delayed_writes.emplace_back(fun);
}

void ConfigWriteVisitorBase::DelayedWriter::pop(const write_fun_t& fun)
{
    if (this->delayed_writes.empty()) {
        fun(this->out);
    } else {
        this->delayed_writes.pop_back();
    }
}

void ConfigWriteVisitorBase::DelayedWriter::write(const write_fun_t& fun)
{
    for (const auto& write : this->delayed_writes) {
        write(this->out);
    }
    this->delayed_writes.clear();
    fun(this->out);
}

ConfigWriteVisitorBase::ConfigWriteVisitorBase(bool is_control, YAML::Emitter& out)
    : is_control(is_control)
    , writer(out)
{
}

bool ConfigWriteVisitorBase::start_message_field(const std::string& field_name, google::protobuf::Descriptor const* descriptor)
{
    if (fields::is_message_ignored(field_name, descriptor, this->path))
        return false;

    this->path.push(field_name, descriptor);

    this->writer.push(
        [field_name](YAML::Emitter& out) {
            out << YAML::Key << field_name;
            out << YAML::BeginMap;
        });

    return true;
}

void ConfigWriteVisitorBase::end_message_field()
{
    this->path.pop();
    this->writer.pop([](YAML::Emitter& out) { out << YAML::EndMap; });
}

int ConfigWriteVisitorBase::start_repeated_message_field(const std::string& field_name, google::protobuf::Descriptor const* descriptor)
{
    this->path.push(field_name, descriptor);

    this->writer.push(
        [field_name](YAML::Emitter& out) {
            out << YAML::Key << field_name;
            out << YAML::BeginSeq;
        });

    return 1;
}

void ConfigWriteVisitorBase::start_iteration(int i)
{
    this->writer.push(
        [](YAML::Emitter& out) {
            out << YAML::BeginMap;
        });
}

void ConfigWriteVisitorBase::end_iteration()
{
    this->writer.pop([](YAML::Emitter& out) { out << YAML::EndMap; });
}

void ConfigWriteVisitorBase::end_repeated_message_field()
{
    this->path.pop();
    this->writer.pop([](YAML::Emitter& out) { out << YAML::EndSeq; });
}

void ConfigWriteVisitorBase::handle_bool(const std::string& field_name)
{
    switch (fields::get_bool_type(field_name, path)) {
    case (FieldType::Value::mapped):
        this->writer.write(
            [&](YAML::Emitter& out) {
                out << YAML::Key << field_name;
                out << YAML::BeginMap;
                this->write_mapped_bool_keys(out);
                out << YAML::EndMap;
            });
        break;
        // we ignore everything that isn't a mapped value right now
    default:
        break;
    }
}

void ConfigWriteVisitorBase::handle_int32(const std::string& field_name)
{
    switch (fields::get_int32_type(field_name, path)) {
    case (FieldType::Value::mapped):
        this->writer.write(
            [&](YAML::Emitter& out) {
                out << YAML::Key << field_name;
                out << YAML::BeginMap;
                this->write_mapped_int32_keys(out);
                out << YAML::EndMap;
            });
        break;
    default:
        break;
    }
}

void ConfigWriteVisitorBase::handle_uint32(const std::string& field_name)
{
    this->writer.write(
        [&](YAML::Emitter& out) {
            out << YAML::Key << field_name;
            out << YAML::BeginMap;
            this->write_mapped_uint32_keys(out);
            out << YAML::EndMap;
        });
}

void ConfigWriteVisitorBase::handle_int64(const std::string& field_name)
{
    this->writer.write(
        [&](YAML::Emitter& out) {
            out << YAML::Key << field_name;
            out << YAML::BeginMap;
            this->write_mapped_int64_keys(out);
            out << YAML::EndMap;
        });
}

void ConfigWriteVisitorBase::handle_uint64(const std::string& field_name)
{
    this->writer.write(
        [&](YAML::Emitter& out) {
            out << YAML::Key << field_name;
            out << YAML::BeginMap;
            this->write_mapped_uint64_keys(out);
            out << YAML::EndMap;
        });
}

void ConfigWriteVisitorBase::handle_float(const std::string& field_name)
{
    this->writer.write(
        [&](YAML::Emitter& out) {
            out << YAML::Key << field_name;
            out << YAML::BeginMap;
            this->write_mapped_float_keys(out);
            out << YAML::EndMap;
        });
}

void ConfigWriteVisitorBase::handle_string(const std::string& field_name)
{
    const auto type = fields::get_string_type(field_name, path);

    if (this->is_control) {
        // the main mRID is the only thing that needs to be configurable for controls
        if (type == StringFieldType::Value::primary_uuid) {
            this->writer.write([&](YAML::Emitter& out) { out << YAML::Key << field_name << YAML::Value << "" << YAML::Comment("required UUID to match against"); });
        }

    } else {
        switch (fields::get_string_type(field_name, path)) {
        case (StringFieldType::Value::optional_constant_uuid):
            this->writer.write([&](YAML::Emitter& out) { out << YAML::Key << field_name << YAML::Value << "" << YAML::Comment("optional valid UUID"); });
            break;
        case (StringFieldType::Value::primary_uuid):
            this->writer.write([&](YAML::Emitter& out) { out << YAML::Key << field_name << YAML::Value << "" << YAML::Comment("required UUID"); });
            break;
        case (StringFieldType::Value::optional_string):
            this->writer.write([&](YAML::Emitter& out) { out << YAML::Key << field_name << YAML::Value << "" << YAML::Comment("optional string"); });
            break;
        default:
            break;
        }
    }
}

void ConfigWriteVisitorBase::handle_enum(const std::string& field_name, google::protobuf::EnumDescriptor const* descriptor)
{
    const auto type = fields::get_enum_type(descriptor);
    switch (type) {
    case (EnumFieldType::Value::optional_constant):
        this->writer.write([&](YAML::Emitter& out) { out << YAML::Key << field_name << YAML::Value << "" << YAML::Comment("optional static enum"); });
        break;
    default:
        this->writer.write(
            [&](YAML::Emitter& out) {
                out << YAML::Key << field_name;
                out << YAML::BeginMap;
                this->write_mapped_enum_keys(out, descriptor);
                out << YAML::EndMap;
            });
        break;
    }
}
}
