
#ifndef OPENFMB_ADAPTER_IADAPTER_H
#define OPENFMB_ADAPTER_IADAPTER_H

#include "IProtoPublishers.h"

#include <memory>

namespace adapter
{
    class IAdapter
    {
    public:
        virtual ~IAdapter() {}

        // start the execution of the adapter
        virtual void start(const std::shared_ptr<IProtoPublishers>& publisher) = 0;
    };

}

#endif
