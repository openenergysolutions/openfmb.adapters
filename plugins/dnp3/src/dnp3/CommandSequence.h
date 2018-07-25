
#ifndef OPENFMB_ADAPTER_COMMANDSEQUENCE_H
#define OPENFMB_ADAPTER_COMMANDSEQUENCE_H

#include "CommandConfiguration.h"
#include "ICommandSequence.h"

namespace adapter {
namespace dnp3 {

    class CommandSequence final : public ICommandSink, public ICommandSequence {
        const std::string name;

        class Compare {
        public:
            bool operator()(const CommandInfo& lhs, const CommandInfo& rhs)
            {
                // lower number is higher priority
                return lhs.index > rhs.index;
            }
        };

    public:
        CommandSequence(std::string name)
            : name(std::move(name))
        {
        }

        /// --- implement ICommandSink ---

        void add(const Control& control) override
        {
            queue.push(CommandInfo::direct_operate(control));
        }

        /// --- implement ICommandSequence ---

        std::string get_name() override
        {
            return name;
        }

        bool begin_execute(opendnp3::ICommandProcessor& processor, const opendnp3::CommandCallbackT& callback) override
        {
            if (queue.empty())
                return false;
            queue.top().action(processor, callback);
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
            return true;
        }

    private:
        std::priority_queue<CommandInfo, std::vector<CommandInfo>, Compare> queue;
    };
}
}

#endif
