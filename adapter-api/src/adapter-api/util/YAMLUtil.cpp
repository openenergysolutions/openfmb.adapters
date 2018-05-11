
#include "YAMLUtil.h"

namespace adapter
{
    namespace yaml
    {

        YAML::Node require(const YAML::Node& parent, const std::string& key)
        {
            if(!parent) {
                throw Exception("argument 'parent' node is invalid");
            }

            const auto child = parent[key];
            if(!child)
            {
                const auto mark = parent.Mark();
                throw Exception("YAML node missing required key: '", key, "' at line: ", mark.line, " column: ", mark.column);
            }
            return child;
        }

        std::string require_string(const YAML::Node& parent, const std::string& key)
        {
            return require(parent, key).as<std::string>();
        }
    }
}



