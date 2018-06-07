
#include "MessageBus.h"

#include <adapter-api/util/Exception.h>

namespace adapter
{

    void MessageBus::finalize()
    {
        this->finalized = true;
    }

    void MessageBus::shutdown()
    {
        this->resource_reading->shutdown();
        this->switch_reading->shutdown();
        this->switch_status->shutdown();
        this->switch_control->shutdown();
        this->ess_reading->shutdown();
    }

    void MessageBus::assert_prepublish()
    {
        if(!this->finalized) throw Exception("Publish(..) called before finalization");
    }

    void MessageBus::assert_presubscribe()
    {
        if(this->finalized) throw Exception("Subscribe(..) called after finalization");
    }

    // ---- implement IProtoSubscribers ----

    void MessageBus::subscribe(subscriber_t<resourcemodule::ResourceReadingProfile> subscriber)
    {
        this->assert_presubscribe();
        this->resource_reading->add(subscriber);
    }

    void MessageBus::subscribe(subscriber_t<switchmodule::SwitchControlProfile> subscriber)
    {
        this->assert_presubscribe();
        this->switch_control->add(subscriber);
    }

    void MessageBus::subscribe(subscriber_t<switchmodule::SwitchReadingProfile> subscriber)
    {
        this->assert_presubscribe();
        this->switch_reading->add(subscriber);
    }

    void MessageBus::subscribe(subscriber_t<switchmodule::SwitchStatusProfile> subscriber)
    {
        this->assert_presubscribe();
        this->switch_status->add(subscriber);
    }

    void MessageBus::subscribe(subscriber_t<essmodule::ESSReadingProfile> subscriber)
    {
        this->assert_presubscribe();
        this->ess_reading->add(subscriber);
    }

    void MessageBus::publish(const resourcemodule::ResourceReadingProfile& message)
    {
        this->assert_prepublish();
        this->resource_reading->publish(message);
    }

    void MessageBus::publish(const switchmodule::SwitchControlProfile& message)
    {
        this->assert_prepublish();
        this->switch_control->publish(message);
    }

    void MessageBus::publish(const switchmodule::SwitchReadingProfile& message)
    {
        this->assert_prepublish();
        this->switch_reading->publish(message);
    }

    void MessageBus::publish(const switchmodule::SwitchStatusProfile& message)
    {
        this->assert_prepublish();
        this->switch_status->publish(message);
    }

    void MessageBus::publish(const essmodule::ESSReadingProfile& message)
    {
        this->assert_prepublish();
        this->ess_reading->publish(message);
    }
}


