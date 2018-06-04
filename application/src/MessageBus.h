
#ifndef OPENFMB_ADAPTER_MESSAGEBUS_H
#define OPENFMB_ADAPTER_MESSAGEBUS_H

#include "adapter-api/IMessageBus.h"

#include "SubscriberRegistry.h"

namespace adapter
{

    class MessageBus final : public IMessageBus
    {
    public:

        MessageBus() = default;

        /**
         * Don't allow more subscribers to be added. Existing publishers may now begin publishing
         */
        void finalize();

        // ---- publish ----

        void publish(const resourcemodule::ResourceReadingProfile& message) override;

        void publish(const switchmodule::SwitchControlProfile& message) override;

        void publish(const switchmodule::SwitchReadingProfile& message) override;

        void publish(const switchmodule::SwitchStatusProfile& message) override;

        // ---- subscribe ----

        void subscribe(subscriber_t<resourcemodule::ResourceReadingProfile> subscriber) override;

        void subscribe(subscriber_t<switchmodule::SwitchControlProfile> subscriber) override;

        void subscribe(subscriber_t<switchmodule::SwitchReadingProfile> subscriber) override;

        void subscribe(subscriber_t<switchmodule::SwitchStatusProfile> subscriber) override;


    private:

        void assert_prepublish();
        void assert_presubscribe();

        bool finalized = false;

        // ---- subscriber registries for the different types, these are the publishers that get handed out as well ----

        const std::shared_ptr<SubscriberRegistry<resourcemodule::ResourceReadingProfile>> resource_reading = std::make_shared<SubscriberRegistry<resourcemodule::ResourceReadingProfile>>();
        const std::shared_ptr<SubscriberRegistry<switchmodule::SwitchControlProfile>> switch_control = std::make_shared<SubscriberRegistry<switchmodule::SwitchControlProfile>>();
        const std::shared_ptr<SubscriberRegistry<switchmodule::SwitchReadingProfile>> switch_reading = std::make_shared<SubscriberRegistry<switchmodule::SwitchReadingProfile>>();
        const std::shared_ptr<SubscriberRegistry<switchmodule::SwitchStatusProfile>> switch_status = std::make_shared<SubscriberRegistry<switchmodule::SwitchStatusProfile>>();
    };

}

#endif
