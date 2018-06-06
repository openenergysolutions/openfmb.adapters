
#ifndef OPENFMB_ADAPTER_COMMANDSEQUENCE_H
#define OPENFMB_ADAPTER_COMMANDSEQUENCE_H

#include "CommandConfiguration.h"
#include "ICommandSequence.h"

namespace adapter
{
    namespace dnp3
    {
        class CommandSequence final: public ICommandSink, public ICommandSequence
        {
        public:

            /// --- implement ICommandSink ---

            void add(const PrioritizedCommand& command) override
            {
                queue.push(command);
            }

            /// --- implement ICommandSequence ---

            std::string name() override
            {
                return std::__cxx11::string();
            }

            bool begin_execute(opendnp3::ICommandProcessor& processor, const opendnp3::CommandCallbackT& callback) override
            {
                if(queue.empty()) return false;
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
            std::priority_queue<PrioritizedCommand> queue;
        };
    }
}

#endif
