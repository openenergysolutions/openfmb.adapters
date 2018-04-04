
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



        // ---- subscribers ----

        virtual void subscribe(subscriber_t<resourcemodule::ResourceReadingProfile> subscriber) override;

        void subscribe(subscriber_t<switchmodule::SwitchReadingProfile> subscriber) override;

        void subscribe(subscriber_t<switchmodule::SwitchStatusProfile> subscriber) override;

    protected:

        // ---- publishers ----

        virtual publisher_t<resourcemodule::ResourceReadingProfile> get_resource_reading_publisher() override;

        publisher_t<switchmodule::SwitchReadingProfile> get_switch_reading_publisher() override;

        publisher_t<switchmodule::SwitchStatusProfile> get_switch_status_publisher() override;


    private:

        // ---- subscriber registries for the different types, these are the publishers that get handed out as well ----

        const std::shared_ptr<SubscriberRegistry<resourcemodule::ResourceReadingProfile>> rrp_registry = std::make_shared<SubscriberRegistry<resourcemodule::ResourceReadingProfile>>();
        const std::shared_ptr<SubscriberRegistry<switchmodule::SwitchReadingProfile>> srp_registry = std::make_shared<SubscriberRegistry<switchmodule::SwitchReadingProfile>>();
        const std::shared_ptr<SubscriberRegistry<switchmodule::SwitchStatusProfile>> ssp_registry = std::make_shared<SubscriberRegistry<switchmodule::SwitchStatusProfile>>();



    };

}

#endif
