
#include "ConfigWriteVisitor.h"

#include "adapter-api/ConfigStrings.h"

#include "ConfigStrings.h"
#include "ControlCodeMeta.h"
#include "generated/SourceType.h"

namespace adapter {

namespace dnp3 {

    ConfigWriteVisitor::ConfigWriteVisitor(YAML::Emitter& out) : ConfigWriteVisitorBase(out)
    {}

    void ConfigWriteVisitor::write_mapped_enum_keys(google::protobuf::EnumDescriptor const* descriptor, YAML::Emitter& out)
    {
        out << YAML::Key << keys::source_type << SourceType::none << YAML::Comment(enumeration::get_value_set_as_string<SourceType>());
        out << YAML::Key << keys::index << YAML::Value << 0;
        out << YAML::Key << keys::when_true << YAML::Value << descriptor->value(0)->name();
        out << YAML::Key << keys::when_false << YAML::Value << descriptor->value(1)->name();
    }

}
}


