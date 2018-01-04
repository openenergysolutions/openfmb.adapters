
#ifndef OPENFMB_ADAPTER_IPROTOPUBLISHERS_H
#define OPENFMB_ADAPTER_IPROTOPUBLISHERS_H

#include "proto/resourcemodule/resourcemodule.pb.h"

namespace adapter
{

    /**
     * Interface used to publish messages internally to the adapter application
     */
    class IProtoPublishers
    {

    public:

        virtual ~IProtoPublishers() {}

        /**
         * Publish a ResourceReadingProfile message
         *
         * @param profile object to publish
         */
        virtual void publish(const resourcemodule::ResourceReadingProfile& profile) = 0;

    };

}

#endif
