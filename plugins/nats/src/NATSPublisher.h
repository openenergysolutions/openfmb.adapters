
#ifndef OPENFMB_ADAPTER_NATS_PUBLISHER_H
#define OPENFMB_ADAPTER_NATS_PUBLISHER_H

#include "adapter-api/ISubscriber.h"
#include "adapter-api/Logger.h"

#include "SynchronizedQueue.h"
#include "Message.h"


namespace adapter
{
    namespace nats
    {
        template <class T>
        class NATSPublisher final : public ISubscriber<T> // a NATS publisher subscribes to the internal bus
        {

        public:

            typedef SynchronizedQueue<Message> message_queue_t;

            NATSPublisher(Logger logger, const std::string& subject, std::shared_ptr<message_queue_t> sink) :
                logger(logger),
                subject(subject),
                sink(sink)
            {}

            virtual void receive(const T& proto) override
            {

                auto size = proto.ByteSize();
                if(size < 0 || size > std::numeric_limits<size_t>::max())
                {
                    logger.error("Unexpected proto size: {} for subject: {}", proto.ByteSize(), this->subject);
                    return;
                }

                Buffer buffer(static_cast<size_t>(size));
                if(!proto.SerializeToArray(buffer.data(), size))
                {
                    logger.error("Failed to serialize proto for subject: {}", this->subject);
                    return;
                }

                if(!this->sink->push(std::make_unique<Message>(this->subject, std::move(buffer))))
                {
                    logger.error("publish queue overflow");
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
