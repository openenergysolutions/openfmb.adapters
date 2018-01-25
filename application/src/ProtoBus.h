
#ifndef OPENFMB_ADAPTER_PROTOBUS_H
#define OPENFMB_ADAPTER_PROTOBUS_H

#include "adapter-api/IMessageBus.h"

#include "SubscriberRegistry.h"

namespace adapter
{

    class ProtoBus final : public IMessageBus
    {
    public:

        ProtoBus() = default;
        ~ProtoBus() = default;

        /**
         * Don't allow more subscribers to be added. Existing publishers may now begin publishing
         */
        void finalize();

        // ---- publishers ----

        virtual publisher_t<resourcemodule::ResourceReadingProfile> get_resource_reading_publisher() override;

        // ---- subscribers ----

        virtual void subscribe(subscriber_t<resourcemodule::ResourceReadingProfile> subscriber) override;


    private:

        // ---- subscriber registries for the different types, these are the publishers that get handed out as well ----

        const std::shared_ptr<SubscriberRegistry<resourcemodule::ResourceReadingProfile>> rrp_registry = std::make_shared<SubscriberRegistry<resourcemodule::ResourceReadingProfile>>();


    };

}

#endif
