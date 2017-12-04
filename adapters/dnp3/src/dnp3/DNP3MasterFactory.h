
#ifndef OPENFMB_ADAPTER_DNP3MASTERFACTORY_H
#define OPENFMB_ADAPTER_DNP3MASTERFACTORY_H

#include "adapter-api/IAdapter.h"

namespace openfmb {

    class DNP3MasterFactory final : public IAdapterFactory {
    public:

        virtual const char* name() const override { return "dnp3-master"; }

        virtual std::unique_ptr<IAdapter> create(YAML::Node& node, IProtoSubscribers& subscribers) const override;
    };

}

#endif //OPENFMB_ADAPTER_DNP3FACTORY_H
