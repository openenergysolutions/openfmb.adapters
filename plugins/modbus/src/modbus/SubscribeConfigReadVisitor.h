
#ifndef OPENFMB_ADAPTER_MODBUS_SUBSCRIBECONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_MODBUS_SUBSCRIBECONFIGREADVISITOR_H

#include <adapter-api/config/ConfigReadVisitorBase.h>
#include <adapter-api/ConfigStrings.h>

#include "ITransactionProcessor.h"
#include "ModifyRegisterTransaction.h"
#include "CommandConfigBuilder.h"
#include "BinaryControlAction.h"


namespace adapter
{
    namespace modbus
    {

        template <class T>
        class SubscribeConfigReadVisitor final : public ConfigReadVisitorBase<T>
        {
            struct FloatConfig
            {
                const uint16_t index;
                const uint32_t priority;
                const double scale;
            };

            struct BinaryConfig
            {
                const BinaryControlAction type;
                const uint16_t index;
                const uint16_t mask;
                const uint32_t priority;

                bool apply(ICommandSink& sink) const
                {
                    switch(type)
                    {
                    case(BinaryControlAction::clear_masked_bits):
                        sink.modify_register(index, priority, operations::clear(mask));
                        return true;
                    case(BinaryControlAction::set_masked_bits):
                        sink.modify_register(index, priority, operations::clear(mask));
                        return true;
                    default:
                        return false;
                    }
                }
            };

            struct BinaryConfigPair
            {
                BinaryConfig when_true;
                BinaryConfig when_false;

                bool apply(bool value, ICommandSink& sink) const
                {
                    return value ? when_true.apply(sink) : when_false.apply(sink);
                }
            };

            CommandConfigBuilder<T> builder;

        public:

            explicit SubscribeConfigReadVisitor(const YAML::Node& root) : ConfigReadVisitorBase<T>(root) {}

            void subscribe(const Logger& logger, IMessageBus& bus, std::shared_ptr<ITransactionProcessor> tx_processor)
            {
                throw NotImplemented(LOCATION);
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
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor <google::protobuf::FloatValue, T> accessor) override
            {
                const YAML::Node node = this->get_config_node(field_name);
                const auto enabled = yaml::require(node, keys::enabled).as<bool>();
                if(enabled)
                {
                    const auto action = read_float_action(node);

                    this->builder.add(
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
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor <switchmodule::SwitchCSG, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor <commonmodule::CheckConditions, T> accessor) override
            {
                // ignore
            }

            void handle(const std::string& field_name, Accessor <commonmodule::ScheduleCSG, T> accessor) override
            {
                const auto config = this->read_float_action(this->get_config_node(field_name));

                this->builder.add(
                    [config, accessor](const T & profile, ICommandSink & sink, Logger & logger)
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
                // ignore
            }

        private:

            FloatConfig read_float_action(const YAML::Node& node)
            {
                return FloatConfig
                {
                    .index = yaml::require_integer<uint16_t>(node, keys::index),
                    .priority = yaml::require_integer<uint32_t>(node, keys::priority),
                    .scale = yaml::require(node, keys::scale).as<double>()
                };
            }

            BinaryConfigPair read_binary_action_pair(const YAML::Node& node)
            {
                return BinaryConfigPair
                {
                    .when_true = read_binary_action(yaml::require(node, keys::when_true)),
                    .when_false = read_binary_action(yaml::require(node, keys::when_false))
                };
            }

            BinaryConfig read_binary_action(const YAML::Node& node)
            {
                return BinaryConfig
                {
                    .type = BinaryControlActionMeta::from_string(yaml::require_string(node, keys::action)),
                    .index = yaml::require_integer<uint16_t>(node, keys::index),
                    .mask = yaml::require_integer<uint16_t>(node, keys::mask),
                    .priority = yaml::require_integer<uint32_t>(node, keys::priority)
                };
            }


        };
    }
}

#endif
