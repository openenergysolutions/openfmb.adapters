// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_ZENOH_SUBSCRIBER_H
#define OPENFMB_ADAPTER_ZENOH_SUBSCRIBER_H

#include "Plugin.h"

#include <boost/iostreams/device/array.hpp>
#include <boost/iostreams/stream.hpp>

namespace adapter {
namespace zenoh {
    template <class T>
    class ZenohSubscriber final : public IZenohSubscription {

    public:
        using message_queue_t = util::SynchronizedQueue<util::Message>;

        ZenohSubscriber(api::Logger logger, std::string subject, api::publisher_one_t<T> publisher)
            : logger(logger)
            , subject(std::move(subject))
            , publisher(std::move(publisher))
        {
        }

        ~ZenohSubscriber() override
        {
            if (this->subscription) {
                zn_undeclare_subscriber(this->subscription);
            }
        }

        void start(zn_session_t* session) override
        {
            this->subscription = zn_declare_subscriber(session, zn_rname(this->subject.c_str()), zn_subinfo_default(), on_message_static, (void*)this);
            if (this->subscription == nullptr) {
                logger.error("Unable to create Zenoh subscription");
            } else {
                logger.info("Created Zenoh subscription: {}", T::descriptor()->name());
            }
        }

    private:
        static void on_message_static(const zn_sample_t *sample, const void* closure)
        {
            // ensure that the message is destroyed a the end of scope
            reinterpret_cast<ZenohSubscriber<T>*>(const_cast<void *>(closure))->on_message(sample);
        }

        void on_message(const zn_sample_t *sample)
        {
            T proto;

            const auto length = sample->value.len;

            boost::iostreams::basic_array_source<char> input_source(
                (const char*)sample->value.val,
                (int)length);

            boost::iostreams::stream<boost::iostreams::basic_array_source<char>> input_stream(input_source);

            if (proto.ParseFromIstream(&input_stream)) {
                this->publisher->publish(proto);
            } else {
                this->logger.warn("Deserialization failed for {} on subject {} w/ length {}", T::descriptor()->name(), this->subject, length);
            }
        }

        api::Logger logger;
        const std::string subject;
        const api::publisher_one_t<T> publisher;
        zn_subscriber_t* subscription = nullptr;
    };
}
}

#endif
