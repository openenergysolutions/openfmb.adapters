// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_CLIENT_ICOMMANDSEQUENCE_H
#define OPENFMB_ADAPTER_CLIENT_ICOMMANDSEQUENCE_H

namespace adapter {
namespace iccp {
    namespace client {
        class ICommandSequence {
        public:
            virtual ~ICommandSequence() = default;

            virtual std::string get_name() = 0;

            virtual bool begin_execute() = 0;
        };
    }
}
}

#endif
