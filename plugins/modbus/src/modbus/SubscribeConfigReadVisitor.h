
#ifndef OPENFMB_ADAPTER_MODBUS_SUBSCRIBECONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_MODBUS_SUBSCRIBECONFIGREADVISITOR_H

#include <adapter-api/config/ConfigReadVisitorBase.h>
#include <adapter-api/ConfigStrings.h>

#include "ITransactionProcessor.h"
#include "ModifyRegisterTransaction.h"
#include "CommandConfiguration.h"
#include "BinaryControlAction.h"
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
                uint16_t index;
                uint32_t priority;
                double scale;
            };

            struct RegisterMaskAction
            {
                BinaryControlAction type;
                uint16_t index;
                uint16_t mask;
                uint32_t priority;

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
                RegisterMaskAction when_true;
                RegisterMaskAction when_false;

                bool apply(bool value, ICommandSink& sink) const
                {
                    return value ? when_true.apply(sink) : when_false.apply(sink);
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
                        [config, accessor](const T & profile, ICommandSink& sink, Logger& logger)
                        {
                            accessor.if_present(
                                    profile,
                                    [&](const commonmodule::ControlDPC& value)
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
                const auto node = this->get_config_node(field_name);
                auto config = this->read_enum_config<commonmodule::StateKind>(node, *commonmodule::StateKind_descriptor());

                this->config->add(
                        [config = std::move(config), accessor](const T& profile, ICommandSink& sink, Logger & logger)
                        {
                            accessor.if_present(
                                    profile,
                                    [&](commonmodule::StateKind value)
                                    {
                                        const auto entry = config.find(value);
                                        if(entry != config.end())
                                        {
                                            entry->second.apply(sink);
                                        }
                                    }
                            );
                        }
                );
            }

            void handle(const std::string& field_name, Accessor <switchmodule::SwitchCSG, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor <commonmodule::CheckConditions, T> accessor) override
            {

            }

            void handle(const std::string& field_name, Accessor <commonmodule::ScheduleCSG, T> accessor) override
            {
                const auto config = this->read_float_action(this->get_config_node(field_name));

                this->config->add(
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
                this->mRID = yaml::require_uuid(this->get_config_node(field_name), ::adapter::keys::mRID);
            }

        private:

            template <class E>
            std::map<E, RegisterMaskAction> read_enum_config(const YAML::Node& node, const google::protobuf::EnumDescriptor& descriptor)
            {
                std::map<E, RegisterMaskAction> map;

                const auto add_entry = [&](const YAML::Node& node)
                {
                    const auto name = yaml::require_string(node, keys::name);
                    const auto value = descriptor.FindValueByName(name);
                    if(!value) throw Exception("Unknown enum value: ", name);
                    map[static_cast<E>(value->number())] = this->read_register_mask_action(node);
                };

                yaml::foreach(yaml::require(node, keys::mapping), add_entry);

                return std::move(map);
            }

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
                    .when_true = read_register_mask_action(yaml::require(node, keys::when_true)),
                    .when_false = read_register_mask_action(yaml::require(node, keys::when_false))
                };
            }

            RegisterMaskAction read_register_mask_action(const YAML::Node& node)
            {
                return RegisterMaskAction
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
