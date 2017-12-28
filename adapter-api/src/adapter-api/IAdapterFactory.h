
#ifndef OPENFMB_ADAPTER_IADAPTERFACTORY_H
#define OPENFMB_ADAPTER_IADAPTERFACTORY_H

#include "IAdapter.h"
#include "IProtoSubscribers.h"

#include "yaml-cpp/yaml.h"

#include "Logger.h"

namespace openfmb
{

    /**
     * An adapter is something that can read a YAML configuration,
     * and create an instance of an IAdapter
     */
    class IAdapterFactory
    {
    public:

        virtual ~IAdapterFactory() {}

        virtual std::string name() const = 0;

        virtual std::unique_ptr<IAdapter> create(const YAML::Node& node, const Logger& logger, IProtoSubscribers& subscribers) = 0;
    };

}

#endif
