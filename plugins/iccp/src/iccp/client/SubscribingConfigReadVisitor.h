// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

//
// Created by cory on 2/9/21.
//

#ifndef OPENFMB_ADAPTER_ICCP_CLIENT_SUBSCRIBINGCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_ICCP_CLIENT_SUBSCRIBINGCONFIGREADVISITOR_H

#include <adapter-util/ProfileInfo.h>
#include <adapter-util/config/SubscribingConfigReadVisitorBase.h>
#include <adapter-util/config/YAMLGetters.h>
#include <adapter-util/schedule/ScheduleExecutor.h>
#include <adapter-api/Exception.h>

#include "ControlSubcriptionHandler.h"
#include "ITransactionProcessor.h"
#include "ConfigReader.h"
#include "iccp/ConfigStrings.h"
#include "iccp/generated/CommandPointType.h"

namespace adapter {
namespace iccp {
namespace client {
    namespace read {
                
        PrioritizedCommand single_control(const YAML::Node& node, util::ICommandPrioritySource& priority_source)
        {
            const auto action_type = util::yaml::require_enum<CommandPointType>(node);
            const auto priority = priority_source.get_priority(node);
            
            return PrioritizedCommand([]() {
            }, priority);
        }
        std::vector<PrioritizedCommand> control_list(const YAML::Node& node, util::ICommandPrioritySource& priority_source)
        {
            std::vector<PrioritizedCommand> commands;

            util::yaml::foreach(node, [&commands, &priority_source](const YAML::Node& subnode) {
                commands.push_back(single_control(subnode, priority_source));
            });

            return commands;
        }

        std::vector<std::function<void(ICommandSink& sink, double value)>> analog_list(const YAML::Node& node, util::ICommandPrioritySource& priority_source)
        {
            std::vector<std::function<void(ICommandSink& sink, double value)>> list;
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
                   std::shared_ptr<ITransactionProcessor> command_executor)
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
void SubscribingConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, bool>& accessor)
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
