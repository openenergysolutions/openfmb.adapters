
#ifndef OPENFMB_ADAPTER_IPUBLISHER_H
#define OPENFMB_ADAPTER_IPUBLISHER_H

#include "proto-api/resourcemodule/resourcemodule.pb.h"
#include "proto-api/switchmodule/switchmodule.pb.h"

#include <memory>

namespace adapter
{

    /**
     * Interface use to publish a particular kind of message to the adapter's internal bus
     *
     * @tparam T type of message being published
     */
    class IPublisher
    {
    public:
        virtual ~IPublisher() = default;

        virtual void publish(const resourcemodule::ResourceReadingProfile& message) = 0;
        virtual void publish(const switchmodule::SwitchControlProfile& message) = 0;
        virtual void publish(const switchmodule::SwitchReadingProfile& message) = 0;
        virtual void publish(const switchmodule::SwitchStatusProfile& message) = 0;
    };

    using publisher_t = std::shared_ptr<IPublisher>;

}

#endif
