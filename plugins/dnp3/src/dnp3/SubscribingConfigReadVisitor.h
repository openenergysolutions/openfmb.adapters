
#ifndef OPENFMB_ADAPTER_DNP3_SUBSCRIBINGCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_DNP3_SUBSCRIBINGCONFIGREADVISITOR_H

#include <adapter-api/ProfileInfo.h>
#include <adapter-api/config/ConfigReadVisitorBase.h>

#include "ControlSubscriptionHandler.h"
#include "ICommandPrioritySource.h"

namespace adapter {
namespace dnp3 {

    template <class T>
    class SubscribingConfigReadVisitor final : public ConfigReadVisitorBase<T> {

        const std::shared_ptr<CommandConfiguration<T>> configuration = std::make_shared<CommandConfiguration<T>>();
        std::string mRID;
        ICommandPrioritySource& priority;

    public:
        explicit SubscribingConfigReadVisitor(const YAML::Node& root, ICommandPrioritySource& priority)
            : ConfigReadVisitorBase<T>(root)
            , priority(priority)
        {
        }

        void subscribe(Logger logger, IMessageBus& bus, std::shared_ptr<ICommandSequenceExecutor> executor)
        {
            if (configuration->is_empty()) {
                throw Exception("command configuration is empty!");
            }

            if(this->mRID.empty()) {
                throw Exception("primary mRID for control profile was not specified");
            }

            logger.info("Subscribing to {} w/ mRID {}", T::descriptor()->name(), this->mRID);

            bus.subscribe(
                std::make_shared<ControlSubscriptionHandler<T>>(this->mRID, logger, this->configuration, std::move(executor)));
        }

        void handle(const std::string& field_name, const accessor_t<T, bool>& accessor) override;

        void handle(const std::string& field_name, const accessor_t<T, int>& accessor) override;

        void handle(const std::string& field_name, const accessor_t<T, long>& accessor) override;

        void handle(const std::string& field_name, const accessor_t<T, float>& accessor) override;

        void handle(const std::string& field_name, const accessor_t<T, std::string>& accessor) override;

        void handle(const std::string& field_name, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor) override;

        void handle(const std::string& field_name, const message_accessor_t<T, commonmodule::Quality>& accessor) override;

        void handle(const std::string& field_name, const message_accessor_t<T, commonmodule::Timestamp>& accessor) override;

        void handle(const std::string& field_name, const message_accessor_t<T, commonmodule::ControlTimestamp>& accessor) override;

    private:
        // TODO - move this outside the template to a helper class
        std::vector<PrioritizedCommand> read_control_list(const YAML::Node& node)
        {
            std::vector<PrioritizedCommand> commands;

            const auto read_one = [&](const YAML::Node& node) {
                const auto control = Control::read(node);

                const auto action = [crob = control.crob, index = control.index](
                                        opendnp3::ICommandProcessor& processor, const opendnp3::CommandCallbackT& callback) {
                    processor.DirectOperate(crob, index, callback);
                };

                commands.emplace_back(action, this->priority.get_binary_output_priority(control.index));
            };

            yaml::foreach (node, read_one);

            return commands;
        }
    };

    template <class T>
    void SubscribingConfigReadVisitor<T>::handle(const std::string& field_name, const accessor_t<T, bool>& accessor)
    {
        // only do anything for mapped fields ATM
        if (fields::get_bool_type(field_name, this->path) != BoolFieldType::Value::mapped)
            return;

        const auto node = this->get_config_node(field_name);

        const auto when_true = read_control_list(yaml::require(node, keys::when_true));
        const auto when_false = read_control_list(yaml::require(node, keys::when_false));

        const auto builder = [=](const T& profile, Logger& logger, ICommandSink& sink) {
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
    void SubscribingConfigReadVisitor<T>::handle(const std::string& field_name, const accessor_t<T, int>& accessor)
    {
        // ignored
    }

    template <class T>
    void SubscribingConfigReadVisitor<T>::handle(const std::string& field_name, const accessor_t<T, long>& accessor)
    {
        // ignored
    }

    template <class T>
    void SubscribingConfigReadVisitor<T>::handle(const std::string& field_name, const accessor_t<T, float>& accessor)
    {
        // ignored
    }

    template <class T>
    void SubscribingConfigReadVisitor<T>::handle(const std::string& field_name, const accessor_t<T, std::string>& accessor)
    {
        const auto type = fields::get_string_type(field_name, this->path);

        if(type == StringFieldType::Value::primary_uuid)
        {
            if(!this->mRID.empty()) {
                throw Exception("the primary mRID may only be specified once");
            }

            const auto node = this->get_config_node(field_name);

            this->mRID = yaml::require_uuid(node, ::adapter::keys::value);
        }
    }

    template <class T>
    void SubscribingConfigReadVisitor<T>::handle(const std::string& field_name, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor)
    {
        // ignored
    }

    template <class T>
    void SubscribingConfigReadVisitor<T>::handle(const std::string& field_name, const message_accessor_t<T, commonmodule::Quality>& accessor)
    {
        // ignored
    }

    template <class T>
    void SubscribingConfigReadVisitor<T>::handle(const std::string& field_name, const message_accessor_t<T, commonmodule::Timestamp>& accessor)
    {
        // ignored
    }

    template <class T>
    void SubscribingConfigReadVisitor<T>::handle(const std::string& field_name, const message_accessor_t<T, commonmodule::ControlTimestamp>& accessor)
    {
        // ignored
    }
}
}

#endif
