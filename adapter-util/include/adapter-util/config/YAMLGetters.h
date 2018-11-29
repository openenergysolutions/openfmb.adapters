
#ifndef OPENFMB_ADAPTER_YAMLGETTERS_H
#define OPENFMB_ADAPTER_YAMLGETTERS_H

#include <yaml-cpp/yaml.h>

#include <google/protobuf/descriptor.h>

namespace adapter {
namespace util {
    namespace yaml {
        namespace get {

            // --- getters for common values used by multiple plugins ---

            double scale(const YAML::Node& node);

            uint16_t index(const YAML::Node& node);

            int enum_value(const YAML::Node& node, const std::string& key, const ::google::protobuf::EnumDescriptor& desc);
        }
    }
}
}

#endif //OPENFMB_ADAPTER_YAMLGETTERS_H
