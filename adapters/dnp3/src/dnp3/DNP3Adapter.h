
#ifndef OPENFMB_ADAPTER_DNP3ADAPTER_H
#define OPENFMB_ADAPTER_DNP3ADAPTER_H

#include "adapter-api/IAdapter.h"

namespace openfmb {

    class DNP3Adapter final : public IAdapter {
    public:

        virtual void start(IProtoPublishers& publishers) override
        {
            // TODO
        }
    };

}

#endif
