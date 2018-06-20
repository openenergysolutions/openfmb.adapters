
#ifndef OPENFMB_ADAPTER_IMESSAGEBUS_H
#define OPENFMB_ADAPTER_IMESSAGEBUS_H

#include "IPublisher.h"
#include "ISubscriber.h"

namespace adapter
{
    /**
     * IMessageBus is both IPublisher and ISubscriber
     */
    class IMessageBus : public IPublisher, public ISubscriber
    {

    public:

        virtual ~IMessageBus() = default;
    };

    using message_bus_t = std::shared_ptr<IMessageBus>;
}

#endif
