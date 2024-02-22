// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_CLIENT_COMMANDCONFIGURATION_H
#define OPENFMB_ADAPTER_CLIENT_COMMANDCONFIGURATION_H

#include <adapter-api/Exception.h>
#include <functional>
#include <map>
#include <queue>

namespace adapter {
namespace iccp {
namespace client {


using command_action_t = std::function<void()>;

class PrioritizedCommand {
public:
    PrioritizedCommand(command_action_t action, size_t priority)
        : action(std::move(action))
        , priority(priority)
    {
    }

    inline size_t get_priority() const
    {
        return this->priority;
    }

    void begin_execute() const
    {
        // TODO
    }

private:
    command_action_t action;
    size_t priority;
};

class ICommandSink {
public:
    virtual ~ICommandSink() = default;

    virtual void add(const PrioritizedCommand& command) = 0;
};


template <class T>
using command_action_builder_t = std::function<void(const T& profile, api::Logger& logger,
                                                    ICommandSink& sink)>;

template <class T>
class CommandConfiguration final {

public:
    void get_actions(const T& profile, api::Logger& logger, ICommandSink& sink) const
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
}

#endif
