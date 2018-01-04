
#include "YAMLUtil.h"

#include "Exception.h"

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
    }
}



