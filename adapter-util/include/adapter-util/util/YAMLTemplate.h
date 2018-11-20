#ifndef OPENFMB_ADAPTER_YAMLTEMPLATE_H
#define OPENFMB_ADAPTER_YAMLTEMPLATE_H

#include <yaml-cpp/yaml.h>

#include "adapter-api/Logger.h"

#include <functional>

namespace adapter {
namespace util {
    namespace yaml {
        /**
         * Write a default template configuration:
         *
         * - path: <filename>  # possibly a template
         *   overrides:
         *     - a.b.c = 4  # a sequence of override specifications to apply to the template
         *
         * @param out YAML emitter
         * @param filename Name of the file to place in the configuration
         */
        void write_default_template_config(YAML::Emitter& out, const std::string& filename);

        /**
         * Load a sequence of template configurations. For each configuration:
         *
         * 1) load from yaml file ("path" map entry)
         * 2) applying overrides
         * 3) validating all template arguments are supplied
         * 4) pass YAML::Node to callback functor
         *
         * @param node YAML::Node contain the sequence of configurations + overrides
         * @param logger Logger used log information
         * @param callback callback for fully validated configurations w/ overrides applied
         */
        void load_template_configs(const YAML::Node& node, api::Logger& logger, const std::function<void(const YAML::Node&)>& callback);

        // ----- low level override path parsing stuff exposed so that it can be unit tested ------

        class IOverrideCallbacks {
        public:
            virtual void on_map_key(const std::string& key) = 0;

            virtual void on_sequence_index(size_t index) = 0;
        };

        /**
         * Parse the path portion of an override specification
         *
         * @param path the path portion of an override specification
         * @param callbacks callback interface to invoke when encountering
         * @throws ::adapter::Exception if the path is malformed
         */
        void parse(const std::string& path, IOverrideCallbacks& callbacks);
    }
}
}

#endif
