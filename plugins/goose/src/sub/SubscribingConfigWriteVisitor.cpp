#include "sub/SubscribingConfigWriteVisitor.h"

#include "ConfigStrings.h"
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
        out << YAML::Comment("Enum mapping is not supported");
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

} // namespace goose
} // namespace adapter
