#ifndef OPENFMB_ADAPTER_YAMLUTIL_H
#define OPENFMB_ADAPTER_YAMLUTIL_H

#include <yaml-cpp/yaml.h>

#include "Exception.h"

namespace adapter
{
    namespace yaml
    {
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

        template <class T>
        T optionally(const YAML::Node& node, const T& default_value)
        {
            return node ? node.as<T>() : default_value;

        }

        template <class Action>
        void foreach(const YAML::Node& parent, const Action& action)
        {
            if(!parent) throw Exception("sequence node not defined");

            if(!parent.IsSequence()) throw Exception("node is not a sequence, line: ", parent.Mark().line);

            for(auto it = parent.begin(); it != parent.end(); ++it)
            {
                action(*it);
            }
        }

    }
}

#endif

