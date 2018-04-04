
#include "ProtoBus.h"

namespace adapter
{

    void ProtoBus::finalize()
    {
        this->rrp_registry->finalize();
        this->srp_registry->finalize();
        this->ssp_registry->finalize();
    }

    // ---- implement IProtoPublishers ----

    publisher_t<resourcemodule::ResourceReadingProfile> ProtoBus::get_resource_reading_publisher()
    {
        return this->rrp_registry;
    }

    publisher_t<switchmodule::SwitchReadingProfile> ProtoBus::get_switch_reading_publisher()
    {
        return this->srp_registry;
    }

    publisher_t<switchmodule::SwitchStatusProfile> ProtoBus::get_switch_status_publisher()
    {
        return this->ssp_registry;
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


}


