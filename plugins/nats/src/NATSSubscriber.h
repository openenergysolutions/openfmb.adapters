
#ifndef OPENFMB_ADAPTER_NATS_NATSSUBSCRIBER_H
#define OPENFMB_ADAPTER_NATS_NATSSUBSCRIBER_H


#include "Plugin.h"

#include <boost/iostreams/stream.hpp>
#include <boost/iostreams/device/array.hpp>

namespace adapter
{
    namespace nats
    {
        template <class T>
        class NATSSubscriber final : public INATSSubscription
        {

        public:

            typedef util::SynchronizedQueue<Message> message_queue_t;

            NATSSubscriber(Logger logger, const std::string& subject, publisher_t publisher) :
                logger(logger),
                subject(subject),
                publisher(publisher)
            {

            }

            ~NATSSubscriber()
            {
                if(this->subscription)
                {
                    natsSubscription_Destroy(this->subscription);
                }
            }

            virtual void start(natsConnection* connection) override
            {
                auto err = natsConnection_Subscribe(&this->subscription, connection, this->subject.c_str(), on_message_static, this);
                if(err)
                {
                    logger.error("Unable to create NATS subscription: {}", nats_GetLastError(nullptr));
                }
                else
                {
                    logger.info("Created NATS subscribtion: {}", T::descriptor()->name());
                }
            }

        private:

            struct NatsMsgDeleter
            {
                void operator()(natsMsg* msg)
                {
                    natsMsg_Destroy(msg);
                }
            };

            static void on_message_static(natsConnection* nc, natsSubscription* sub, natsMsg* msg, void* closure)
            {
                // ensure that the message is destroyed a the end of scope
                std::unique_ptr<natsMsg, NatsMsgDeleter> deleter(msg);
                reinterpret_cast<NATSSubscriber<T>*>(closure)->on_message(nc, sub, msg);
            }

            void on_message(natsConnection* nc, natsSubscription* sub, natsMsg* msg)
            {
                T proto;

                const auto length = natsMsg_GetDataLength(msg);

                boost::iostreams::basic_array_source<char> input_source(
                    natsMsg_GetData(msg),
                    length
                );

                boost::iostreams::stream<boost::iostreams::basic_array_source<char> > input_stream(input_source);

                if(proto.ParseFromIstream(&input_stream))
                {
                    this->publisher->publish(proto);
                }
                else
                {
                    this->logger.warn("Deserialization failed for {} on subject {} w/ length {}", T::descriptor()->name(), this->subject, length);
                }
            }

            Logger logger;
            const std::string subject;
            const publisher_t publisher;
            natsSubscription* subscription = nullptr;

        };
    }
}

#endif
