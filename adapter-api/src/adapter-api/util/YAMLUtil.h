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
        T with_default(const YAML::Node& node, const T& default_value)
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

        template <class E>
        E parse_enum_value(const YAML::Node& parent, const ::google::protobuf::EnumDescriptor* descriptor, bool (parser)(const std::string&, E*))
        {
            return parse_enum_value(
                       yaml::require_string(parent, descriptor->name()),
                       descriptor,
                       parser
                   );
        }

        template <class E>
        E parse_enum_value(const std::string& string_value, const ::google::protobuf::EnumDescriptor* descriptor, bool (parser)(const std::string&, E*))
        {
            E ret;
            if(!parser(string_value, &ret))
            {
                throw Exception("Invalid value '", string_value, "' for protobuf enum descriptor: ", descriptor->name());
            }
            return ret;
        }


    }
}

#endif

