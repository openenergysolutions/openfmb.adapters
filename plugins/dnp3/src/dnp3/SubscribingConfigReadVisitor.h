
#ifndef OPENFMB_ADAPTER_DNP3_SUBSCRIBINGCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_DNP3_SUBSCRIBINGCONFIGREADVISITOR_H

#include <adapter-api/config/ConfigReadVisitorBase.h>
#include <adapter-api/config/MessageInformation.h>

#include "CommandConfiguration.h"
#include "ControlCodeMeta.h"

namespace adapter
{
    namespace dnp3
    {
        template <class T>
        class SubscribingConfigReadVisitor final : public ConfigReadVisitorBase<T>
        {
            const std::shared_ptr<CommandConfiguration<T>> configuration = std::make_shared<CommandConfiguration<T>>();
            std::string mRID;

            class Subscriber : public ISubscriber<T>
            {
                const std::string mRID;
                Logger logger;
                const std::shared_ptr<CommandConfiguration<T>> configuration;

            public:

                Subscriber(std::string mRID, Logger logger, std::shared_ptr<CommandConfiguration<T>> configuration) :
                    mRID(std::move(mRID)),
                    logger(std::move(logger)),
                    configuration(std::move(configuration))
                {}

            protected:
                bool matches(const T& message) const override
                {
                    return this->mRID == get_conducting_equip<T>(message).mrid();
                }

            protected:
                void process(const T& message) override
                {
                    const auto commands = this->configuration->get_actions(message);
                    if(commands.empty())
                    {
                        logger.warn("message of type '", T::descriptor()->name(), "' did not map to any commands");
                    }
                    else
                    {
                        // TODO  - forward the commands somewhere for execution
                        logger.info("executing ", commands.size(), " commands!");
                    }
                }
            };

        public:

            explicit SubscribingConfigReadVisitor(const YAML::Node& root) : ConfigReadVisitorBase<T>(root)
            {}

            void subscribe(Logger logger, message_bus_t bus)
            {
                if(configuration->is_empty())
                {
                    throw Exception("command configuration is empty!");
                }

                logger.info("Subscribing to {} w/ mRID {}", T::descriptor()->name(), this->mRID);

                bus->subscribe(
                    std::make_shared<Subscriber>(this->mRID, std::move(logger), this->configuration)
                );
            }

            // --- intentionally not implemented ---

            void handle(const std::string& field_name, Accessor<commonmodule::MV, T> accessor) override
            {
                throw Exception("not implemented");
            }

            void handle(const std::string& field_name, Accessor<commonmodule::CMV, T> accessor) override
            {
                throw Exception("not implemented");
            }

            void handle(const std::string& field_name, Accessor<commonmodule::BCR, T> accessor) override
            {
                throw Exception("not implemented");
            }

            void handle(const std::string& field_name, Accessor<commonmodule::StatusDPS, T> accessor) override
            {
                throw Exception("not implemented");
            }

            // --- values to handle ---

            void handle(const std::string& field_name, Accessor<commonmodule::ControlValue, T> accessor) override
            {

            }

            void handle(const std::string& field_name, Accessor<commonmodule::CheckConditions, T> accessor) override
            {
                const auto node = this->get_config_node(field_name);
                {
                    const auto interlock = yaml::require(node, ::adapter::keys::interlockCheck);
                    const auto when_true = read_control_list(yaml::require(interlock, keys::when_true_execute));
                    const auto when_false = read_control_list(yaml::require(interlock, keys::when_false_execute));

                    const auto builder = [ = ](const T & profile, const command_action_sink_t& add_action)
                    {
                        const auto conditions = accessor.get(profile);
                        if(!conditions) return;
                        if(conditions->has_interlockcheck())
                        {
                            if(conditions->interlockcheck().value())
                            {
                                for(const auto& action : when_true) add_action(action);
                            }
                            else
                            {
                                for(const auto& action : when_false) add_action(action);
                            }
                        }
                    };

                    this->configuration->add(builder);
                }
            }

            void handle(const std::string& field_name, Accessor<switchmodule::SwitchCSG, T> accessor) override
            {

            }

            void handle(const std::string& field_name, Accessor<commonmodule::ConductingEquipment, T> accessor) override
            {
                this->mRID = yaml::require_uuid(this->get_config_node(field_name), ::adapter::keys::mRID);
            }

            // --- ignored ---

            void handle(const std::string& field_name, Accessor<commonmodule::IdentifiedObject, T> accessor) override {}

            void handle(const std::string& field_name, Accessor<commonmodule::MessageInfo, T> accessor) override {}

        private:

            struct Control
            {
                uint32_t priority;
                uint16_t index;
                opendnp3::ControlRelayOutputBlock crob;
            };

            static Control read_control(const YAML::Node& node)
            {
                return Control
                {
                    .priority = yaml::require_integer<uint32_t>(node, keys::priority),
                    .index = yaml::require_integer<uint16_t>(node, keys::index),
                    .crob = read_g12v1(yaml::require(node, keys::g12v1))
                };
            }

            static opendnp3::ControlRelayOutputBlock read_g12v1(const YAML::Node& node)
            {
                return opendnp3::ControlRelayOutputBlock(
                           ControlCodeMeta::from_string(yaml::require_string(node, keys::control_code)),
                           yaml::require_integer<uint8_t>(node, keys::count),
                           yaml::require_integer<uint32_t>(node, keys::on_time_ms),
                           yaml::require_integer<uint32_t>(node, keys::off_time_ms)
                       );
            }

            static std::vector<CommandAction> read_control_list(const YAML::Node& node)
            {
                std::vector<CommandAction> actions;

                const auto read_one = [&](const YAML::Node & node)
                {
                    const auto control = read_control(node);

                    const auto action = [crob = control.crob, index = control.index](opendnp3::ICommandProcessor & processor, const opendnp3::CommandCallbackT & callback)
                    {
                        processor.DirectOperate(crob, index, callback);
                    };

                    actions.emplace_back(control.priority, action);
                };

                yaml::foreach(node, read_one);

                return actions;
            }

        };

    }
}

#endif
