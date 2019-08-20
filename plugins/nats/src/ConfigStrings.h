#ifndef OPENFMB_ADAPTER_NATS_CONFIGSTRINGS_H
#define OPENFMB_ADAPTER_NATS_CONFIGSTRINGS_H

namespace adapter {
namespace nats {
    namespace keys {
        static const char* const connect_retry_seconds = "connect-retry-seconds";
        static const char* const connect_url = "connect-url";
        static const char* const max_queued_messages = "max-queued-messages";
        static const char* const publish = "publish";
        static const char* const subscribe = "subscribe";
        static const char* const subject = "subject";
        static const char* const security = "security";
        static const char* const ca_trusted_cert_file = "ca-trusted-cert-file";
        static const char* const client_cert_chain_file = "client-cert-chain-file";
        static const char* const client_private_key_file = "client-private-key-file";
        static const char* const jwt_creds_file = "jwt-creds-file";
    }
}
}

#endif
