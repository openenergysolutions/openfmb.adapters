
#include "adapter-api/config/YAMLGetters.h"

#include "adapter-api/ConfigStrings.h"
#include "adapter-api/util/YAMLUtil.h"

namespace adapter {
namespace yaml {
    namespace get {

        double scale(const YAML::Node& node)
        {
            return yaml::require(node, ::adapter::keys::scale).as<double>();
        }

        uint16_t index(const YAML::Node& node)
        {
            return yaml::require_integer<uint16_t>(node, ::adapter::keys::index);
        }

        int enum_value(const YAML::Node& node, const std::string& key, const ::google::protobuf::EnumDescriptor& desc)
        {
            const auto value_name = yaml::require_string(node, key);
            const auto value = desc.FindValueByName(value_name);
            if (!value) {
                const auto mark = node.Mark();
                throw Exception("unknown enum value \"", value_name, "\" for enum ", desc.name(), " at line: ", mark.line, " column: ", mark.column);
            }
            return value->number();
        }
    }
}
}
