// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_DNP3_MASTER_COMMANDSEQUENCE_H
#define OPENFMB_ADAPTER_DNP3_MASTER_COMMANDSEQUENCE_H

#include "ICommandSequence.h"
#include "dnp3/master/CommandConfiguration.h"

namespace adapter {
namespace dnp3 {
    namespace master {

        class CommandSequence final : public ICommandSink, public ICommandSequence {
            const std::string name;

            class Compare {
            public:
                bool operator()(const PrioritizedCommand& lhs, const PrioritizedCommand& rhs)
                {
                    // lower number is higher priority
                    return lhs.get_priority() > rhs.get_priority();
                }
            };

        public:
            explicit CommandSequence(std::string name)
                : name(std::move(name))
            {
            }

            /// --- implement ICommandSink ---

            void add(const PrioritizedCommand& command) override
            {
                queue.push(command);
            }

            /// --- implement ICommandSequence ---

            std::string get_name() override
            {
                return name;
            }

            bool begin_execute(opendnp3::ICommandProcessor& processor,
                               const opendnp3::CommandResultCallbackT& callback) override
            {
                if (queue.empty())
                    return false;
                queue.top().begin_execute(processor, callback);
                queue.pop();
                return true;
            }

            /// --- helper methods

            size_t size() const
            {
                return queue.size();
            }

            bool is_empty() const
            {
                return queue.empty();
            }

        private:
            std::priority_queue<PrioritizedCommand, std::vector<PrioritizedCommand>, Compare> queue;
        };
    }
}
}

#endif
