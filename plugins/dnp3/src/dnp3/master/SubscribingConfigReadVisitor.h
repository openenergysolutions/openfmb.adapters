
#ifndef OPENFMB_ADAPTER_DNP3_MASTER_SUBSCRIBINGCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_DNP3_MASTER_SUBSCRIBINGCONFIGREADVISITOR_H

#include <adapter-util/ProfileInfo.h>
#include <adapter-util/config/SubscribingConfigReadVisitorBase.h>
#include <adapter-util/config/YAMLGetters.h>

#include "dnp3/master/ControlSubscriptionHandler.h"

namespace adapter {
namespace dnp3 {
    namespace master {

        // keep these helpers out of the template
        namespace read {

            std::vector<PrioritizedCommand>
            control_list(const YAML::Node& node, util::ICommandPrioritySource& priority_source)
            {
                std::vector<PrioritizedCommand> commands;

                const auto read_one = [&](const YAML::Node& node) {
                    const auto control = Control::read(node);

                    const auto action = [crob = control.crob, index = control.index](
                                            opendnp3::ICommandProcessor& processor, const opendnp3::CommandResultCallbackT& callback) {
                        processor.DirectOperate(crob, index, callback);
                    };

                    commands.emplace_back(action, priority_source.get_priority(node));
                };

                util::yaml::foreach (node, read_one);

                return commands;
            }

            std::function<void(ICommandSink& sink, float value)> single_analog(const YAML::Node& node, util::ICommandPrioritySource& priority_source)
            {
                const auto index = util::yaml::get::index(node);
                const auto scaling = util::yaml::get::scale(node);
                const auto priority = priority_source.get_priority(node);

                return [index, scaling, priority](ICommandSink& sink, float value) {
                    sink.add(PrioritizedCommand([index, scaling, value](opendnp3::ICommandProcessor& processor, const opendnp3::CommandResultCallbackT& callback) {
                        processor.DirectOperate(opendnp3::AnalogOutputInt32(static_cast<int32_t>(value * scaling)), index, callback);
                    }, priority));
                };
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

            void subscribe(api::Logger logger, api::ISubscribeOne<T>& bus,
                           std::shared_ptr<ICommandSequenceExecutor> executor)
            {
                if (configuration->is_empty()) {
                    throw api::Exception("command configuration is empty!");
                }

                logger.info("Subscribing to {} w/ mRID {}", T::descriptor()->name(), this->get_primary_mrid());

                bus.subscribe(
                    std::make_shared<ControlSubscriptionHandler<T>>(this->get_primary_mrid(), logger,
                                                                    this->configuration, std::move(executor)));
            }

            void handle(const std::string& field_name,
                        const util::getter_t<T, google::protobuf::RepeatedPtrField<commonmodule::ENG_ScheduleParameter>>& getter) override;

            void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, bool>& accessor) override;

            void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int32_t>& accessor) override;

            void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int64_t>& accessor) override;

            void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, float>& accessor) override;

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
            // ignored
        }

        template <class T>
        void SubscribingConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, int64_t>& accessor)
        {
            // ignored
        }

        template <class T>
        void SubscribingConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, float>& accessor)
        {
            // ignored
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

            std::map<commonmodule::ScheduleParameterKind, std::function<void(ICommandSink& sink, float value)>> action_map;
            util::yaml::foreach(node, [&](const YAML::Node& entry) {
                const auto name = util::yaml::require_string(entry, util::keys::scheduleParameterType);
                const auto value = commonmodule::ScheduleParameterKind_descriptor()->FindValueByName(name);
                if (!value) {
                    throw api::Exception("'", name, "' is not a valid value for enumeration ", commonmodule::ScheduleParameterKind_descriptor()->name());
                }

                const auto enum_value = static_cast<commonmodule::ScheduleParameterKind>(value->number());
                action_map[enum_value] = std::move(read::single_analog(entry, this->priorities));
            });

            this->configuration->add([getter, map = std::move(action_map)](const T& profile, api::Logger& logger, ICommandSink& sink) {
                const auto parameters = getter(profile);

                if (!parameters)
                    return;

                for (auto param : *parameters) {
                    auto entry = map.find(param.scheduleparametertype());
                    if (entry == map.end()) {
                        const auto value = commonmodule::ScheduleParameterKind_descriptor()->FindValueByNumber(param.scheduleparametertype());
                        if (value) {
                            logger.warn("No configured mapping for schedule parameter: {}", value->name());
                        }
                    } else {
                        // perform the action using the parameter's value
                        entry->second(sink, param.value());
                    }
                }
            });
        }
    }
}
}

#endif
