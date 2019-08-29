

#ifndef OPENFMB_ADAPTER_COMMANDSINKACTIONS_H
#define OPENFMB_ADAPTER_COMMANDSINKACTIONS_H

#include <adapter-util/config/ICommandPrioritySource.h>
#include <adapter-util/config/YAMLGetters.h>

#include <ser4cpp/serialization/LittleEndian.h>

#include "DoubleWord.h"
#include "ICommandConfigBuilder.h"

#include "generated/BitwiseOperation.h"
#include "generated/OutputType.h"

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

        sink_action_t register_read_and_modify_action(const YAML::Node& node, util::ICommandPrioritySource& priority_source)
        {
            const auto operation = util::yaml::require_enum<BitwiseOperation>(node);
            const auto index = util::yaml::get::index(node);
            const auto priority = priority_source.get_priority(node);
            switch (operation) {
            case (BitwiseOperation::Value::clear_bit):
                return [=, bit = util::yaml::require_integer<uint8_t>(node, keys::bit)](ICommandSink& sink) {
                    return sink.modify_single_register(index, priority, Operations::clear_bit(bit));
                };
            case (BitwiseOperation::Value::set_bit):
                return [=, bit = util::yaml::require_integer<uint8_t>(node, keys::bit)](ICommandSink& sink) {
                    return sink.modify_single_register(index, priority, Operations::set_bit(bit));
                };
            case (BitwiseOperation::Value::clear_masked_bits):
                return [=, mask = util::yaml::require_integer<uint16_t>(node, keys::mask)](ICommandSink& sink) {
                    return sink.modify_single_register(index, priority, Operations::clear_mask(mask));
                };
            case (BitwiseOperation::Value::set_masked_bits):
                return [=, mask = util::yaml::require_integer<uint16_t>(node, keys::mask)](ICommandSink& sink) {
                    return sink.modify_single_register(index, priority, Operations::set_mask(mask));
                };
            default:
                throw api::Exception("Unsupported bitwise operation: ", BitwiseOperation::to_string(operation));
            }
        }

        std::vector<sink_action_t> command_actions(const YAML::Node& node, util::ICommandPrioritySource& priority_source)
        {
            std::vector<sink_action_t> actions;

            util::yaml::foreach (
                node,
                [&actions, &priority_source](const YAML::Node& node) {
                    const auto output_type = util::yaml::require_enum<OutputType>(node);
                    switch (output_type) {
                    case (OutputType::Value::none):
                        break;
                    case (OutputType::Value::read_and_modify_register):
                        actions.push_back(register_read_and_modify_action(node, priority_source));
                        break;
                    case (OutputType::Value::write_register): {
                        const auto index = util::yaml::get::index(node);
                        const auto priority = priority_source.get_priority(node);
                        const auto value = util::yaml::require_integer<uint16_t>(node, util::keys::value);
                        actions.push_back(
                            [index, priority, value](ICommandSink& sink) {
                                sink.write_single_register(index, priority, value);
                            });
                        break;
                    }
                    default:
                        throw api::Exception("Unsupported output type: ", OutputType::to_string(output_type));
                    }
                });

            return std::move(actions);
        }

        BinaryConfigPair binary_action_pair(const YAML::Node& node, util::ICommandPrioritySource& priority_source)
        {
            return BinaryConfigPair{
                std::move(
                    command_actions(util::yaml::require(node, util::keys::when_true), priority_source)),
                std::move(
                    command_actions(util::yaml::require(node, util::keys::when_false), priority_source))
            };
        }

        std::map<int, std::vector<sink_action_t>> enum_config(const YAML::Node& node, const google::protobuf::EnumDescriptor& descriptor, util::ICommandPrioritySource& priority_source)
        {
            std::map<int, std::vector<sink_action_t>> map;

            const auto add_entry = [&](const YAML::Node& node) {
                const auto name = util::yaml::require_string(node, util::keys::name);
                const auto value = descriptor.FindValueByName(name);
                if (!value)
                    throw api::Exception("Unknown enum value: ", name);
                const auto outputs = util::yaml::require(node, util::keys::outputs);
                map[value->number()] = std::move(command_actions(outputs, priority_source));
            };

            util::yaml::foreach (util::yaml::require(node, util::keys::mapping), add_entry);

            return std::move(map);
        }

        std::function<void(ICommandSink& sink, float value)> float_config(const YAML::Node& node, util::ICommandPrioritySource& priority_source)
        {
            const auto output_type = util::yaml::require_enum<OutputType>(node);
            switch (output_type) {
            case (OutputType::Value::none):
                return [](ICommandSink& sink, float value) {};
            case (OutputType::Value::write_register): {
                const auto index = util::yaml::get::index(node);
                const auto scale = util::yaml::get::scale(node);
                const auto priority = priority_source.get_priority(node);
                return [index, scale, priority](ICommandSink& sink, float value) {
                    sink.write_single_register(index, priority, static_cast<uint16_t>(value * scale));
                };
            }
            case (OutputType::Value::write_two_registers): {
                const auto upper_index = util::yaml::require_integer<uint16_t>(node, keys::upper_index);
                const auto lower_index = util::yaml::require_integer<uint16_t>(node, keys::lower_index);
                const auto scale = util::yaml::get::scale(node);
                const auto priority = priority_source.get_priority(node);
                return [upper_index, lower_index, scale, priority](ICommandSink& sink, float value) {
                    const auto dword = DoubleWord::get(static_cast<uint32_t>(value * scale));
                    sink.write_single_register(lower_index, priority, dword.lower);
                    sink.write_single_register(upper_index, priority, dword.upper);
                };
            }
            case (OutputType::Value::write_multiple_registers_float32): {
                const auto upper_index = util::yaml::require_integer<uint16_t>(node, keys::upper_index);
                const auto lower_index = util::yaml::require_integer<uint16_t>(node, keys::lower_index);
                const auto scale = util::yaml::get::scale(node);
                const auto priority = priority_source.get_priority(node);
                return [upper_index, lower_index, scale, priority](ICommandSink& sink, float value) {
                    const auto dword = DoubleWord::get(ser4cpp::SingleFloat::to_uint32(value * scale));
                    sink.write_single_register(lower_index, priority, dword.lower);
                    sink.write_single_register(upper_index, priority, dword.upper);
                };
            }
            default:
                throw api::Exception("unsupported output type for float: ", OutputType::to_string(output_type));
            }
        }

        using schedule_parameter_map_t = std::map<commonmodule::ScheduleParameterKind, std::function<void(ICommandSink& sink, float value)>>;

        schedule_parameter_map_t schedule_parameter_configuration(const YAML::Node& node, util::ICommandPrioritySource& priority_source)
        {
            // build up this map
            schedule_parameter_map_t action_map;

            // loop over all the entries in the sequence, building up the action map
            const auto add_to_action_map = [&](const YAML::Node& entry) {
                const auto name = util::yaml::require_string(entry, util::keys::scheduleParameterType);
                const auto value = commonmodule::ScheduleParameterKind_descriptor()->FindValueByName(name);
                if (!value) {
                    throw api::Exception("'", name, "' is not a valid value for enumeration ", commonmodule::ScheduleParameterKind_descriptor()->name());
                }

                const auto enum_value = static_cast<commonmodule::ScheduleParameterKind>(value->number());
                action_map[enum_value] = float_config(entry, priority_source);
            };

            util::yaml::foreach (node, add_to_action_map);

            return std::move(action_map);
        }
    }
}
}

#endif //OPENFMB_ADAPTER_COMMANDSINKACTIONS_H
