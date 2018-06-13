
#include "MessageBus.h"

#include <adapter-api/util/Exception.h>

namespace adapter
{

    void MessageBus::finalize()
    {
        this->resource_reading->finalize();
        this->switch_reading->finalize();
        this->switch_status->finalize();
        this->switch_control->finalize();
        this->ess_reading->finalize();
        this->ess_status->finalize();
        this->ess_control->finalize();
        this->solar_reading->finalize();
        this->solar_status->finalize();
        this->solar_control->finalize();
        this->load_reading->finalize();
        this->load_status->finalize();
        this->load_control->finalize();
    }

    void MessageBus::shutdown()
    {
        this->resource_reading->shutdown();
        this->switch_reading->shutdown();
        this->switch_status->shutdown();
        this->switch_control->shutdown();
        this->ess_reading->shutdown();
        this->ess_status->shutdown();
        this->ess_control->shutdown();
        this->solar_reading->shutdown();
        this->solar_status->shutdown();
        this->solar_control->shutdown();
        this->load_reading->shutdown();
        this->load_status->shutdown();
        this->load_control->shutdown();
    }

    // ---- implement IProtoSubscribers ----

    void MessageBus::subscribe(subscriber_t<resourcemodule::ResourceReadingProfile> subscriber)
    {
        this->resource_reading->add(subscriber);
    }

    void MessageBus::subscribe(subscriber_t<switchmodule::SwitchControlProfile> subscriber)
    {
        this->switch_control->add(subscriber);
    }

    void MessageBus::subscribe(subscriber_t<switchmodule::SwitchReadingProfile> subscriber)
    {
        this->switch_reading->add(subscriber);
    }

    void MessageBus::subscribe(subscriber_t<switchmodule::SwitchStatusProfile> subscriber)
    {
        this->switch_status->add(subscriber);
    }

    void MessageBus::subscribe(subscriber_t<essmodule::ESSReadingProfile> subscriber)
    {
        this->ess_reading->add(subscriber);
    }

    void MessageBus::subscribe(subscriber_t<essmodule::ESSStatusProfile> subscriber)
    {
        this->ess_status->add(subscriber);
    }

    void MessageBus::subscribe(subscriber_t<essmodule::ESSControlProfile> subscriber)
    {
        this->ess_control->add(subscriber);
    }

    void MessageBus::subscribe(subscriber_t<solarmodule::SolarReadingProfile> subscriber)
    {
        this->solar_reading->add(subscriber);
    }

    void MessageBus::subscribe(subscriber_t<solarmodule::SolarStatusProfile> subscriber)
    {
        this->solar_status->add(subscriber);
    }

    void MessageBus::subscribe(subscriber_t<solarmodule::SolarControlProfile> subscriber)
    {
        this->solar_control->add(subscriber);
    }

    void MessageBus::subscribe(subscriber_t<loadmodule::LoadReadingProfile> subscriber)
    {
        this->load_reading->add(subscriber);
    }

    void MessageBus::subscribe(subscriber_t<loadmodule::LoadStatusProfile> subscriber)
    {
        this->load_status->add(subscriber);
    }

    void MessageBus::subscribe(subscriber_t<loadmodule::LoadControlProfile> subscriber)
    {
        this->load_control->add(subscriber);
    }

    void MessageBus::publish(const resourcemodule::ResourceReadingProfile& message)
    {
        this->resource_reading->publish(message);
    }

    void MessageBus::publish(const switchmodule::SwitchControlProfile& message)
    {
        this->switch_control->publish(message);
    }

    void MessageBus::publish(const switchmodule::SwitchReadingProfile& message)
    {
        this->switch_reading->publish(message);
    }

    void MessageBus::publish(const switchmodule::SwitchStatusProfile& message)
    {
        this->switch_status->publish(message);
    }

    void MessageBus::publish(const essmodule::ESSReadingProfile& message)
    {
        this->ess_reading->publish(message);
    }

    void MessageBus::publish(const essmodule::ESSStatusProfile& message)
    {
        this->ess_status->publish(message);
    }

    void MessageBus::publish(const essmodule::ESSControlProfile& message)
    {
        this->ess_control->publish(message);
    }

    void MessageBus::publish(const solarmodule::SolarReadingProfile& message)
    {
        this->solar_reading->publish(message);
    }

    void MessageBus::publish(const solarmodule::SolarStatusProfile& message)
    {
        this->solar_status->publish(message);
    }

    void MessageBus::publish(const solarmodule::SolarControlProfile& message)
    {
        this->solar_control->publish(message);
    }

    void MessageBus::publish(const loadmodule::LoadReadingProfile& message)
    {
        this->load_reading->publish(message);
    }

    void MessageBus::publish(const loadmodule::LoadStatusProfile& message)
    {
        this->load_status->publish(message);
    }

    void MessageBus::publish(const loadmodule::LoadControlProfile& message)
    {
        this->load_control->publish(message);
    }



}


