
#include "YAMLUtil.h"

namespace adapter
{
    namespace yaml
    {

        YAML::Node require(const YAML::Node& parent, const std::string& key)
        {
            if(!parent)
            {
                throw Exception("parent node is invalid");
            }

            if(!parent.IsMap())
            {
                const auto mark = parent.Mark();
                throw Exception("parent node is not a map (key == ", key, "), line: ", mark.line, " column: ", mark.column);
            }

            const auto child = parent[key];
            if(!child)
            {
                const auto mark = parent.Mark();
                throw Exception("parent node missing required key: '", key, "' line: ", mark.line, " column: ", mark.column);
            }
            return child;
        }

        std::string require_string(const YAML::Node& parent, const std::string& key)
        {
            return require(parent, key).as<std::string>();
        }
    }
}



