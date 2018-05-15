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

        void parse(const std::string& path, IOverrideCallbacks& callbacks);

        /**
         * Find a child node given its override path
         */
        YAML::Node find(const YAML::Node& node, const std::string& path);

        /**
         * Search the YAML tree looking for a scalar node with the "?"
         *
         * @param node the root of the search
         * @throws Exception if a scalar node exists with value "?"
         */
        void assert_no_unspecified_template_values(const YAML::Node& node);
    }
}

#endif

