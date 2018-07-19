
#ifndef OPENFMB_ADAPTER_NATS_PUBLISHER_H
#define OPENFMB_ADAPTER_NATS_PUBLISHER_H

#include "adapter-api/ISubscriber.h"
#include "adapter-api/Logger.h"

#include "adapter-api/util/SynchronizedQueue.h"
#include "Message.h"
#include "SubjectName.h"

#include <boost/numeric/conversion/cast.hpp>


namespace adapter
{
    namespace nats
    {
        template <class T>
        class NATSPublisher final : public ISubscriber<T> // a NATS publisher subscribes to the internal bus
        {

        public:

            using message_queue_t = util::SynchronizedQueue<Message>;

            NATSPublisher(Logger logger, std::shared_ptr<message_queue_t> sink) :
                logger(std::move(logger)),
                sink(std::move(sink))
            {}

        private:
            void process(const T& proto) override
            {
                try
                {

                    // create a buffer just large enough to hold the serialized payload
                    Buffer buffer(boost::numeric_cast<size_t>(proto.ByteSize()));

                    if(!proto.SerializeToArray(buffer.data(), buffer.length()))
                    {
                        logger.error("Failed to serialize proto of type: {}", T::descriptor()->name());
                        return;
                    }

                    if(!this->sink->push(std::make_unique<Message>(get_publish_subject_name(proto), std::move(buffer))))
                    {
                        logger.error("publish queue overflow");
                    }
                }
                catch(const boost::bad_numeric_cast& ex)
                {
                    logger.error("bad proto message length exception: {}", ex.what());
                }

            }

            Logger logger;
            const std::shared_ptr<message_queue_t> sink;

        };
    }

}

#endif //OPENFMB_ADAPTER_NATSPUBLISHER_H
