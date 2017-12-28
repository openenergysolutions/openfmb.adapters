#ifndef OPENFMB_ADAPTER_DDSADAPTERFACTORY_H
#define OPENFMB_ADAPTER_DDSADAPTERFACTORY_H

#include "adapter-api/IAdapterFactory.h"

namespace openfmb
{

    class DDSAdapterFactory : public IAdapterFactory
    {

    public:

        virtual std::string name() const override
        {
            return "twinoaks-dds";
        }

        virtual void write_default_config(YAML::Emitter& emitter) const override;

        virtual std::unique_ptr<IAdapter> create(const YAML::Node& node, const Logger& logger, IProtoSubscribers& subscribers) override;

    };

}



#endif //OPENFMB_ADAPTER_DDSADAPTERFACTORY_H
