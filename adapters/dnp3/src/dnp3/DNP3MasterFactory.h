
#ifndef OPENFMB_ADAPTER_DNP3MASTERFACTORY_H
#define OPENFMB_ADAPTER_DNP3MASTERFACTORY_H

#include "adapter-api/IAdapter.h"

namespace asiodnp3
{
    class DNP3Manager;
}

namespace openfmb
{

    class DNP3MasterFactory final : public IAdapterFactory
    {

        std::shared_ptr<asiodnp3::DNP3Manager> manager;

    public:

        DNP3MasterFactory();

        virtual const char* name() const override
        {
            return "dnp3-master";
        }

        virtual std::unique_ptr<IAdapter> create(const YAML::Node& node, IProtoSubscribers& subscribers) const override;
    };

}

#endif //OPENFMB_ADAPTER_DNP3FACTORY_H
