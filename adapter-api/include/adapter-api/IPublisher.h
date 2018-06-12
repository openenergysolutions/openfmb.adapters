
#ifndef OPENFMB_ADAPTER_IPUBLISHER_H
#define OPENFMB_ADAPTER_IPUBLISHER_H

#include "proto-api/resourcemodule/resourcemodule.pb.h"
#include "proto-api/switchmodule/switchmodule.pb.h"
#include "proto-api/essmodule/essmodule.pb.h"
#include "proto-api/solarmodule/solarmodule.pb.h"

#include <memory>

namespace adapter
{

    /**
     * Interface used to publish profiles to the bus
     */
    class IPublisher
    {
    public:
        virtual ~IPublisher() = default;

        virtual void publish(const resourcemodule::ResourceReadingProfile& message) = 0;

        virtual void publish(const switchmodule::SwitchControlProfile& message) = 0;
        virtual void publish(const switchmodule::SwitchReadingProfile& message) = 0;
        virtual void publish(const switchmodule::SwitchStatusProfile& message) = 0;

        virtual void publish(const essmodule::ESSReadingProfile& message) = 0;
        virtual void publish(const essmodule::ESSStatusProfile& message) = 0;
        virtual void publish(const essmodule::ESSControlProfile& message) = 0;

        virtual void publish(const solarmodule::SolarReadingProfile& message) = 0;
        virtual void publish(const solarmodule::SolarStatusProfile& message) = 0;
        virtual void publish(const solarmodule::SolarControlProfile& message) = 0;

    };

    using publisher_t = std::shared_ptr<IPublisher>;

}

#endif
