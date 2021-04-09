// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_IMESSAGEBUS_H
#define OPENFMB_ADAPTER_IMESSAGEBUS_H

#include "IPublisher.h"
#include "ISubscriber.h"

namespace adapter {
namespace api {
    /**
     * IMessageBus is both IPublisher and ISubscriber
     */
    class IMessageBus : public IPublisher, public ISubscriber {

    public:
        ~IMessageBus() override = default;
    };

    using message_bus_t = std::shared_ptr<IMessageBus>;
}
}

#endif
