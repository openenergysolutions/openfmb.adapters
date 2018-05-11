
#ifndef OPENFMB_ADAPTER_NATS_PUBLISHER_H
#define OPENFMB_ADAPTER_NATS_PUBLISHER_H

#include "adapter-api/ISubscriber.h"
#include "adapter-api/Logger.h"

#include "SynchronizedQueue.h"
#include "Message.h"

#include <boost/numeric/conversion/cast.hpp>


namespace adapter
{
    namespace nats
    {
        template <class T>
        class NATSPublisher final : public ISubscriber<T> // a NATS publisher subscribes to the internal bus
        {

        public:

            typedef SynchronizedQueue<Message> message_queue_t;

            NATSPublisher(Logger logger, std::string subject, std::shared_ptr<message_queue_t> sink) :
                logger(std::move(logger)),
                subject(std::move(subject)),
                sink(std::move(sink))
            {}

            void receive(const T& proto) override
            {
                try {

                    // create a buffer just large enough to hold the serialized payload
                    Buffer buffer(boost::numeric_cast<size_t>(proto.ByteSize()));

                    if(!proto.SerializeToArray(buffer.data(), buffer.length()))
                    {
                        logger.error("Failed to serialize proto for subject: {}", this->subject);
                        return;
                    }

                    if(!this->sink->push(std::make_unique<Message>(this->subject, std::move(buffer))))
                    {
                        logger.error("publish queue overflow");
                    }
                }
                catch(const boost::bad_numeric_cast& ex)
                {
                    logger.error("bad proto message length exception: {}", ex.what());
                }

            }



        private:

            Logger logger;
            const std::string subject;
            const std::shared_ptr<message_queue_t> sink;

        };
    }

}

#endif //OPENFMB_ADAPTER_NATSPUBLISHER_H
