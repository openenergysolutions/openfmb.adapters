
#ifndef OPENFMB_ADAPTER_COMMANDCONFIGURATION_H
#define OPENFMB_ADAPTER_COMMANDCONFIGURATION_H

#include <opendnp3/master/ICommandProcessor.h>

#include <map>
#include <queue>
#include <functional>
#include <adapter-api/util/Exception.h>

namespace adapter
{
    namespace dnp3
    {
        // start a command operation
        using command_action_t = std::function<void (opendnp3::ICommandProcessor&, const opendnp3::CommandCallbackT& callback)>;

        class CommandAction
        {
        public:
            CommandAction(uint32_t priority, command_action_t action) : priority(priority), action(std::move(action)) {}

            inline bool operator<(const CommandAction& rhs) const
            {
                return this->priority < rhs.priority;
            }

        private:

            uint32_t priority;
            command_action_t action;
        };

        using command_action_sink_t = std::function<void (const CommandAction&)>;

        template <class T>
        using command_action_builder_t = std::function<void (const T& profile, const command_action_sink_t& sink)>;

        template <class T>
        class ICommandConfigBuilder
        {
        public:
            virtual ~ICommandConfigBuilder() = default;

            virtual void add(const command_action_builder_t<T>& builder) = 0;
        };

        template <class T>
        class ICommandActionProcessor
        {
        public:
            virtual ~ICommandActionProcessor() = default;

            virtual std::priority_queue<CommandAction> get_actions(const T& profile) const = 0;
        };

        template <class T>
        class CommandConfiguration final : public ICommandConfigBuilder<T>, public ICommandActionProcessor<T>
        {

        public:

            std::priority_queue<CommandAction> get_actions(const T& profile) const override
            {
                std::priority_queue<CommandAction> ret;
                for(const auto& builder : this->builders)
                {
                    const auto add_to_queue = [&](const CommandAction & action)
                    {
                        ret.push(action);
                    };

                    builder(profile, add_to_queue);
                }
                return std::move(ret);
            }

            void add(const command_action_builder_t<T>& builder) override
            {
                this->builders.push_back(builder);
            }

            inline bool is_empty() const
            {
                return builders.empty();
            }

        private:
            std::vector<command_action_builder_t<T>> builders;
        };
    }
}

#endif
