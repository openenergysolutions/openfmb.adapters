// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_DNP3_MASTER_SUBSCRIBINGCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_DNP3_MASTER_SUBSCRIBINGCONFIGREADVISITOR_H

#include <adapter-util/ProfileInfo.h>
#include <adapter-util/config/SubscribingConfigReadVisitorBase.h>
#include <adapter-util/config/YAMLGetters.h>
#include <adapter-util/schedule/ScheduleExecutor.h>
#include <adapter-api/Exception.h>

#include "dnp3/generated/CommandActionType.h"
#include "dnp3/master/ControlSubscriptionHandler.h"
#include "ConfigReaders.h"

namespace adapter {
namespace dnp3 {
    namespace master {

        // keep these helpers out of the template
        namespace read {

            PrioritizedCommand single_crob(const YAML::Node& node, util::ICommandPrioritySource& priority_source)
            {
                const auto control = read_control(node);
                return PrioritizedCommand([crob = control.crob, index = control.index](opendnp3::ICommandProcessor& processor, const opendnp3::CommandResultCallbackT& callback) {
                    processor.DirectOperate(crob, index, callback);
                }, priority_source.get_priority(node));
            }

            PrioritizedCommand single_fixed_analog(const YAML::Node& node, CommandActionType::Value action_type, util::ICommandPrioritySource& priority_source)
            {
                const auto index = util::yaml::get::index(node);
                const auto priority = priority_source.get_priority(node);

                switch(action_type)
                {
                    case CommandActionType::Value::g41v1:
                    {
                        const auto value = util::yaml::require_integer<int32_t>(node, util::keys::value);
                        return PrioritizedCommand([index, value](opendnp3::ICommandProcessor& processor, const opendnp3::CommandResultCallbackT& callback) {
                            processor.DirectOperate(opendnp3::AnalogOutputInt32(value), index, callback);
                        }, priority);
                    }
                    case CommandActionType::Value::g41v2:
                    {
                        const auto value = util::yaml::require_integer<int16_t>(node, util::keys::value);
                        return PrioritizedCommand([index, value](opendnp3::ICommandProcessor& processor, const opendnp3::CommandResultCallbackT& callback) {
                            processor.DirectOperate(opendnp3::AnalogOutputInt16(value), index, callback);
                        }, priority);
                    }
                    case CommandActionType::Value::g41v3:
                    {
                        const auto value = util::yaml::require(node, util::keys::value).as<float>();
                        return PrioritizedCommand([index, value](opendnp3::ICommandProcessor& processor, const opendnp3::CommandResultCallbackT& callback) {
                            processor.DirectOperate(opendnp3::AnalogOutputFloat32(value), index, callback);
                        }, priority);
                    }
                    case CommandActionType::Value::g41v4:
                    {
                        const auto value = util::yaml::require(node, util::keys::value).as<double>();
                        return PrioritizedCommand([index, value](opendnp3::ICommandProcessor& processor, const opendnp3::CommandResultCallbackT& callback) {
                            processor.DirectOperate(opendnp3::AnalogOutputDouble64(value), index, callback);
                        }, priority);
                    }
                    default:
                        throw api::Exception("Unhandled g41 CommandActionType");
                }
            }

            PrioritizedCommand single_control(const YAML::Node& node, util::ICommandPrioritySource& priority_source)
            {
                const auto action_type = util::yaml::require_enum<CommandActionType>(node);
                switch(action_type)
                {
                case CommandActionType::Value::g12v1:
                    return single_crob(node, priority_source);
                case CommandActionType::Value::g41v1:
                case CommandActionType::Value::g41v2:
                case CommandActionType::Value::g41v3:
                case CommandActionType::Value::g41v4:
                    return single_fixed_analog(node, action_type, priority_source);
                default:
                    throw api::Exception("Unhandled CommandActionType");
                }
            }

            std::vector<PrioritizedCommand> control_list(const YAML::Node& node, util::ICommandPrioritySource& priority_source)
            {
                std::vector<PrioritizedCommand> commands;

                util::yaml::foreach(node, [&commands, &priority_source](const YAML::Node& subnode) {
                    commands.push_back(single_control(subnode, priority_source));
                });

                return commands;
            }

            std::function<void(ICommandSink& sink, double value)> single_analog(const YAML::Node& node, util::ICommandPrioritySource& priority_source)
            {
                const auto index = util::yaml::get::index(node);
                const auto scaling = util::yaml::get::scale(node);
                const auto priority = priority_source.get_priority(node);
                const auto analog_type = util::yaml::require_enum<CommandActionType>(node);

                switch(analog_type)
                {
                    case CommandActionType::Value::g41v1:
                        return [index, scaling, priority](ICommandSink& sink, double value) {
                            sink.add(PrioritizedCommand([index, scaling, value](opendnp3::ICommandProcessor& processor, const opendnp3::CommandResultCallbackT& callback) {
                                processor.DirectOperate(opendnp3::AnalogOutputInt32(static_cast<int32_t>(value * scaling)), index, callback);
                            }, priority));
                        };
                    case CommandActionType::Value::g41v2:
                        return [index, scaling, priority](ICommandSink& sink, double value) {
                            sink.add(PrioritizedCommand([index, scaling, value](opendnp3::ICommandProcessor& processor, const opendnp3::CommandResultCallbackT& callback) {
                                processor.DirectOperate(opendnp3::AnalogOutputInt16(static_cast<int16_t>(value * scaling)), index, callback);
                            }, priority));
                        };
                    case CommandActionType::Value::g41v3:
                        return [index, scaling, priority](ICommandSink& sink, double value) {
                            sink.add(PrioritizedCommand([index, scaling, value](opendnp3::ICommandProcessor& processor, const opendnp3::CommandResultCallbackT& callback) {
                                processor.DirectOperate(opendnp3::AnalogOutputFloat32(static_cast<float>(value * scaling)), index, callback);
                            }, priority));
                        };
                    case CommandActionType::Value::g41v4:
                        return [index, scaling, priority](ICommandSink& sink, double value) {
                            sink.add(PrioritizedCommand([index, scaling, value](opendnp3::ICommandProcessor& processor, const opendnp3::CommandResultCallbackT& callback) {
                                processor.DirectOperate(opendnp3::AnalogOutputDouble64(static_cast<double>(value * scaling)), index, callback);
                            }, priority));
                        };
                    default:
                        throw api::Exception(node.Mark(), "Unsupported action type.");
                }
            }

            std::vector<std::function<void(ICommandSink& sink, double value)>> analog_list(const YAML::Node& node, util::ICommandPrioritySource& priority_source)
            {
                std::vector<std::function<void(ICommandSink& sink, double value)>> list;

                util::yaml::foreach(node, [&list, &priority_source](const YAML::Node& subnode) {
                    list.push_back(single_analog(subnode, priority_source));
                });

                return list;
            }
        }

        template <class T>
        class SubscribingConfigReadVisitor final : public util::SubscribingConfigReadVisitorBase<T> {

            const std::shared_ptr<CommandConfiguration<T>> configuration = std::make_shared<CommandConfiguration<T>>();
            util::ICommandPrioritySource& priorities;

        public:
            explicit SubscribingConfigReadVisitor(const YAML::Node& root, util::ICommandPrioritySource& priorities)
                : util::SubscribingConfigReadVisitorBase<T>(root)
                , priorities(priorities)
            {
            }

            void subscribe(api::Logger logger,
                           api::ISubscribeOne<T>& bus,
                           std::chrono::system_clock::duration tolerance,
                           std::shared_ptr<exe4cpp::IExecutor> executor,
                           std::shared_ptr<ICommandSequenceExecutor> command_executor)
            {
                if (configuration->is_empty()) {
                    throw api::Exception("command configuration is empty!");
                }

                logger.info("Subscribing to {} w/ mRID {}", T::descriptor()->name(), this->get_primary_mrid());

                auto subscriber = std::make_shared<ControlSubscriptionHandler<T>>(logger, this->configuration, std::move(command_executor));
                bus.subscribe(std::make_shared<util::ScheduleExecutor<T>>(logger, this->get_primary_mrid(), executor, tolerance, subscriber));
            }

            void handle(const std::string& field_name,
                        const util::getter_t<T, google::protobuf::RepeatedPtrField<commonmodule::ENG_ScheduleParameter>>& getter) override;

            void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, bool>& accessor) override;

            void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int32_t>& accessor) override;

            void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int64_t>& accessor) override;

            void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, uint32_t>& accessor) override;

            void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, uint64_t>& accessor) override;

            void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, float>& accessor) override;

            void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, double>& accessor) override;

            void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int>& accessor,
                                     google::protobuf::EnumDescriptor const* descriptor) override;
        };

        template <class T>
        void SubscribingConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, bool>& accessor)
        {
            const auto when_true = read::control_list(util::yaml::require(node, util::keys::when_true),
                                                      this->priorities);
            const auto when_false = read::control_list(util::yaml::require(node, util::keys::when_false),
                                                       this->priorities);

            if (when_true.empty() && when_false.empty()) {
                return;
            }

            const auto builder = [=](const T& profile, api::Logger& logger, ICommandSink& sink) {
                accessor->if_present(profile, [&](const bool& value) {
                    if (value) {
                        for (const auto& action : when_true)
                            sink.add(action);
                    } else {
                        for (const auto& action : when_false)
                            sink.add(action);
                    }
                });
            };

            this->configuration->add(builder);
        }

        template <class T>
        void SubscribingConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, int32_t>& accessor)
        {
            const auto actions = read::analog_list(util::yaml::require(node, util::keys::outputs), this->priorities);

            if (actions.empty())
                return;

            this->configuration->add([=](const T& profile, api::Logger& logger, ICommandSink& sink) {
                accessor->if_present(profile, [&](const int32_t& value) {
                    for(const auto& action : actions)
                        action(sink, static_cast<double>(value));
                });
            });
        }

        template <class T>
        void SubscribingConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, uint32_t>& accessor)
        {
            const auto actions = read::analog_list(util::yaml::require(node, util::keys::outputs), this->priorities);

            if (actions.empty())
                return;

            this->configuration->add([=](const T& profile, api::Logger& logger, ICommandSink& sink) {
                accessor->if_present(profile, [&](const uint32_t& value) {
                    for(const auto& action : actions)
                        action(sink, static_cast<double>(value));
                });
            });
        }

        template <class T>
        void SubscribingConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, int64_t>& accessor)
        {
            const auto actions = read::analog_list(util::yaml::require(node, util::keys::outputs), this->priorities);

            if (actions.empty())
                return;

            this->configuration->add([=](const T& profile, api::Logger& logger, ICommandSink& sink) {
                accessor->if_present(profile, [&](const int64_t& value) {
                    for(const auto& action : actions)
                        action(sink, static_cast<double>(value));
                });
            });
        }

        template <class T>
        void SubscribingConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, uint64_t>& accessor)
        {
            const auto actions = read::analog_list(util::yaml::require(node, util::keys::outputs), this->priorities);

            if (actions.empty())
                return;

            this->configuration->add([=](const T& profile, api::Logger& logger, ICommandSink& sink) {
                accessor->if_present(profile, [&](const uint64_t& value) {
                    for(const auto& action : actions)
                        action(sink, static_cast<double>(value));
                });
            });
        }

        template <class T>
        void SubscribingConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, float>& accessor)
        {
            const auto actions = read::analog_list(util::yaml::require(node, util::keys::outputs), this->priorities);

            if (actions.empty())
                return;

            this->configuration->add([=](const T& profile, api::Logger& logger, ICommandSink& sink) {
                accessor->if_present(profile, [&](const float& value) {
                    for(const auto& action : actions)
                        action(sink, value);
                });
            });
        }

        template <class T>
        void SubscribingConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, double>& accessor)
        {
            const auto actions = read::analog_list(util::yaml::require(node, util::keys::outputs), this->priorities);

            if (actions.empty())
                return;

            this->configuration->add([=](const T& profile, api::Logger& logger, ICommandSink& sink) {
                accessor->if_present(profile, [&](const double& value) {
                    for(const auto& action : actions)
                        action(sink, value);
                });
            });
        }

        template <class T>
        void SubscribingConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, int>& accessor,
                                                                  google::protobuf::EnumDescriptor const* descriptor)
        {
            std::map<int, std::vector<PrioritizedCommand>> map;
            util::yaml::foreach(util::yaml::require(node, util::keys::mapping), [&](const YAML::Node& node) {
                const auto name = util::yaml::require_string(node, util::keys::name);
                const auto value = descriptor->FindValueByName(name);
                if (!value)
                    throw api::Exception("Unknown enum value: ", name);
                map[value->number()] = std::move(read::control_list(util::yaml::require(node, util::keys::outputs), this->priorities));
            });

            this->configuration->add([map = std::move(map), accessor](const T& profile, api::Logger& logger, ICommandSink& sink) {
                accessor->if_present(
                    profile,
                    [&](int value) {
                        const auto entry = map.find(value);
                        if (entry != map.end()) {
                            for (const auto& action : entry->second)
                                sink.add(action);
                        }
                    });
            });
        }

        template <class T>
        void SubscribingConfigReadVisitor<T>::handle(const std::string& field_name,
                                                     const util::getter_t<T, google::protobuf::RepeatedPtrField<commonmodule::ENG_ScheduleParameter>>& getter)
        {
            const auto node = this->get_config_node(field_name);

            std::map<commonmodule::ScheduleParameterKind, std::vector<std::function<void(ICommandSink& sink, double value)>>> action_map;
            util::yaml::foreach(node, [&](const YAML::Node& entry) {
                const auto name = util::yaml::require_string(entry, util::keys::scheduleParameterType);
                const auto value = commonmodule::ScheduleParameterKind_descriptor()->FindValueByName(name);
                if (!value) {
                    throw api::Exception("'", name, "' is not a valid value for enumeration ", commonmodule::ScheduleParameterKind_descriptor()->name());
                }

                const auto enum_value = static_cast<commonmodule::ScheduleParameterKind>(value->number());
                action_map[enum_value] = std::move(read::analog_list(util::yaml::require(entry, util::keys::outputs), this->priorities));
            });

            this->configuration->add([getter, map = std::move(action_map)](const T& profile, api::Logger& logger, ICommandSink& sink) {
                const auto parameters = getter(profile);

                if (!parameters)
                    return;

                for (auto param : *parameters) {
                    auto entry = map.find(param.scheduleparametertype());
                    if (entry == map.end())
                    {
                        const auto value = commonmodule::ScheduleParameterKind_descriptor()->FindValueByNumber(param.scheduleparametertype());
                        if (value)
                            logger.warn("No configured mapping for schedule parameter: {}", value->name());
                    }
                    else
                    {
                        // perform the actions using the parameter's value
                        for(const auto& action : entry->second)
                            action(sink, param.value());
                    }
                }
            });
        }
    }
}
}

#endif
