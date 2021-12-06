// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_ICCP_CLIENT_IPOLLHANDLER_H
#define OPENFMB_ADAPTER_ICCP_CLIENT_IPOLLHANDLER_H

#include <adapter-api/Logger.h>

namespace adapter {
    namespace iccp {
        namespace client {           

            class IPollHandler {

            public:
                virtual ~IPollHandler() = default;

                // --- poll lifecycle ----

                /**
                 * called prior to beginning a sequence of polls
                 */
                virtual void begin(api::Logger& logger) = 0;

                /**
                     * called after polls are complete to fill and publish a message
                     */
                virtual void end(api::Logger& logger) = 0;

                // --- helpers ----
                
                virtual void configure() = 0;

                virtual std::size_t num_mapped_values() const = 0;
            };
        }
    }
}

#endif
