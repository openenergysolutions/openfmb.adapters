#ifndef OPENFMB_ADAPTER_YAMLUTIL_H
#define OPENFMB_ADAPTER_YAMLUTIL_H

#include <yaml-cpp/yaml.h>

namespace openfmb
{
    namespace yaml
    {

        YAML::Node require(const YAML::Node& parent, const std::string& key);

        template <class Action>
        void if_present(const YAML::Node& parent, const std::string& key, const Action& action)
        {
            if(parent[key])
            {
                action(parent[key]);
            }
        }
    }
}

#endif

