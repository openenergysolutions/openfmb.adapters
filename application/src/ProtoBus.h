
#ifndef OPENFMB_ADAPTER_PROTOBUS_H
#define OPENFMB_ADAPTER_PROTOBUS_H

#include "adapter-api/IProtoSubscribers.h"
#include "adapter-api/IProtoPublishers.h"

namespace openfmb {

    class ProtoBus : public IProtoSubscribers, public IProtoPublishers
    {
    public:

        ProtoBus() = default;
        ~ProtoBus() = default;

        // ---- implement IProtoPublishers ----

        virtual void publish(const ResourceReadingProfile& profile) override;

        // ---- implement IProtoSubscribers ----

        virtual void subscribe(const std::shared_ptr<ISubscriber<ResourceReadingProfile>>& subscriber) override;


    private:


    };

}

#endif
