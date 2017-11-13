
#ifndef OPENFMB_ADAPTER_PROTOBUS_H
#define OPENFMB_ADAPTER_PROTOBUS_H

#include "adapter-api/IProtoSubscribers.h"
#include "adapter-api/IProtoPublishers.h"

#include <vector>

namespace openfmb {

    class ProtoBus final : public IProtoSubscribers, public IProtoPublishers
    {
    public:

        void finalize();

        // ---- implement IProtoPublishers ----

        virtual void publish(const ResourceReadingProfile& profile) override;

        // ---- implement IProtoSubscribers ----

        virtual void subscribe(const rrp_subscriber_t& subscriber) override;


    private:

        std::vector<rrp_subscriber_t> rrp_subscribers;

        void require_finalized();
        void require_not_finalized();

        bool is_finalized = false;
    };

}

#endif
