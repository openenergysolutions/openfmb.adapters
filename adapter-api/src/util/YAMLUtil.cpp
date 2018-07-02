

#include "adapter-api/util/YAMLUtil.h"

#include <boost/lexical_cast.hpp>
#include <boost/uuid/uuid_io.hpp>

namespace adapter {
namespace yaml {

    YAML::Node require(const YAML::Node& parent, const std::string& key)
    {
        if (!parent) {
            throw Exception("parent node is invalid");
        }

        if (!parent.IsMap()) {
            const auto mark = parent.Mark();
            throw Exception("parent node is not a map (key == ", key, "), line: ", mark.line, " column: ", mark.column);
        }

        const auto child = parent[key];
        if (!child) {
            const auto mark = parent.Mark();
            throw Exception("parent node missing required key: '", key, "' line: ", mark.line, " column: ", mark.column);
        }
        return child;
    }

    std::string require_string(const YAML::Node& parent, const std::string& key)
    {
        return require(parent, key).Scalar();
    }

    std::string require_uuid(const YAML::Node& parent, const std::string& key)
    {
        const auto uuid_node = require(parent, key);
        const auto uuid_value = uuid_node.Scalar();

        try {
            // throws bad_lexical_cast if not a valid UUID
            boost::lexical_cast<boost::uuids::uuid>(uuid_value);
        } catch (...) {
            throw Exception("Not a valid UUID: \"", uuid_value, "\", line: ", uuid_node.Mark().line);
        }

        return uuid_value;
    }
}
}
