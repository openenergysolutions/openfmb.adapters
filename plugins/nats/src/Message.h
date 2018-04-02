
#ifndef OPENFMB_ADAPTER_NATS_MESSAGE_H
#define OPENFMB_ADAPTER_NATS_MESSAGE_H

#include <google/protobuf/message_lite.h>

#include "Buffer.h"

namespace adapter
{
    namespace nats
    {
        class Message
        {

        public:

            Message() = delete;

            Message(const Message&) = delete;

            ~Message() = default;

            const std::string subject;
            const Buffer buffer;

            Message(const std::string& subject, Buffer buffer) :
                subject(subject),
                buffer(std::move(buffer))
            {

            }

        };
    }
}


#endif
