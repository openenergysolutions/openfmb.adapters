
#ifndef OPENFMB_ADAPTER_DNP3_MASTER_ICOMMANDSEQUENCEEXECUTOR_H
#define OPENFMB_ADAPTER_DNP3_MASTER_ICOMMANDSEQUENCEEXECUTOR_H

#include "ICommandSequence.h"

#include <memory>

namespace adapter {
namespace dnp3 {
    namespace master {
        class ICommandSequenceExecutor {
        public:
            virtual ~ICommandSequenceExecutor() = default;

            virtual void add(std::unique_ptr<ICommandSequence> sequence) = 0;
        };
    }
}
}

#endif
