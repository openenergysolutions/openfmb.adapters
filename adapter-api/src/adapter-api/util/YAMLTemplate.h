#ifndef OPENFMB_ADAPTER_YAMLTEMPLATE_H
#define OPENFMB_ADAPTER_YAMLTEMPLATE_H

#include <yaml-cpp/yaml.h>

namespace adapter
{
    namespace yaml
    {

        class IOverrideCallbacks
        {
        public:

            virtual void on_map_key(const std::string& key) = 0;

            virtual void on_sequence_index(size_t index) = 0;
        };

        void process(const std::string& path, IOverrideCallbacks& callbacks);

        /**
         * Find a child node given its override path
         */
        YAML::Node find(const YAML::Node& node, const std::string& path);

        /**
         * Search the YAML tree looking for a scalar node with a particular value
         *
         * @param node the root of the search
         * @param value the string representation of the value
         * @return A node containing the value (possibly empty)
         */
        YAML::Node find_scalar_with_value(const YAML::Node& node, const std::string& value);
    }
}

#endif

