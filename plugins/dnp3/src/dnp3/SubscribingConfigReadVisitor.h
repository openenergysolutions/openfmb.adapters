
#ifndef OPENFMB_ADAPTER_DNP3_SUBSCRIBINGCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_DNP3_SUBSCRIBINGCONFIGREADVISITOR_H

#include <adapter-util/ProfileInfo.h>
#include <adapter-util/config/SubscribingConfigReadVisitorBase.h>

#include "ControlSubscriptionHandler.h"

namespace adapter {
namespace dnp3 {

    // keep these helpers out of the template
    namespace read {

        std::vector<PrioritizedCommand> control_list(const YAML::Node& node, util::ICommandPrioritySource& priority_source)
        {
            std::vector<PrioritizedCommand> commands;

            const auto read_one = [&](const YAML::Node& node) {
                const auto control = Control::read(node);

                const auto action = [crob = control.crob, index = control.index](
                                        opendnp3::ICommandProcessor& processor, const opendnp3::CommandCallbackT& callback) {
                    processor.DirectOperate(crob, index, callback);
                };

                commands.emplace_back(action, priority_source.get_priority(node));
            };

            util::yaml::foreach (node, read_one);

            return commands;
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

        void subscribe(api::Logger logger, api::IMessageBus& bus, std::shared_ptr<ICommandSequenceExecutor> executor)
        {
            if (configuration->is_empty()) {
                throw api::Exception("command configuration is empty!");
            }

            logger.info("Subscribing to {} w/ mRID {}", T::descriptor()->name(), this->get_primary_mrid());

            bus.subscribe(
                std::make_shared<ControlSubscriptionHandler<T>>(this->get_primary_mrid(), logger, this->configuration, std::move(executor)));
        }

        void handle(const std::string& field_name, const util::getter_t<T, google::protobuf::RepeatedPtrField<commonmodule::ENG_ScheduleParameter>>& getter) override;

        void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, bool>& accessor) override;

        void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int32_t>& accessor) override;

        void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int64_t>& accessor) override;

        void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, float>& accessor) override;

        void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor) override;
    };

    template <class T>
    void SubscribingConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, bool>& accessor)
    {
        const auto when_true = read::control_list(util::yaml::require(node, util::keys::when_true), this->priorities);
        const auto when_false = read::control_list(util::yaml::require(node, util::keys::when_false), this->priorities);

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
    void SubscribingConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int32_t>& accessor)
    {
        // ignored
    }

    template <class T>
    void SubscribingConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int64_t>& accessor)
    {
        // ignored
    }

    template <class T>
    void SubscribingConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, float>& accessor)
    {
        // ignored
    }

    template <class T>
    void SubscribingConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor)
    {
        // ignored
    }

    template <class T>
    void SubscribingConfigReadVisitor<T>::handle(const std::string& field_name, const util::getter_t<T, google::protobuf::RepeatedPtrField<commonmodule::ENG_ScheduleParameter>>& getter)
    {
        // DNP3 only requires SwitchControlProfile ATM which doesn't have this.
    }
}
}

#endif
