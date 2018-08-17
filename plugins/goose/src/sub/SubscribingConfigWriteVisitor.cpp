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
        write_path(out);
    }

    void SubscribingConfigWriteVisitor::write_mapped_int32_keys(YAML::Emitter& out)
    {
        write_path(out);
    }

    void SubscribingConfigWriteVisitor::write_mapped_int64_keys(YAML::Emitter& out)
    {
        write_path(out);
    }

    void SubscribingConfigWriteVisitor::write_mapped_float_keys(YAML::Emitter& out)
    {
        write_path(out);
    }

    void SubscribingConfigWriteVisitor::write_mapped_enum_keys(YAML::Emitter& out, google::protobuf::EnumDescriptor const* descriptor)
    {
        throw Exception("Enum mapping is not supported");
    }

    void SubscribingConfigWriteVisitor::write_path(YAML::Emitter& out)
    {
        out << YAML::Key << keys::path << YAML::Value << "";
    }

} // namespace goose
} // namespace adapter
