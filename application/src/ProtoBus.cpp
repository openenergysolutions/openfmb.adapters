
#include "ProtoBus.h"

namespace adapter
{

    void ProtoBus::finalize()
    {
        this->rrp_registry->finalize();
        this->srp_registry->finalize();
        this->ssp_registry->finalize();
    }

    // ---- implement IProtoSubscribers ----

    void ProtoBus::subscribe(subscriber_t<resourcemodule::ResourceReadingProfile> subscriber)
    {
        this->rrp_registry->add(subscriber);
    }

    void ProtoBus::subscribe(subscriber_t<switchmodule::SwitchReadingProfile> subscriber)
    {
        this->srp_registry->add(subscriber);
    }

    void ProtoBus::subscribe(subscriber_t<switchmodule::SwitchStatusProfile> subscriber)
    {
        this->ssp_registry->add(subscriber);
    }

    void ProtoBus::publish(const resourcemodule::ResourceReadingProfile& message)
    {
        this->rrp_registry->publish(message);
    }

    void ProtoBus::publish(const switchmodule::SwitchReadingProfile& message)
    {
        this->srp_registry->publish(message);
    }

    void ProtoBus::publish(const switchmodule::SwitchStatusProfile& message)
    {
        this->ssp_registry->publish(message);
    }


}


