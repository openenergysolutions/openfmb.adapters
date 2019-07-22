#ifndef OPENFMB_ADAPTER_DNP3_PLUGINBASE_H
#define OPENFMB_ADAPTER_DNP3_PLUGINBASE_H

#include <adapter-api/IPluginFactory.h>

#include <opendnp3/DNP3Manager.h>

namespace adapter {
namespace dnp3 {

    class PluginBase : public api::IPlugin {

    public:
        PluginBase() = delete;

        PluginBase(const api::Logger& logger, const YAML::Node& node);

    protected:
        api::Logger logger;
        opendnp3::DNP3Manager manager;
    };
}
}

#endif
