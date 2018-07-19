
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

        /**
         * release all the subscriptions so that no more events can be dispatched
         */
        void shutdown();

        // ---- publish ----

        void publish(const resourcemodule::ResourceReadingProfile& message) override;

        void publish(const switchmodule::SwitchControlProfile& message) override;

        void publish(const switchmodule::SwitchReadingProfile& message) override;

        void publish(const switchmodule::SwitchStatusProfile& message) override;

        void publish(const essmodule::ESSReadingProfile& message) override;

        void publish(const essmodule::ESSStatusProfile& message) override;

        void publish(const essmodule::ESSControlProfile& message) override;

        void publish(const solarmodule::SolarReadingProfile& message) override;

        void publish(const solarmodule::SolarStatusProfile& message) override;

        void publish(const solarmodule::SolarControlProfile& message) override;

        void publish(const loadmodule::LoadReadingProfile& message) override;

        void publish(const loadmodule::LoadStatusProfile& message) override;

        void publish(const loadmodule::LoadControlProfile& message) override;

        // ---- subscribe ----

        void subscribe(subscriber_t<resourcemodule::ResourceReadingProfile> subscriber) override;

        void subscribe(subscriber_t<switchmodule::SwitchControlProfile> subscriber) override;

        void subscribe(subscriber_t<switchmodule::SwitchReadingProfile> subscriber) override;

        void subscribe(subscriber_t<switchmodule::SwitchStatusProfile> subscriber) override;

        void subscribe(subscriber_t<essmodule::ESSReadingProfile> subscriber) override;

        void subscribe(subscriber_t<essmodule::ESSStatusProfile> subscriber) override;

        void subscribe(subscriber_t<essmodule::ESSControlProfile> subscriber) override;

        void subscribe(subscriber_t<solarmodule::SolarReadingProfile> subscriber) override;

        void subscribe(subscriber_t<solarmodule::SolarStatusProfile> subscriber) override;

        void subscribe(subscriber_t<solarmodule::SolarControlProfile> subscriber) override;

        void subscribe(subscriber_t<loadmodule::LoadReadingProfile> subscriber) override;

        void subscribe(subscriber_t<loadmodule::LoadStatusProfile> subscriber) override;

        void subscribe(subscriber_t<loadmodule::LoadControlProfile> subscriber) override;

    private:

        // ---- subscriber registries for the different types, these are the publishers that get handed out as well ----

        const std::shared_ptr<SubscriberRegistry<resourcemodule::ResourceReadingProfile>> resource_reading = std::make_shared<SubscriberRegistry<resourcemodule::ResourceReadingProfile>>();

        const std::shared_ptr<SubscriberRegistry<switchmodule::SwitchControlProfile>> switch_control = std::make_shared<SubscriberRegistry<switchmodule::SwitchControlProfile>>();
        const std::shared_ptr<SubscriberRegistry<switchmodule::SwitchReadingProfile>> switch_reading = std::make_shared<SubscriberRegistry<switchmodule::SwitchReadingProfile>>();
        const std::shared_ptr<SubscriberRegistry<switchmodule::SwitchStatusProfile>> switch_status = std::make_shared<SubscriberRegistry<switchmodule::SwitchStatusProfile>>();

        const std::shared_ptr<SubscriberRegistry<essmodule::ESSReadingProfile>> ess_reading = std::make_shared<SubscriberRegistry<essmodule::ESSReadingProfile>>();
        const std::shared_ptr<SubscriberRegistry<essmodule::ESSStatusProfile>> ess_status = std::make_shared<SubscriberRegistry<essmodule::ESSStatusProfile>>();
        const std::shared_ptr<SubscriberRegistry<essmodule::ESSControlProfile>> ess_control = std::make_shared<SubscriberRegistry<essmodule::ESSControlProfile>>();

        const std::shared_ptr<SubscriberRegistry<solarmodule::SolarReadingProfile>> solar_reading = std::make_shared<SubscriberRegistry<solarmodule::SolarReadingProfile>>();
        const std::shared_ptr<SubscriberRegistry<solarmodule::SolarStatusProfile>> solar_status = std::make_shared<SubscriberRegistry<solarmodule::SolarStatusProfile>>();
        const std::shared_ptr<SubscriberRegistry<solarmodule::SolarControlProfile>> solar_control = std::make_shared<SubscriberRegistry<solarmodule::SolarControlProfile>>();

        const std::shared_ptr<SubscriberRegistry<loadmodule::LoadReadingProfile>> load_reading = std::make_shared<SubscriberRegistry<loadmodule::LoadReadingProfile>>();
        const std::shared_ptr<SubscriberRegistry<loadmodule::LoadStatusProfile>> load_status = std::make_shared<SubscriberRegistry<loadmodule::LoadStatusProfile>>();
        const std::shared_ptr<SubscriberRegistry<loadmodule::LoadControlProfile>> load_control = std::make_shared<SubscriberRegistry<loadmodule::LoadControlProfile>>();
    };

}

#endif
