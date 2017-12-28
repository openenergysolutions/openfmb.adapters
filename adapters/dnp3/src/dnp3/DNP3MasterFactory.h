
#ifndef OPENFMB_ADAPTER_DNP3MASTERFACTORY_H
#define OPENFMB_ADAPTER_DNP3MASTERFACTORY_H

#include "adapter-api/IAdapterFactory.h"

namespace openfmb
{

    class DNP3MasterFactory final : public IAdapterFactory
    {

    public:

        DNP3MasterFactory() = default;

        virtual std::string name() const override
        {
            return "dnp3";
        }

        virtual std::unique_ptr<IAdapter> create(const YAML::Node& node, const Logger& logger, IProtoSubscribers& subscribers) override;
    };

}

#endif //OPENFMB_ADAPTER_DNP3FACTORY_H
