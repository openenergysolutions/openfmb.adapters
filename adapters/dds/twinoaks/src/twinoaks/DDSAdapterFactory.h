#ifndef OPENFMB_ADAPTER_DDSADAPTERFACTORY_H
#define OPENFMB_ADAPTER_DDSADAPTERFACTORY_H

#include "adapter-api/IAdapter.h"

namespace openfmb
{

    class DDSAdapterFactory : public IAdapterFactory
    {

    public:

        virtual const char* name() const override
        {
            return "twinoaks-dds";
        }

        virtual std::unique_ptr<IAdapter> create(const YAML::Node& node, const Logger& logger, IProtoSubscribers& subscribers) override;

    };

}



#endif //OPENFMB_ADAPTER_DDSADAPTERFACTORY_H
