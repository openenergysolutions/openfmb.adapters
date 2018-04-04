
#ifndef OPENFMB_ADAPTER_IPLUGINFACTORY_H
#define OPENFMB_ADAPTER_IPLUGINFACTORY_H

#include "IPlugin.h"
#include "IMessageBus.h"

#include "yaml-cpp/yaml.h"

#include "Logger.h"
#include "Profile.h"

namespace adapter
{

    /**
     * An adapter is something that can read a YAML configuration,
     * and create an instance of an IPlugin
     */
    class IPluginFactory
    {
    public:

        virtual ~IPluginFactory() {}

        virtual std::string name() const = 0;

        virtual std::string description() const = 0;

        virtual void write_default_config(YAML::Emitter& emitter) const = 0;

        virtual std::unique_ptr<IPlugin> create(const YAML::Node& node, const Logger& logger, IMessageBus& bus) = 0;
    };

}

#endif
