#ifndef OPENFMB_ADAPTER_YAMLUTIL_H
#define OPENFMB_ADAPTER_YAMLUTIL_H

#include <yaml-cpp/yaml.h>

namespace adapter
{
    namespace yaml
    {

        YAML::Node require(const YAML::Node& parent, const std::string& key);

        template <class T>
        T with_default(const YAML::Node& node, const T& default_value)
        {
            return node ? node.as<T>() : default_value;

        }

        template <class Action>
        void if_present(const YAML::Node& parent, const std::string& key, const Action& action)
        {
            if(parent[key])
            {
                action(parent[key]);
            }
        }

        template <class Action>
        void foreach(const YAML::Node& parent, const Action& action)
        {
            if(!parent) return;

            for(auto it = parent.begin(); it != parent.end(); ++it)
            {
                action(*it);
            }

        }
    }
}

#endif

