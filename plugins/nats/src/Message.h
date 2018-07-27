
#ifndef OPENFMB_ADAPTER_NATS_MESSAGE_H
#define OPENFMB_ADAPTER_NATS_MESSAGE_H

#include <google/protobuf/message_lite.h>

#include "Buffer.h"

namespace adapter {
namespace nats {
    template <class T>
    using get_mrid_func_t = std::function<std::string(const T&)>;

    class Message {

    public:
        Message() = delete;

        Message(const Message&) = delete;

        const std::string subject;
        const Buffer buffer;

        Message(std::string subject, Buffer buffer)
            : subject(std::move(subject))
            , buffer(std::move(buffer))
        {
        }
    };
}
}

#endif
