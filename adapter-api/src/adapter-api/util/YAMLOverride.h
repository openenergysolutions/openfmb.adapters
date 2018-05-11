#ifndef OPENFMB_ADAPTER_YAMLOVERRIDE_H
#define OPENFMB_ADAPTER_YAMLOVERRIDE_H

#include <yaml-cpp/yaml.h>

namespace adapter
{
    namespace yaml
    {

        /**
         *
         * @param node a mutable YAML::Node
         * @param override_spec a string specifying what value to override
         */
       void override(YAML::Node& node, const std::string& override_spec);

    }
}

#endif

