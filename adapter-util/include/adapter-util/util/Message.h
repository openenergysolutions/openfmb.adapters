// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_MESSAGE_H
#define OPENFMB_ADAPTER_MESSAGE_H

#include <google/protobuf/message_lite.h>

#include "Buffer.h"

namespace adapter {
namespace util {

    template <class T>
    using get_mrid_func_t = std::function<std::string(const T&)>;

    /**
     * Subject queue name + binary payload. Used by NATS + MQTT.
     */
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
