
#ifndef OPENFMB_ADAPTER_MODBUS_SUBSCRIBECONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_MODBUS_SUBSCRIBECONFIGREADVISITOR_H

#include <adapter-api/ConfigStrings.h>
#include <adapter-api/config/SubscribingConfigReadVisitorBase.h>

#include "CommandConfiguration.h"
#include "CommandSubscriptionHandler.h"

#include "CommandSinkActions.h"
#include "ITransactionProcessor.h"
#include "ModifyRegisterTransaction.h"
#include "generated/OutputType.h"
#include "CommandOptions.h"

namespace adapter {
namespace modbus {

    template <class T>
    class SubscribeConfigReadVisitor final : public SubscribingConfigReadVisitorBase<T> {

        const std::shared_ptr<CommandConfiguration<T>> config = std::make_shared<CommandConfiguration<T>>();
        const ICommandPrioritySource& priority_source;

    public:
        SubscribeConfigReadVisitor(const YAML::Node& root, const ICommandPrioritySource& priority_source);

        void subscribe(const Logger& logger, IMessageBus& bus, std::shared_ptr<ITransactionProcessor> tx_processor);

        void handle(const std::string &field_name, const getter_t<T, repeated_function_parameter_t>& getter) override;

    protected:
        // implement pure virtual methods from base class

        void handle_mapped_field(const YAML::Node& node, const accessor_t<T, bool>& accessor) override;

        void handle_mapped_field(const YAML::Node& node, const accessor_t<T, int32_t>& accessor) override;

        void handle_mapped_field(const YAML::Node& node, const accessor_t<T, int64_t>& accessor) override;

        void handle_mapped_field(const YAML::Node& node, const accessor_t<T, float>& accessor) override;

        void handle_mapped_field(const YAML::Node& node, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor) override;
    };

    template <class T>
    SubscribeConfigReadVisitor<T>::SubscribeConfigReadVisitor(const YAML::Node& root, const ICommandPrioritySource& priority_source)
        : SubscribingConfigReadVisitorBase<T>(root)
        , priority_source(priority_source)
    {
    }

    template <class T>
    void SubscribeConfigReadVisitor<T>::subscribe(const Logger& logger, IMessageBus& bus, std::shared_ptr<ITransactionProcessor> tx_processor)
    {

        bus.subscribe(
            std::make_shared<CommandSubscriptionHandler<T>>(logger, this->get_primary_mrid(), this->config, std::move(tx_processor)));
    }

    template <class T>
    void SubscribeConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node, const accessor_t<T, bool>& accessor)
    {
        const auto binary_config = read::binary_action_pair(node, this->priority_source);

        if (!binary_config.is_empty()) {
            this->config->add(
                [binary_config, accessor](const T& profile, ICommandSink& sink, Logger& logger) {
                    accessor->if_present(
                        profile,
                        [&](const bool& value) {
                            binary_config.apply(value, sink);
                        });
                });
        }
    }

    template <class T>
    void SubscribeConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node, const accessor_t<T, int32_t>& accessor)
    {
        // ignored
    }

    template <class T>
    void SubscribeConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node, const accessor_t<T, int64_t>& accessor)
    {
        // ignored
    }

    template <class T>
    void SubscribeConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node, const accessor_t<T, float>& accessor)
    {
        const auto output_type = yaml::require_enum<OutputType>(node);
        switch (output_type) {
        case (OutputType::Value::none):
            break;
        case (OutputType::Value::write_register): {
            const auto index = ::adapter::yaml::get::index(node);
            const auto scale = ::adapter::yaml::get::scale(node);
            const auto priority = this->priority_source.get_priority(CommandType::Value::write_single_register, index);
            this->config->add(
                [index, scale, priority, accessor](const T& profile, ICommandSink& sink, Logger& logger) {
                    accessor->if_present(
                        profile,
                        [&](float value) {
                            sink.write_single_register(index, priority, static_cast<uint16_t>(value * scale));
                        });
                });
            break;
        }
        default:
            throw Exception("unsupported output type for float: ", OutputType::to_string(output_type));
        }
    }

    template <class T>
    void SubscribeConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor)
    {
        auto config = read::enum_config(node, *descriptor, this->priority_source);

        this->config->add(
            [config = std::move(config), accessor](const T& profile, ICommandSink& sink, Logger& logger) {
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

    template<class T>
    void SubscribeConfigReadVisitor<T>::handle(const std::string &field_name, const getter_t<T, repeated_function_parameter_t>& getter) {
        const auto node = this->get_config_node(field_name);

        // build up this map
        std::map<essmodule::ESSFunctionParameterKind, std::function<void (ICommandSink& sink, int32_t value)>> action_map;

        // loop over all the entries in the sequence, building up the action map
        const auto add_to_action_map = [&](const YAML::Node& entry)
        {
            const auto name = yaml::require_string(entry, ::adapter::keys::name);
            const auto value = essmodule::ESSFunctionParameterKind_descriptor()->FindValueByName(name);
            if(!value)
            {
                throw Exception("'", name, "' is not a valid value for enumeration ", essmodule::ESSFunctionKind_descriptor()->name());
            }

            const auto index = yaml::require_integer<uint16_t>(entry, ::adapter::keys::index);
            const auto scale = yaml::require(entry, ::adapter::keys::scale).as<float>();
            const auto priority = this->priority_source.get_priority(CommandType::Value::write_single_register, index);

            action_map[static_cast<essmodule::ESSFunctionParameterKind>(value->number())] = [index, scale, priority](ICommandSink& sink, int32_t value)
            {
                sink.write_single_register(index, priority, static_cast<uint16_t>(value*scale));
            };
        };

        yaml::foreach(node, add_to_action_map);

        this->config->add(
                [getter, map = std::move(action_map)](const T& profile, ICommandSink& sink, Logger& logger) {
                    const auto parameters = getter(profile);
                    if(parameters)
                    {
                        for(auto param : *parameters)
                        {
                            auto entry = map.find(param.name());
                            if(entry == map.end())
                            {
                                const auto value = essmodule::ESSFunctionParameterKind_descriptor()->FindValueByNumber(param.name());
                                if(value)
                                {
                                    logger.warn("No configured mapping for function parameter: {}", value->name());
                                }
                            }
                            else
                            {
                                // perform the action using the parameter's value
                                entry->second(sink, param.value());
                            }
                        }
                    }
                }
        );
    };

}
}

#endif
