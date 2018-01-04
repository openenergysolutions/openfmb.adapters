
#include "ProtoBus.h"

namespace adapter
{

    // ---- implement IProtoPublishers ----

    void ProtoBus::finalize()
    {
        if(this->is_finalized)
        {
            throw std::logic_error("ProtoBus already finalized!");
        }

        this->is_finalized = true;
    }

    void ProtoBus::publish(const resourcemodule::ResourceReadingProfile& profile)
    {
        this->require_finalized();
        for(auto& sub : this->rrp_subscribers) sub->receive(profile);
    }

    // ---- implement IProtoSubscribers ----

    void ProtoBus::subscribe(const rrp_subscriber_t& subscriber)
    {
        this->require_not_finalized();
        this->rrp_subscribers.push_back(subscriber);
    }

    // ---- private helpers ----

    void ProtoBus::require_finalized()
    {
        if(!this->is_finalized)
        {
            throw std::logic_error("ProtoBus not yet finalized, cannot publish a message!");
        }
    }

    void ProtoBus::require_not_finalized()
    {
        if(this->is_finalized)
        {
            throw std::logic_error("ProtoBus is finalized, cannot add a subscriber!");
        }
    }

}


