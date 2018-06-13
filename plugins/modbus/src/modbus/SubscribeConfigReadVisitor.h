
#ifndef OPENFMB_ADAPTER_MODBUS_SUBSCRIBECONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_MODBUS_SUBSCRIBECONFIGREADVISITOR_H

#include <adapter-api/config/ConfigReadVisitorBase.h>
#include <adapter-api/ConfigStrings.h>

#include "ITransactionProcessor.h"
#include "ModifyRegisterTransaction.h"
#include "CommandConfiguration.h"
#include "RegisterOperationType.h"
#include "CommandSubscriber.h"


namespace adapter
{
    namespace modbus
    {

        template <class T>
        class SubscribeConfigReadVisitor final : public ConfigReadVisitorBase<T>
        {

            struct FloatConfig
            {
                bool enabled;
                uint16_t index;
                uint32_t priority;
                double scale;
            };

            using sink_action_t = std::function<void (ICommandSink& sink)>;

            struct BinaryConfigPair
            {
                std::vector<sink_action_t> when_true;
                std::vector<sink_action_t> when_false;

                bool apply(bool value, ICommandSink& sink) const
                {
                    auto ret = false;
                    for(const auto& action : value ? when_true : when_false)
                    {

                        action(sink);
                        ret = true;
                    }
                    return ret;
                }
            };

            const std::shared_ptr<CommandConfiguration<T>> config = std::make_shared<CommandConfiguration<T>>();
            std::string mRID;

        public:

            explicit SubscribeConfigReadVisitor(const YAML::Node& root) : ConfigReadVisitorBase<T>(root) {}

            void subscribe(const Logger& logger, IMessageBus& bus, std::shared_ptr<ITransactionProcessor> tx_processor)
            {
                bus.subscribe(
                    std::make_shared<CommandSubscriber<T>>(logger, this->mRID, this->config, std::move(tx_processor))
                );
            }

            void handle(const std::string& field_name, Accessor <commonmodule::MV, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor <commonmodule::CMV, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor <commonmodule::BCR, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor <commonmodule::StatusDPS, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor <commonmodule::StatusSPS, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor <commonmodule::ControlDPC, T> accessor) override
            {
                const auto config = read_binary_action_pair(
                                        yaml::require(this->get_config_node(field_name), ::adapter::keys::ctlVal)
                                    );

                this->config->add(
                    [config, accessor](const T & profile, ICommandSink & sink, Logger & logger)
                {
                    accessor.if_present(
                        profile,
                        [&](const commonmodule::ControlDPC & value)
                    {
                        config.apply(value.ctlval(), sink);
                    }
                    );
                }
                );
            }

            void handle(const std::string& field_name, Accessor <google::protobuf::FloatValue, T> accessor) override
            {
                const YAML::Node node = this->get_config_node(field_name);
                const auto enabled = yaml::require(node, keys::enabled).as<bool>();
                if(enabled)
                {
                    const auto action = read_float_action(node);

                    this->config->add(
                        [action, accessor](const T & profile, ICommandSink & sink, Logger & logger)
                    {
                        accessor.if_present(
                            profile,
                            [&](const google::protobuf::FloatValue & fv)
                        {
                            sink.set_register(action.index, action.priority, static_cast<uint16_t>(fv.value()*action.scale));
                        }
                        );
                    }
                    );
                }
            }

            void handle(const std::string& field_name, PrimitiveAccessor <commonmodule::StateKind, T> accessor) override
            {
                this->handle_enum_config<commonmodule::StateKind>(field_name, accessor, *commonmodule::StateKind_descriptor());
            }

            void handle(const std::string& field_name, PrimitiveAccessor<commonmodule::GridConnectModeKind, T> accessor) override
            {
                this->handle_enum_config<commonmodule::GridConnectModeKind>(field_name, accessor, *commonmodule::GridConnectModeKind_descriptor());
            }

            void handle(const std::string& field_name, Accessor <switchmodule::SwitchCSG, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor <commonmodule::CheckConditions, T> accessor) override
            {
                const auto node = this->get_config_node(field_name);

                this->handle_interlock_check(yaml::require(node, ::adapter::keys::interlockCheck), accessor);
                this->handle_synchro_check(yaml::require(node, ::adapter::keys::synchroCheck), accessor);
            }

            void handle_interlock_check(const YAML::Node& node, Accessor <commonmodule::CheckConditions, T> accessor)
            {
                const auto config = read_binary_action_pair(node);

                const auto builder = [ = ](const T & profile, ICommandSink & sink, Logger & logger)
                {
                    accessor.if_present(profile, [&](const commonmodule::CheckConditions & conditions)
                    {
                        if(conditions.has_interlockcheck())
                        {
                            config.apply(
                                conditions.interlockcheck().value(),
                                sink
                            );
                        }
                    });
                };

                this->config->add(builder);
            }

            void handle_synchro_check(const YAML::Node& node, Accessor <commonmodule::CheckConditions, T> accessor)
            {
                const auto config = read_binary_action_pair(node);

                const auto builder = [ = ](const T & profile, ICommandSink & sink, Logger & logger)
                {
                    accessor.if_present(profile, [&](const commonmodule::CheckConditions & conditions)
                    {
                        if(conditions.has_synchrocheck())
                        {
                            config.apply(
                                conditions.synchrocheck().value(),
                                sink
                            );
                        }
                    });
                };

                this->config->add(builder);
            }

            void handle(const std::string& field_name, Accessor <commonmodule::ScheduleCSG, T> accessor) override
            {
                const auto fconfig = this->read_float_action(this->get_config_node(field_name));

                if(!fconfig.enabled) return;

                this->config->add(
                    [config = fconfig, accessor](const T & profile, ICommandSink & sink, Logger & logger)
                {
                    accessor.if_present(
                        profile,
                        [&](const commonmodule::ScheduleCSG & csg)
                    {
                        if(csg.crvpts_size() != 1)
                        {
                            logger.warn("ignoring ScheduleCSG with crvpts_size == {}", csg.crvpts_size());
                        }
                        else
                        {
                            const auto value = csg.crvpts(0).yval();
                            sink.set_register(config.index, config.priority, static_cast<uint16_t>(value * config.scale));
                        }
                    }
                    );
                }
                );
            }

            void handle(const std::string& field_name, Accessor <commonmodule::MessageInfo, T> accessor) override
            {
                // ignore
            }

            void handle(const std::string& field_name, Accessor <commonmodule::IdentifiedObject, T> accessor) override
            {
                // ignore
            }

            void handle(const std::string& field_name, Accessor <commonmodule::ConductingEquipment, T> accessor) override
            {
                this->mRID = yaml::require_uuid(this->get_config_node(field_name), ::adapter::keys::mRID);
            }

        private:

            template <class E>
            void handle_enum_config(const std::string& field_name, PrimitiveAccessor <E, T> accessor, const google::protobuf::EnumDescriptor& descriptor)
            {
                const auto node = this->get_config_node(field_name);
                auto config = this->read_enum_config<E>(node, descriptor);

                this->config->add(
                    [config = std::move(config), accessor](const T & profile, ICommandSink & sink, Logger & logger)
                {
                    accessor.if_present(
                        profile,
                        [&](E value)
                    {
                        const auto entry = config.find(value);
                        if(entry != config.end())
                        {
                            for(const auto& action : entry->second) action(sink);
                        }
                    }
                    );
                }
                );
            }

            template <class E>
            static std::map<E, std::vector<sink_action_t>> read_enum_config(const YAML::Node& node, const google::protobuf::EnumDescriptor& descriptor)
            {
                std::map<E, std::vector<sink_action_t>> map;

                const auto add_entry = [&](const YAML::Node & node)
                {
                    const auto name = yaml::require_string(node, keys::name);
                    const auto value = descriptor.FindValueByName(name);
                    if(!value) throw Exception("Unknown enum value: ", name);
                    map[static_cast<E>(value->number())] = std::move(read_sink_actions(node));
                };

                yaml::foreach(yaml::require(node, keys::mapping), add_entry);

                return std::move(map);
            }

            static FloatConfig read_float_action(const YAML::Node& node)
            {
                return FloatConfig
                {
                    .enabled = yaml::require(node, keys::enabled).as<bool>(),
                    .index = yaml::require_integer<uint16_t>(node, keys::index),
                    .priority = yaml::require_integer<uint32_t>(node, keys::priority),
                    .scale = yaml::require(node, keys::scale).as<double>()
                };
            }

            static BinaryConfigPair read_binary_action_pair(const YAML::Node& node)
            {
                return BinaryConfigPair
                {
                    .when_true = std::move(read_sink_actions(yaml::require(node, keys::when_true))),
                    .when_false = std::move(read_sink_actions(yaml::require(node, keys::when_false)))
                };
            }

            static std::vector<sink_action_t> read_sink_actions(const YAML::Node& node)
            {
                std::vector<sink_action_t> actions;

                yaml::foreach(
                    yaml::require(node, keys::actions),
                    [&actions](const YAML::Node& node)
            {
                auto action = read_sink_action(node);
                    if(action)
                    {
                        actions.push_back(std::move(action));
                    }
                }
                );

                return std::move(actions);
            }

            static sink_action_t read_sink_action(const YAML::Node& node)
            {
                const auto type = RegisterOperationTypeMeta::from_string(yaml::require_string(node, keys::action));
                const auto index = yaml::require_integer<uint16_t>(node, keys::index);
                const auto priority = yaml::require_integer<uint32_t>(node, keys::priority);
                switch(type)
                {
                case(RegisterOperationType::clear_masked_bits):
                    return [ =, mask = yaml::require_integer<uint16_t>(node, keys::mask)](ICommandSink & sink)
                    {
                        return sink.modify_register(index, priority, operations::clear(mask));
                    };
                case(RegisterOperationType::set_masked_bits):
                    return [ =, mask = yaml::require_integer<uint16_t>(node, keys::mask)](ICommandSink & sink)
                    {
                        return sink.modify_register(index, priority, operations::set(mask));
                    };
                default:
                    return nullptr;
                }
            }


        };
    }
}

#endif
