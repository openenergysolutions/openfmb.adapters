
#ifndef OPENFMB_ADAPTER_IPROTOPUBLISHERS_H
#define OPENFMB_ADAPTER_IPROTOPUBLISHERS_H

#include "proto/ResourceReadingProfile.pb.h"

namespace openfmb {

    /**
     * Interface used to publish messages internally to the adapter application
     */
    class IProtoPublishers {

    public:

        virtual ~IProtoPublishers() {}

        /**
         * Publish a ResourceReadingProfile message
         *
         * @param profile object to publish
         */
        virtual void publish(const ResourceReadingProfile& profile) = 0;

    };

}

#endif
