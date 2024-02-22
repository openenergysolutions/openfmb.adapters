// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_ICCP_CLIENT_ICOMMANDSEQUENCEEXECUTOR_H
#define OPENFMB_ADAPTER_ICCP_CLIENT_ICOMMANDSEQUENCEEXECUTOR_H

#include "ICommandSequence.h"

#include <memory>

namespace adapter {
namespace iccp {
    namespace client {
        class ICommandSequenceExecutor {
        public:
            virtual ~ICommandSequenceExecutor() = default;

            virtual void add(std::unique_ptr<ICommandSequence> sequence) = 0;
        };
    }
}
}

#endif //OPENFMB_ADAPTER_ICCP_CLIENT_ICOMMANDSEQUENCEEXECUTOR_H
