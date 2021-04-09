// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_NATSOPTIONS_H
#define OPENFMB_ADAPTER_NATSOPTIONS_H

#include <nats/nats.h>

namespace adapter {
namespace nats {

    // RAII C++ wrapper for Nats options
    struct NatsOptions {

        NatsOptions();
        ~NatsOptions();

        natsOptions* impl = nullptr;
    };
}
}

#endif // OPENFMB_ADAPTER_NATSOPTIONS_H
