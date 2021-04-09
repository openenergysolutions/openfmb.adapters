// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_DNP3_MASTER_ICOMMANDSEQUENCE_H
#define OPENFMB_ADAPTER_DNP3_MASTER_ICOMMANDSEQUENCE_H

#include <opendnp3/master/ICommandProcessor.h>

namespace adapter {
namespace dnp3 {
    namespace master {
        class ICommandSequence {
        public:
            virtual ~ICommandSequence() = default;

            /**
                     * A name for the command sequence for logging purposes
                     *
                     */
            virtual std::string get_name() = 0;

            /**
                     * Start execution of the next command
                     *
                     * @return true, if there was a command to execute, false otherwise
                     */
            virtual bool
            begin_execute(opendnp3::ICommandProcessor& processor, const opendnp3::CommandResultCallbackT& callback)
                = 0;
        };
    }
}
}
#endif
