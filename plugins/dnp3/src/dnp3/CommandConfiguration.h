
#ifndef OPENFMB_ADAPTER_COMMANDCONFIGURATION_H
#define OPENFMB_ADAPTER_COMMANDCONFIGURATION_H

#include <opendnp3/master/ICommandProcessor.h>

#include <adapter-api/util/Exception.h>
#include <functional>
#include <map>
#include <queue>

namespace adapter {
namespace dnp3 {
    /**
         * Something that can start a DNP3 command operation given the interface and the callback
         */
    using command_action_t = std::function<void(opendnp3::ICommandProcessor&, const opendnp3::CommandCallbackT& callback)>;

    class PrioritizedCommand {
    public:
        PrioritizedCommand(command_action_t action, const uint32_t priority)
            : action(std::move(action))
            , priority(priority)
        {
        }

        inline uint32_t get_priority() const
        {
            return this->priority;
        }

        void begin_execute(opendnp3::ICommandProcessor& processor, const opendnp3::CommandCallbackT& callback) const
        {
            action(processor, callback);
        }

    private:
        command_action_t action;
        uint32_t priority;
    };

    /**
         * Something that accepts prioritized commands
         */
    class ICommandSink {
    public:
        virtual ~ICommandSink() = default;

        virtual void add(const PrioritizedCommand& command) = 0;
    };

    /**
         * Something that can send command actions to a sink given an instance of the prorfile
         */
    template <class T>
    using command_action_builder_t = std::function<void(const T& profile, Logger& logger, ICommandSink& sink)>;

    template <class T>
    class CommandConfiguration final {

    public:
        void get_actions(const T& profile, Logger& logger, ICommandSink& sink) const
        {
            for (const auto& builder : this->builders) {
                builder(profile, logger, sink);
            }
        }

        void add(const command_action_builder_t<T>& builder)
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
