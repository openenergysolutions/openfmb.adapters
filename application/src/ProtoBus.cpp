
#include "ProtoBus.h"

namespace adapter
{

    void ProtoBus::finalize()
    {
        this->rrp_registry->finalize();
    }

    // ---- implement IProtoPublishers ----

    publisher_t<resourcemodule::ResourceReadingProfile> ProtoBus::get_resource_reading_publisher()
    {
        return this->rrp_registry;
    }

    // ---- implement IProtoSubscribers ----

    void ProtoBus::subscribe(subscriber_t<resourcemodule::ResourceReadingProfile> subscriber)
    {
        this->rrp_registry->add(subscriber);
    }

}


