

#ifndef OPENFMB_ADAPTER_COMMANDSINKACTIONS_H
#define OPENFMB_ADAPTER_COMMANDSINKACTIONS_H

#include "ICommandConfigBuilder.h"
#include "ICommandPrioritySource.h"

#include "generated/RegisterOperation.h"
#include "generated/OutputType.h"

#include <yaml-cpp/yaml.h>

#include <functional>

namespace adapter
{
    namespace modbus
    {
        using sink_action_t = std::function<void (ICommandSink&)>;

        class BinaryConfigPair
        {
            std::vector<sink_action_t> when_true;
            std::vector<sink_action_t> when_false;

        public:
            BinaryConfigPair(std::vector<sink_action_t> when_true, std::vector<sink_action_t> when_false)
                    : when_true(std::move(when_true))
                    , when_false(std::move(when_false))
            {}

            bool is_empty() const
            {
                return when_true.empty() && when_false.empty();
            }

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

        namespace read
        {
            sink_action_t single_register_command_sink_action(const YAML::Node& node, const ICommandPrioritySource& priority_source)
            {
                const auto operation = yaml::require_enum<RegisterOperation>(node);
                const auto index = ::adapter::yaml::get::index(node);
                const auto priority = priority_source.get_priority(CommandType::Value::write_single_register, index);
                switch(operation)
                {
                    case(RegisterOperation::Value::clear_masked_bits):
                        return [ =, mask = yaml::require_integer<uint16_t>(node, keys::mask)](ICommandSink & sink)
                        {
                            return sink.modify_register(index, priority, operations::clear(mask));
                        };
                    case(RegisterOperation::Value::set_masked_bits):
                        return [ =, mask = yaml::require_integer<uint16_t>(node, keys::mask)](ICommandSink & sink)
                        {
                            return sink.modify_register(index, priority, operations::set(mask));
                        };
                    case(RegisterOperation::Value::write_value):
                        return [ =, value = yaml::require_integer<uint16_t>(node, ::adapter::keys::value)](ICommandSink & sink)
                        {
                            return sink.set_register(index, priority, value);
                        };
                    default:
                        throw Exception("Unsupported register operation type: ", RegisterOperation::to_string(operation));
                }
            }

            std::vector<sink_action_t> sink_actions(const YAML::Node& node, const ICommandPrioritySource& priority_source)
            {
                std::vector<sink_action_t> actions;

                yaml::foreach(
                        yaml::require(node, ::adapter::keys::outputs),
                        [&actions, &priority_source](const YAML::Node& node)
                        {
                            const auto output_type = yaml::require_enum<OutputType>(node);
                            switch(output_type)
                            {
                                case(OutputType::Value::none):
                                    break;
                                case(OutputType::Value::write_single_register):
                                    actions.push_back(single_register_command_sink_action(node, priority_source));
                                    break;
                                default:
                                    throw Exception("Unsupported output type: ", OutputType::to_string(output_type));
                            }
                        }
                );

                return std::move(actions);
            }

            static BinaryConfigPair binary_action_pair(const YAML::Node& node, const ICommandPrioritySource& priority_source)
            {
                return BinaryConfigPair
                        {
                                std::move(
                                        sink_actions(yaml::require(node, ::adapter::keys::when_true), priority_source)
                                ),
                                std::move(
                                        sink_actions(yaml::require(node, ::adapter::keys::when_false), priority_source)
                                )
                        };
            }
        }

    }
}

#endif //OPENFMB_ADAPTER_COMMANDSINKACTIONS_H
