
#ifndef OPENFMB_ADAPTER_COMMANDCONFIGURATION_H
#define OPENFMB_ADAPTER_COMMANDCONFIGURATION_H

#include <opendnp3/master/ICommandProcessor.h>

#include "CommandOrdering.h"
#include "Control.h"

#include <adapter-api/util/Exception.h>
#include <functional>
#include <map>
#include <queue>

namespace adapter {
namespace dnp3 {

    /**
         Something that can start a DNP3 command operation given the interface and the callback
    */
    using command_action_t = std::function<void(opendnp3::ICommandProcessor&, const opendnp3::CommandCallbackT& callback)>;

    class CommandInfo {

    private:
        CommandInfo(command_action_t action, uint16_t index, CommandType::Value type)
            : action(std::move(action))
            , index(index)
            , type(type)
        {
        }

    public:
        static CommandInfo direct_operate(Control control)
        {
            return CommandInfo(
                [control](opendnp3::ICommandProcessor& processor, const opendnp3::CommandCallbackT& callback) {
                    processor.DirectOperate(control.crob, control.index, callback);
                },
                control.index,
                CommandType::Value::crob);
        }

        command_action_t action;
        uint16_t index;
        CommandType::Value type;
    };

    /**
     * Something that accepts prioritized commands
     */
    class ICommandSink {
    public:
        virtual ~ICommandSink() = default;

        virtual void add(const Control& control) = 0;
    };

    /**
     * Something that can send command actions to a sink given an instance of the profile
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
