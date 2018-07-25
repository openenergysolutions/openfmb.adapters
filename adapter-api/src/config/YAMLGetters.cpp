
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
    }
}
}
