#ifndef OPENFMB_ADAPTER_MQTT_CONFIGSTRINGS_H
#define OPENFMB_ADAPTER_MQTT_CONFIGSTRINGS_H

namespace adapter {
namespace mqtt {

    namespace keys {

        constexpr const char* const server_address = "server-address";
        constexpr const char* const client_id = "client-id";
        constexpr const char* const max_queued_messages = "max-queued-messages";
        constexpr const char* const topic_suffix = "topic-suffix";



    }
}
}

#endif
