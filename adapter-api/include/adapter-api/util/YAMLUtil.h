#ifndef OPENFMB_ADAPTER_YAMLUTIL_H
#define OPENFMB_ADAPTER_YAMLUTIL_H

#include <yaml-cpp/yaml.h>

#include "Exception.h"

#include <boost/numeric/conversion/cast.hpp>

namespace adapter {
namespace yaml {
    /**
         * Obtain a child node from a map node, throwing a descriptive exception if the node doesn't exist
         *
         * @param parent the YAML::Node expected to be a map and contain an entry with the specified key
         * @param key the specified key
         * @return A valid YAML::Node
         * @throws ::adapter::Exception if parent is invalid, isn't a map, or the key doesn't exist
         */
    YAML::Node require(const YAML::Node& parent, const std::string& key);

    std::string require_string(const YAML::Node& parent, const std::string& key);

    std::string require_uuid(const YAML::Node& parent, const std::string& key);

    /**
         * YAML-CPP does a poor job of detecting bad numeric conversions
         *
         * This helper makes use boost::numeric::cast
         */
    template <typename T>
    T require_integer(const YAML::Node& parent, const std::string& key)
    {
        static_assert(sizeof(T) < sizeof(int64_t), "type not smaller than int64");

        const auto node = require(parent, key);

        try {
            return boost::numeric_cast<T>(node.as<int64_t>());
        } catch (const std::exception& ex) {
            throw Exception(ex.what(), " line: ", node.Mark().line);
        }
    }

    template <typename E>
    typename E::Value require_enum(const YAML::Node& parent)
    {
        return E::from_string(require_string(parent, E::label));
    }

    template <class T>
    T optionally(const YAML::Node& node, const T& default_value)
    {
        return node ? node.as<T>() : default_value;
    }

    template <class Action>
    void foreach (const YAML::Node& parent, const Action& action)
    {
        if (!parent)
            throw Exception("sequence node not defined");

        if (!parent.IsSequence())
            throw Exception("node is not a sequence, line: ", parent.Mark().line);

        for (auto it = parent.begin(); it != parent.end(); ++it) {
            action(*it);
        }
    }
}
}

#endif
