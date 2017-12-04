
#ifndef OPENFMB_ADAPTER_DNP3MASTERADAPTER_H
#define OPENFMB_ADAPTER_DNP3MASTERADAPTER_H

#include "adapter-api/IAdapter.h"

namespace openfmb {

    class DNP3MasterAdapter final : public IAdapter
    {

    public:

        DNP3MasterAdapter() = delete;

        DNP3MasterAdapter(YAML::Node& node, IProtoSubscribers& subscribers)
        {}

        virtual void start(IProtoPublishers& publishers) override
        {
            // TODO
        }

    private:

    };

}

#endif
