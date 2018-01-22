
#ifndef OPENFMB_ADAPTER_PROTOBUS_H
#define OPENFMB_ADAPTER_PROTOBUS_H

#include "adapter-api/IMessageBus.h"

#include "SubscriberRegistry.h"

namespace adapter
{

    class ProtoBus final : public IMessageBus
    {
    public:

        ProtoBus();

        void finalize();

        // ---- publishers ----

        virtual Publisher<resourcemodule::ResourceReadingProfile> get_resource_reading_publisher() override;

        // ---- subscribers ----

        virtual void subscribe(Subscriber<resourcemodule::ResourceReadingProfile> subscriber) override;


    private:

        // ---- registries for the different types ----

        const std::shared_ptr<SubscriberRegistry<resourcemodule::ResourceReadingProfile>> rrp_registry;


    };

}

#endif
