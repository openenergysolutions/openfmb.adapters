// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_MQTT_QUEUETYPES_H
#define OPENFMB_ADAPTER_MQTT_QUEUETYPES_H

#include <adapter-util/util/Message.h>
#include <adapter-util/util/SynchronizedQueue.h>
#include <mqtt/message.h>

namespace adapter {
namespace mqtt {

    using message_queue_t = util::SynchronizedQueue<util::Message>;
    using message_queue_ptr_t = std::shared_ptr<message_queue_t>;
}
}

#endif //OPENFMB_ADAPTER_MQTT_QUEUETYPES_H
