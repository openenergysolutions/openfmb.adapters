// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_DNP3_MASTER_COMMANDCONFIGURATION_H
#define OPENFMB_ADAPTER_DNP3_MASTER_COMMANDCONFIGURATION_H

#include <opendnp3/master/ICommandProcessor.h>

#include <adapter-api/Exception.h>
#include <functional>
#include <map>
#include <queue>

namespace adapter {
namespace dnp3 {
    namespace master {

        /**
                 Something that can start a DNP3 command operation given the interface and the callback
            */
        using command_action_t = std::function<void(opendnp3::ICommandProcessor&,
                                                    const opendnp3::CommandResultCallbackT& callback)>;

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

            void begin_execute(opendnp3::ICommandProcessor& processor,
                               const opendnp3::CommandResultCallbackT& callback) const
            {
                action(processor, callback);
            }

        private:
            command_action_t action;
            size_t priority;
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
             * Something that can send command actions to a sink given an instance of the profile
             */
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
