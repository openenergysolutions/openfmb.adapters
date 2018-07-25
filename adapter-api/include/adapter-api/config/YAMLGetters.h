
#ifndef OPENFMB_ADAPTER_YAMLGETTERS_H
#define OPENFMB_ADAPTER_YAMLGETTERS_H

#include <yaml-cpp/yaml.h>

namespace adapter {
namespace yaml {
    namespace get {

        // --- getters for common values used by multiple plugins ---

        double scale(const YAML::Node& node);

        uint16_t index(const YAML::Node& node);
    }
}
}

#endif //OPENFMB_ADAPTER_YAMLGETTERS_H
