
#ifndef OPENFMB_ADAPTER_CONFIGSTRINGS_H
#define OPENFMB_ADAPTER_CONFIGSTRINGS_H

namespace adapter {
namespace util {
    namespace keys {

        // ---- strings used in API and plugins ----

        constexpr const char* const profile = "profile";
        constexpr const char* const profiles = "profiles";
        constexpr const char* const publish = "publish";
        constexpr const char* const subscribe = "subscribe";
        constexpr const char* const path = "path";
        constexpr const char* const overrides = "overrides";
        constexpr const char* const scale = "scale";
        constexpr const char* const index = "index";
        constexpr const char* const negate = "negate";
        constexpr const char* const mapping = "mapping";
        constexpr const char* const name = "name";
        constexpr const char* const value = "value";
        constexpr const char* const when_true = "when-true";
        constexpr const char* const when_false = "when-false";
        constexpr const char* const outputs = "outputs";
        constexpr const char* const command_order = "command-order";
        constexpr const char* const command_id = "command-id";
        constexpr const char* const scheduleParameterType = "scheduleParameterType";
        constexpr const char* const tolerance = "tolerance-ms";

        // used for TLS configurations in NATS and MQTT
        static const char* const security = "security";
        static const char* const ca_trusted_cert_file = "ca-trusted-cert-file";
        static const char* const client_cert_chain_file = "client-cert-chain-file";
        static const char* const client_private_key_file = "client-private-key-file";
    }
}
}

#endif
