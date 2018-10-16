#include "sub/SubscribingConfigWriteVisitor.h"

#include "ConfigStrings.h"
#include "adapter-api/ConfigStrings.h"
#include "adapter-api/util/Exception.h"

namespace adapter {
namespace goose {

    SubscribingConfigWriteVisitor::SubscribingConfigWriteVisitor(YAML::Emitter& out)
        : ConfigWriteVisitorBase{ out }
    {
    }

    void SubscribingConfigWriteVisitor::write_mapped_bool_keys(YAML::Emitter& out)
    {
        write_name(out);
    }

    void SubscribingConfigWriteVisitor::write_mapped_int32_keys(YAML::Emitter& out)
    {
        write_name(out);
    }

    void SubscribingConfigWriteVisitor::write_mapped_int64_keys(YAML::Emitter& out)
    {
        write_name(out);
    }

    void SubscribingConfigWriteVisitor::write_mapped_float_keys(YAML::Emitter& out)
    {
        write_name(out);
    }

    void SubscribingConfigWriteVisitor::write_mapped_string_keys(YAML::Emitter& out)
    {
        write_name(out);
    }

    void SubscribingConfigWriteVisitor::write_mapped_enum_keys(YAML::Emitter& out, google::protobuf::EnumDescriptor const* descriptor)
    {
        out << YAML::Key << keys::name << YAML::Value << "";
        out << YAML::Key << ::adapter::keys::mapping << YAML::Value;
        out << YAML::BeginSeq;
        for (auto i = 0; i < descriptor->value_count(); ++i)
        {
            const auto value = descriptor->value(i);
            out << YAML::BeginMap;
            out << YAML::Key << ::adapter::keys::name << YAML::Value << value->name();
            out << YAML::Key << ::adapter::keys::value << YAML::Value << "";
            out << YAML::EndMap;
        }
        out << YAML::EndSeq;
    }

    void SubscribingConfigWriteVisitor::write_mapped_commonmodule_quality_keys(YAML::Emitter& out)
    {
        write_name(out);
    }

    void SubscribingConfigWriteVisitor::write_mapped_commonmodule_timestamp_keys(YAML::Emitter& out)
    {
        write_name(out);
    }

    void SubscribingConfigWriteVisitor::write_name(YAML::Emitter& out)
    {
        out << YAML::Key << keys::name << YAML::Value << "";
    }

    void SubscribingConfigWriteVisitor::write_mapped_schedule_parameter_keys(YAML::Emitter &out)
    {
        throw Exception("schedule parameter lists not supported by GOOSE subscriber");
    }


} // namespace goose
} // namespace adapter
