

#ifndef OPENFMB_ADAPTER_COMMANDSINKACTIONS_H
#define OPENFMB_ADAPTER_COMMANDSINKACTIONS_H

#include "ICommandConfigBuilder.h"
#include "ICommandPrioritySource.h"

#include "generated/OutputType.h"
#include "generated/BitwiseOperation.h"

#include <yaml-cpp/yaml.h>

#include <functional>

namespace adapter {
namespace modbus {
    using sink_action_t = std::function<void(ICommandSink&)>;

    class BinaryConfigPair {
        std::vector<sink_action_t> when_true;
        std::vector<sink_action_t> when_false;

    public:
        BinaryConfigPair(std::vector<sink_action_t> when_true, std::vector<sink_action_t> when_false)
            : when_true(std::move(when_true))
            , when_false(std::move(when_false))
        {
        }

        bool is_empty() const
        {
            return when_true.empty() && when_false.empty();
        }

        bool apply(bool value, ICommandSink& sink) const
        {
            auto ret = false;
            for (const auto& action : value ? when_true : when_false) {

                action(sink);
                ret = true;
            }
            return ret;
        }
    };

    namespace read {

        sink_action_t register_read_modify_action(const YAML::Node& node, const ICommandPrioritySource& priority_source)
        {
            const auto operation = yaml::require_enum<BitwiseOperation>(node);
            const auto index = ::adapter::yaml::get::index(node);
            const auto priority = priority_source.get_priority(CommandType::Value::write_single_register, index);
            switch (operation) {
            case (BitwiseOperation::Value::clear_masked_bits):
                return [=, mask = yaml::require_integer<uint16_t>(node, keys::mask)](ICommandSink& sink) {
                    return sink.modify_single_register(index, priority, operations::clear(mask));
                };
            case (BitwiseOperation::Value::set_masked_bits):
                return [=, mask = yaml::require_integer<uint16_t>(node, keys::mask)](ICommandSink& sink) {
                    return sink.modify_single_register(index, priority, operations::set(mask));
                };
            default:
                throw Exception("Unsupported bitwise operation: ", BitwiseOperation::to_string(operation));
            }
        }

        std::vector<sink_action_t> sink_actions(const YAML::Node& node, const ICommandPrioritySource& priority_source)
        {
            std::vector<sink_action_t> actions;

            yaml::foreach (
                yaml::require(node, ::adapter::keys::outputs),
                [&actions, &priority_source](const YAML::Node& node) {
                    const auto output_type = yaml::require_enum<OutputType>(node);
                    switch (output_type) {
                    case (OutputType::Value::none):
                        break;
                    case (OutputType::Value::read_and_modify_register):
                        actions.push_back(register_read_modify_action(node, priority_source));
                        break;
                    case (OutputType::Value::write_register): {
                        const auto index = ::adapter::yaml::get::index(node);
                        const auto priority = priority_source.get_priority(CommandType::Value::write_single_register, index);
                        const auto value = yaml::require_integer<uint16_t>(node, ::adapter::keys::value);
                        return [index, priority, value](ICommandSink &sink) {
                            sink.write_single_register(index, priority, value);
                        };
                    }
                    default:
                        throw Exception("Unsupported output type: ", OutputType::to_string(output_type));
                    }
                });

            return std::move(actions);
        }

        BinaryConfigPair binary_action_pair(const YAML::Node& node, const ICommandPrioritySource& priority_source)
        {
            return BinaryConfigPair{
                std::move(
                    sink_actions(yaml::require(node, ::adapter::keys::when_true), priority_source)),
                std::move(
                    sink_actions(yaml::require(node, ::adapter::keys::when_false), priority_source))
            };
        }

        std::map<int, std::vector<sink_action_t>> enum_config(const YAML::Node& node, const google::protobuf::EnumDescriptor& descriptor, const ICommandPrioritySource& priority_source)
        {
            std::map<int, std::vector<sink_action_t>> map;

            const auto add_entry = [&](const YAML::Node& node) {
                const auto name = yaml::require_string(node, ::adapter::keys::name);
                const auto value = descriptor.FindValueByName(name);
                if (!value)
                    throw Exception("Unknown enum value: ", name);
                map[value->number()] = std::move(sink_actions(node, priority_source));
            };

            yaml::foreach (yaml::require(node, ::adapter::keys::mapping), add_entry);

            return std::move(map);
        }
    }
}
}

#endif //OPENFMB_ADAPTER_COMMANDSINKACTIONS_H
