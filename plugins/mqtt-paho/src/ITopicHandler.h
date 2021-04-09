// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_MQTT_ITOPICHANDLER_H
#define OPENFMB_ADAPTER_MQTT_ITOPICHANDLER_H

#include <mqtt/message.h>

namespace adapter {
namespace mqtt {

    class ITopicHandler {

    public:
        virtual void handle(::mqtt::const_message_ptr msg) = 0;
    };
}
}

#endif
