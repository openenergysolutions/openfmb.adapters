// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_MQTT_CONFIGSTRINGS_H
#define OPENFMB_ADAPTER_MQTT_CONFIGSTRINGS_H

namespace adapter {
namespace mqtt {

    namespace keys {

        constexpr const char* const server_address = "server-address";
        constexpr const char* const client_id = "client-id";
        constexpr const char* const max_queued_messages = "max-queued-messages";
        constexpr const char* const connect_retry_delay_ms = "connect-retry-delay-ms";
        constexpr const char* const topic_suffix = "topic-suffix";
        constexpr const char* const username = "username";
        constexpr const char* const password = "password";
    }
}
}

#endif
