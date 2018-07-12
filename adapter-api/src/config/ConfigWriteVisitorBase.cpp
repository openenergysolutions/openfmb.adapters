
#include "adapter-api/config/ConfigWriteVisitorBase.h"

#include "FieldInfo.h"

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

ConfigWriteVisitorBase::ConfigWriteVisitorBase(YAML::Emitter& out)
    : writer(out)
{
}

bool ConfigWriteVisitorBase::start_message_field(const std::string& field_name, google::protobuf::Descriptor const* descriptor)
{
    if (FieldInfo::is_message_ignored(field_name, descriptor, this->path))
        return false;

    this->path.push(descriptor);

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
    this->path.push(descriptor);

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
    this->writer.write([&](YAML::Emitter& out) { out << YAML::Key << field_name << YAML::Value << "TODO - bool"; });
}

void ConfigWriteVisitorBase::handle_int32(const std::string& field_name)
{
    this->writer.write([&](YAML::Emitter& out) { out << YAML::Key << field_name << YAML::Value << "TODO - int32"; });
}

void ConfigWriteVisitorBase::handle_uint32(const std::string& field_name)
{
    this->writer.write([&](YAML::Emitter& out) { out << YAML::Key << field_name << YAML::Value << "TODO - uint32"; });
}

void ConfigWriteVisitorBase::handle_int64(const std::string& field_name)
{
    this->writer.write([&](YAML::Emitter& out) { out << YAML::Key << field_name << YAML::Value << "TODO - int64"; });
}

void ConfigWriteVisitorBase::handle_uint64(const std::string& field_name)
{
    this->writer.write([&](YAML::Emitter& out) { out << YAML::Key << field_name << YAML::Value << "TODO - uint64"; });
}

void ConfigWriteVisitorBase::handle_float(const std::string& field_name)
{
    this->writer.write([&](YAML::Emitter& out) { out << YAML::Key << field_name << YAML::Value << "TODO - float"; });
}

void ConfigWriteVisitorBase::handle_string(const std::string& field_name)
{
    this->writer.write([&](YAML::Emitter& out) { out << YAML::Key << field_name << YAML::Value << "TODO - string"; });
}

void ConfigWriteVisitorBase::handle_enum(const std::string& field_name, google::protobuf::EnumDescriptor const* descriptor)
{
    this->writer.write([&](YAML::Emitter& out) { out << YAML::Key << field_name << YAML::Value << "TODO - enum"; });
}
}
