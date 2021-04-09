// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_MQTTPUBLISHER_H
#define OPENFMB_ADAPTER_MQTTPUBLISHER_H

#include <adapter-api/ISubscriptionHandler.h>

#include <adapter-util/util/Buffer.h>

#include "mqtt/message.h"

#include "QueueTypes.h"
#include "TopicName.h"
#include "TopicNameSuffix.h"

namespace adapter {
namespace mqtt {

    template <class T>
    class MQTTPublisher : public api::ISubscriptionHandler<T> {
        api::Logger logger;
        const message_queue_ptr_t queue;
        const TopicNameSuffix suffix;

    public:
        MQTTPublisher(const TopicNameSuffix& suffix, const api::Logger& logger, message_queue_ptr_t queue)
            : suffix(suffix)
            , logger(logger)
            , queue(std::move(queue))
        {
        }

    protected:
        bool matches(const T& message) const override
        {
            return suffix.is_wildcard() ? true : get_subject_key_mrid(message) == suffix.get_value();
        }

        void process(const T& message) override
        {
            try {

                // create a buffer just large enough to hold the serialized payload
                util::Buffer buffer(boost::numeric_cast<size_t>(message.ByteSize()));

                if (!message.SerializeToArray(buffer.data(), buffer.length())) {
                    logger.error("Failed to serialize proto of type: {}", T::descriptor()->name());
                    return;
                }

                if (!this->queue->push(std::make_unique<util::Message>(get_publish_topic_name(message), std::move(buffer)))) {
                    logger.error("publish queue overflow");
                }
            } catch (const boost::bad_numeric_cast& ex) {
                logger.error("bad proto message length exception: {}", ex.what());
            }
        }
    };
}
}

#endif //OPENFMB_ADAPTER_MQTTPUBLISHER_H
