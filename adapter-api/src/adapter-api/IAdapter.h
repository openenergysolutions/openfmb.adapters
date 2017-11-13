
#ifndef OPENFMB_ADAPTER_IADAPTER_H
#define OPENFMB_ADAPTER_IADAPTER_H

#include "IProtoPublishers.h"
#include "IProtoSubscribers.h"

#include "yaml-cpp/yaml.h"

namespace openfmb {

    class IAdapter {
    public:
        virtual ~IAdapter() {}

        // start the execution of the adapter
        void start(IProtoPublishers& publishers);
    };


    /**
     * An adapter is something that can read a YAML configuration,
     * and create an instance of an IAdapter
     */
    class IAdapterFactory {
    public:
        virtual ~IAdapterFactory() {}

        virtual const char* name() const = 0;

        virtual std::unique_ptr<IAdapter> create(YAML::Node& node, IProtoSubscribers& subscribers) const = 0;
    };

}

#endif
