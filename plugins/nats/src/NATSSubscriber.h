
#ifndef OPENFMB_ADAPTER_NATS_NATSSUBSCRIBER_H
#define OPENFMB_ADAPTER_NATS_NATSSUBSCRIBER_H

#include "Plugin.h"

#include <boost/iostreams/device/array.hpp>
#include <boost/iostreams/stream.hpp>

namespace adapter {
namespace nats {
    template <class T>
    class NATSSubscriber final : public INATSSubscription {

    public:
        using message_queue_t = util::SynchronizedQueue<util::Message>;

        NATSSubscriber(api::Logger logger, std::string subject, api::publisher_t publisher)
            : logger(logger)
            , subject(std::move(subject))
            , publisher(std::move(publisher))
        {
        }

        ~NATSSubscriber() override
        {
            if (this->subscription) {
                natsSubscription_Destroy(this->subscription);
            }
        }

        void start(natsConnection* connection) override
        {
            auto err = natsConnection_Subscribe(&this->subscription, connection, this->subject.c_str(), on_message_static, this);
            if (err) {
                logger.error("Unable to create NATS subscription: {}", nats_GetLastError(nullptr));
            } else {
                logger.info("Created NATS subscription: {}", T::descriptor()->name());
            }
        }

    private:
        struct NatsMsgDeleter {
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
                length);

            boost::iostreams::stream<boost::iostreams::basic_array_source<char>> input_stream(input_source);

            if (proto.ParseFromIstream(&input_stream)) {
                this->publisher->publish(proto);
            } else {
                this->logger.warn("Deserialization failed for {} on subject {} w/ length {}", T::descriptor()->name(), this->subject, length);
            }
        }

        api::Logger logger;
        const std::string subject;
        const api::publisher_t publisher;
        natsSubscription* subscription = nullptr;
    };
}
}

#endif
