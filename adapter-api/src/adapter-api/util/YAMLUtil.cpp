
#include "YAMLUtil.h"

namespace adapter
{
    namespace yaml
    {

        YAML::Node require(const YAML::Node& parent, const std::string& key)
        {
            const auto child = parent[key];
            if(!child) {
                throw Exception("YAML node missing required key: '", key, "'");
            }
            return child;
        }

        std::string require_string(const YAML::Node& parent, const std::string& key)
        {
            return require(parent, key).as<std::string>();
        }
    }
}



