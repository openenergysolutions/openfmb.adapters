
#ifndef OPENFMB_ADAPTER_MODBUS_SUBSCRIBECONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_MODBUS_SUBSCRIBECONFIGREADVISITOR_H

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/config/SubscribingConfigReadVisitorBase.h>

#include "CommandConfiguration.h"
#include "CommandSubscriptionHandler.h"

#include "CommandOptions.h"
#include "CommandSinkActions.h"
#include "DoubleWord.h"
#include "ITransactionProcessor.h"
#include "ModifyRegisterTransaction.h"
#include "generated/OutputType.h"

#include <map>

namespace adapter {
namespace modbus {

    template <class T>
    class SubscribeConfigReadVisitor final : public util::SubscribingConfigReadVisitorBase<T> {

        const std::shared_ptr<CommandConfiguration<T>> config = std::make_shared<CommandConfiguration<T>>();
        util::ICommandPrioritySource& priority_source;

    public:
        SubscribeConfigReadVisitor(const YAML::Node& root, util::ICommandPrioritySource& priority_source);

        void subscribe(const api::Logger& logger, api::IMessageBus& bus, std::shared_ptr<ITransactionProcessor> tx_processor);

        void handle(const std::string& field_name, const util::getter_t<T, util::repeated_schedule_parameter_t>& getter) override;

    protected:
        // implement pure virtual methods from base class

        void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, bool>& accessor) override;

        void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int32_t>& accessor) override;

        void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int64_t>& accessor) override;

        void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, float>& accessor) override;

        void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor) override;
    };

    template <class T>
    SubscribeConfigReadVisitor<T>::SubscribeConfigReadVisitor(const YAML::Node& root, util::ICommandPrioritySource& priority_source)
        : util::SubscribingConfigReadVisitorBase<T>(root)
        , priority_source(priority_source)
    {
    }

    template <class T>
    void SubscribeConfigReadVisitor<T>::subscribe(const api::Logger& logger, api::IMessageBus& bus, std::shared_ptr<ITransactionProcessor> tx_processor)
    {

        bus.subscribe(
            std::make_shared<CommandSubscriptionHandler<T>>(logger, this->get_primary_mrid(), this->config, std::move(tx_processor)));
    }

    template <class T>
    void SubscribeConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, bool>& accessor)
    {
        const auto binary_config = read::binary_action_pair(node, this->priority_source);

        if (!binary_config.is_empty()) {
            this->config->add(
                [binary_config, accessor](const T& profile, ICommandSink& sink, api::Logger& logger) {
                    accessor->if_present(
                        profile,
                        [&](const bool& value) {
                            binary_config.apply(value, sink);
                        });
                });
        }
    }

    template <class T>
    void SubscribeConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int32_t>& accessor)
    {
        throw api::Exception("int32_t output mappings not supported");
    }

    template <class T>
    void SubscribeConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int64_t>& accessor)
    {
        throw api::Exception("int64_t output mappings not supported");
    }

    template <class T>
    void SubscribeConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, float>& accessor)
    {
        const auto output_type = util::yaml::require_enum<OutputType>(node);
        switch (output_type) {
        case (OutputType::Value::none):
            break;
        case (OutputType::Value::write_register): {
            const auto index = util::yaml::get::index(node);
            const auto scale = util::yaml::get::scale(node);
            const auto priority = this->priority_source.get_priority(node);
            this->config->add(
                [index, scale, priority, accessor](const T& profile, ICommandSink& sink, api::Logger& logger) {
                    accessor->if_present(
                        profile,
                        [&](float value) {
                            sink.write_single_register(index, priority, static_cast<uint16_t>(value * scale));
                        });
                });
            break;
        }
        case (OutputType::Value::write_two_registers): {
            const auto upper_index = util::yaml::require_integer<uint16_t>(node, keys::upper_index);
            const auto lower_index = util::yaml::require_integer<uint16_t>(node, keys::lower_index);
            const auto scale = util::yaml::get::scale(node);
            const auto priority = this->priority_source.get_priority(node);
            this->config->add(
                [upper_index, lower_index, scale, priority, accessor](const T& profile, ICommandSink& sink, api::Logger& logger) {
                    accessor->if_present(
                        profile,
                        [&](float value) {
                            const auto dword = DoubleWord::get(static_cast<uint32_t>(value * scale));
                            sink.write_single_register(lower_index, priority, dword.lower);
                            sink.write_single_register(upper_index, priority, dword.upper);
                        });
                });
            break;
        }
        default:
            throw api::Exception("unsupported output type for float: ", OutputType::to_string(output_type));
        }
    }

    template <class T>
    void SubscribeConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor)
    {
        auto config = read::enum_config(node, *descriptor, this->priority_source);

        this->config->add(
            [config = std::move(config), accessor](const T& profile, ICommandSink& sink, api::Logger& logger) {
                accessor->if_present(
                    profile,
                    [&](int value) {
                        const auto entry = config.find(value);
                        if (entry != config.end()) {
                            for (const auto& action : entry->second)
                                action(sink);
                        }
                    });
            });
    }

    template <class T>
    void SubscribeConfigReadVisitor<T>::handle(const std::string& field_name, const util::getter_t<T, util::repeated_schedule_parameter_t>& getter)
    {
        const auto node = this->get_config_node(field_name);

        this->config->add(
            [getter, map = read::schedule_parameter_configuration(node, this->priority_source)](const T& profile, ICommandSink& sink, api::Logger& logger) {
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

#endif
