
#ifndef OPENFMB_ADAPTER_NATS_PUBLISHER_H
#define OPENFMB_ADAPTER_NATS_PUBLISHER_H

#include <adapter-api/ISubscriptionHandler.h>
#include <adapter-api/Logger.h>

#include <adapter-util/config/SubjectNameSuffix.h>
#include <adapter-util/util/Message.h>
#include <adapter-util/util/SynchronizedQueue.h>

#include "SubjectName.h"

#include <boost/numeric/conversion/cast.hpp>

namespace adapter {
namespace nats {
    template <class T>
    class NATSPublisher final : public api::ISubscriptionHandler<T> // a NATS publisher subscribes to the internal bus
    {

    public:
        using message_queue_t = util::SynchronizedQueue<util::Message>;

        NATSPublisher(api::Logger logger, const util::SubjectNameSuffix& suffix, std::shared_ptr<message_queue_t> sink)
            : logger(std::move(logger))
            , suffix(suffix)
            , sink(std::move(sink))
        {
        }

        bool matches(const T& message) const override
        {
            return suffix.is_wildcard() ? true : get_subject_key_mrid(message) == suffix.get_value();
        }

    private:
        void process(const T& proto) override
        {
            try {

                // create a buffer just large enough to hold the serialized payload
                util::Buffer buffer(boost::numeric_cast<size_t>(proto.ByteSize()));

                if (!proto.SerializeToArray(buffer.data(), buffer.length())) {
                    logger.error("Failed to serialize proto of type: {}", T::descriptor()->name());
                    return;
                }

                if (!this->sink->push(std::make_unique<util::Message>(get_publish_subject_name(proto), std::move(buffer)))) {
                    logger.error("publish queue overflow");
                }
            } catch (const boost::bad_numeric_cast& ex) {
                logger.error("bad proto message length exception: {}", ex.what());
            }
        }

        api::Logger logger;
        const util::SubjectNameSuffix suffix;
        const std::shared_ptr<message_queue_t> sink;
    };
}
}

#endif //OPENFMB_ADAPTER_NATSPUBLISHER_H
