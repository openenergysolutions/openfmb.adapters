#ifndef OPENFMB_ADAPTER_YAMLUTIL_H
#define OPENFMB_ADAPTER_YAMLUTIL_H

#include <yaml-cpp/yaml.h>
#include <google/protobuf/descriptor.h>

#include "Exception.h"

namespace adapter
{
    namespace yaml
    {

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

            if(!parent.IsSequence()) throw Exception("node is not a sequence");

            for(auto it = parent.begin(); it != parent.end(); ++it)
            {
                action(*it);
            }
        }

    }
}

#endif

