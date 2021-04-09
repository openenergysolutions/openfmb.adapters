// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_NATS_CONFIGSTRINGS_H
#define OPENFMB_ADAPTER_NATS_CONFIGSTRINGS_H

namespace adapter {
namespace nats {
    namespace keys {
        static const char* const connect_retry_seconds = "connect-retry-seconds";
        static const char* const connect_url = "connect-url";
        static const char* const max_queued_messages = "max-queued-messages";
        static const char* const subject = "subject";
        static const char* const jwt_creds_file = "jwt-creds-file";
    }
}
}

#endif
