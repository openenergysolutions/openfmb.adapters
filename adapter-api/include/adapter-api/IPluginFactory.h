
#ifndef OPENFMB_ADAPTER_IPLUGINFACTORY_H
#define OPENFMB_ADAPTER_IPLUGINFACTORY_H

#include "IMessageBus.h"
#include "IPlugin.h"

#include "schema-util/Types.h"

#include "yaml-cpp/yaml.h"

#include "Logger.h"

namespace adapter {
namespace api {

    using profile_vec_t = std::vector<std::string>;

    /**
     * An adapter is something that can read a YAML configuration,
     * and create an instance of an IPlugin
     */
    class IPluginFactory {
    public:
        virtual ~IPluginFactory() = default;

        virtual std::string name() const = 0;

        virtual std::string description() const = 0;

        /**
         * Write the default configuration for the adapter. All implementations must support this.
         *
         * @param out YAML emitter
         */
        virtual void write_default_config(YAML::Emitter& out) const = 0;

        virtual schema::Object get_plugin_schema() const = 0;

        /**
         * Write the default configuration for a single communication session. Only
         * adapters that map legacy protocols to openFMB will support this method.
         *
         * @param out YAML emitter
         * @param profiles vector of profiles for which to write configuration
         */
        virtual void write_session_config(YAML::Emitter& out, const profile_vec_t& profiles) const = 0;

        virtual std::vector<schema::property_ptr_t> get_session_schema() const
        {
            return {};
        }

        virtual std::unique_ptr<IPlugin> create(const YAML::Node& node, const Logger& logger, message_bus_t bus) = 0;
    };
}
}

#endif
