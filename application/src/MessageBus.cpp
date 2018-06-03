
#include "MessageBus.h"

namespace adapter
{

    void MessageBus::finalize()
    {
        this->rrp_registry->finalize();
        this->srp_registry->finalize();
        this->ssp_registry->finalize();
    }

    // ---- implement IProtoSubscribers ----

    void MessageBus::subscribe(subscriber_t<resourcemodule::ResourceReadingProfile> subscriber)
    {
        this->rrp_registry->add(subscriber);
    }

    void MessageBus::subscribe(subscriber_t<switchmodule::SwitchReadingProfile> subscriber)
    {
        this->srp_registry->add(subscriber);
    }

    void MessageBus::subscribe(subscriber_t<switchmodule::SwitchStatusProfile> subscriber)
    {
        this->ssp_registry->add(subscriber);
    }

    void MessageBus::publish(const resourcemodule::ResourceReadingProfile& message)
    {
        this->rrp_registry->publish(message);
    }

    void MessageBus::publish(const switchmodule::SwitchReadingProfile& message)
    {
        this->srp_registry->publish(message);
    }

    void MessageBus::publish(const switchmodule::SwitchStatusProfile& message)
    {
        this->ssp_registry->publish(message);
    }


}


