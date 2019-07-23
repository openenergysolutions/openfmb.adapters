
#ifndef OPENFMB_ADAPTER_DNP3_OUTSTATION_CONTROLCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_DNP3_OUTSTATION_CONTROLCONFIGREADVISITOR_H

#include <adapter-util/ProfileInfo.h>
#include <adapter-util/config/PublishingConfigReadVisitorBase.h>
#include <adapter-util/util/Time.h>

#include "../generated/CommandSourceType.h"
#include "../generated/ProfileAction.h"
#include "ICommandConfig.h"

namespace adapter {
namespace dnp3 {
    namespace outstation {

        /// -----  Helper methods implemented in the cpp -------

        // convert from dnp3 control code to boolean
        std::map<opendnp3::ControlCode, bool> read_bool_mapping(const YAML::Node& node);

        // convert from DNP3 AO value to raw enum value
        std::map<int, int> read_enum_mapping(const YAML::Node& node, google::protobuf::EnumDescriptor const* descriptor);

        template <class T>
        class ControlConfigReadVisitor final : public util::PublishingConfigReadVisitorBase<T> {

            struct SharedData {

            public:
                template <class V>
                void set(const util::accessor_t<T, V>& accessor, V value)
                {
                    accessor->set(this->profile, value);
                }

                void init()
                {
                    profile.Clear();
                    for (const auto& action : init_actions)
                        action(profile);
                }

                void publish(api::IPublisher& publisher)
                {
                    for (const auto& action : complete_actions)
                        action(profile);

                    publisher.publish(profile);

                    init();
                }

                void add_init_action(const std::function<void(T&)>& action)
                {
                    this->init_actions.push_back(action);
                }

                void add_complete_action(const std::function<void(T&)>& action)
                {
                    this->complete_actions.push_back(action);
                }

            private:
                T profile;
                std::vector<std::function<void(T&)>> init_actions;
                std::vector<std::function<void(T&)>> complete_actions;
            };

            ICommandConfig& config;
            const std::shared_ptr<SharedData> shared_data = std::make_shared<SharedData>();

        public:
            ControlConfigReadVisitor(const YAML::Node& node, ICommandConfig& config);

        protected:
            void handle_mapped_bool(const YAML::Node& node, const util::accessor_t<T, bool>& accessor) override
            {
                const auto command_type = util::yaml::require_enum<CommandSourceType>(node);

                switch (command_type) {
                case CommandSourceType::Value::none:
                    break;
                case CommandSourceType::Value::crob:
                    this->handle_bool_mapped_from_crob(node, accessor);
                    break;
                default:
                    throw api::Exception(node.Mark(), "Unsupported command type for boolean: ", CommandSourceType::to_string(command_type));
                }
            }

            void handle_mapped_int32(const YAML::Node& node, const util::accessor_t<T, int32_t>& accessor) override
            {
            }

            void handle_mapped_int64(const YAML::Node& node, const util::accessor_t<T, int64_t>& accessor) override
            {
            }

            void handle_mapped_float(const YAML::Node& node, const util::accessor_t<T, float>& accessor) override
            {
                const auto command_type = util::yaml::require_enum<CommandSourceType>(node);

                switch (command_type) {
                case CommandSourceType::Value::none:
                    break;
                case CommandSourceType::Value::analog_output:
                    this->handle_float_mapped_from_ao(node, accessor);
                    break;
                default:
                    throw api::Exception(node.Mark(), "Unsupported command type for float: ", CommandSourceType::to_string(command_type));
                }
            }

            void handle_mapped_enum(const YAML::Node& node, const util::accessor_t<T, int>& accessor,
                                    google::protobuf::EnumDescriptor const* descriptor) override
            {
                const auto command_type = util::yaml::require_enum<CommandSourceType>(node);

                switch (command_type) {
                case CommandSourceType::Value::none:
                    break;
                case CommandSourceType::Value::analog_output:
                    this->handle_enum_mapped_from_ao(node, accessor, descriptor);
                    break;
                default:
                    throw api::Exception(node.Mark(), "Unsupported command type for float: ", CommandSourceType::to_string(command_type));
                }
            }

            void add_message_init_action(const std::function<void(T&)>& action) override
            {
                this->shared_data->add_init_action(action);
            }

            void add_message_complete_action(const std::function<void(T&)>& action) override
            {
                this->shared_data->add_complete_action(action);
            }

        private:
            void handle_bool_mapped_from_crob(const YAML::Node& node, const util::accessor_t<T, bool>& accessor)
            {
                const auto action = util::yaml::require_enum<ProfileAction>(node);

                this->config.add_handler(
                    util::yaml::require_integer<uint16_t>(node, util::keys::index),
                    [action, accessor, data = this->shared_data, mapping = read_bool_mapping(node)](api::IPublisher& publisher, const opendnp3::ControlRelayOutputBlock& crob, api::Logger& logger) -> opendnp3::CommandStatus {
                        // first determine if there's a mapping
                        const auto iter = mapping.find(crob.functionCode);
                        if (iter == mapping.end()) {
                            logger.info("No enum mapping for CROB function: ", crob.rawCode);
                            return opendnp3::CommandStatus::NOT_SUPPORTED;
                        }

                        if (action == ProfileAction::Value::clear_and_update)
                            data->init();

                        data->set(accessor, iter->second);

                        if (action == ProfileAction::Value::update_and_publish) {
                            data->publish(publisher);
                        }

                        return opendnp3::CommandStatus::SUCCESS;
                    });
            }

            void handle_float_mapped_from_ao(const YAML::Node& node, const util::accessor_t<T, float>& accessor)
            {
                const auto action = util::yaml::require_enum<ProfileAction>(node);

                this->config.add_handler(
                    util::yaml::require_integer<uint16_t>(node, util::keys::index),
                    [action, accessor, data = this->shared_data, scale = util::yaml::require(node, util::keys::scale).as<double>()](api::IPublisher& publisher, const opendnp3::AnalogOutputDouble64& ao, api::Logger& logger) -> opendnp3::CommandStatus {
                        if (action == ProfileAction::Value::clear_and_update)
                            data->init();
                        data->set(accessor, static_cast<float>(ao.value * scale));
                        if (action == ProfileAction::Value::update_and_publish) {
                            data->publish(publisher);
                        }
                        return opendnp3::CommandStatus::SUCCESS;
                    });
            }

            void handle_enum_mapped_from_ao(const YAML::Node& node, const util::accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor)
            {
                const auto action = util::yaml::require_enum<ProfileAction>(node);

                this->config.add_handler(
                    util::yaml::require_integer<uint16_t>(node, util::keys::index),
                    [action, accessor, data = this->shared_data, mapping = read_enum_mapping(node, descriptor)](api::IPublisher& publisher, const opendnp3::AnalogOutputDouble64& ao, api::Logger& logger) -> opendnp3::CommandStatus {
                        // first determine if there's a mapping
                        const auto value = static_cast<int>(ao.value);
                        const auto iter = mapping.find(value);
                        if (iter == mapping.end()) {
                            logger.info("No enum mapping for AO value: ", value);
                            return opendnp3::CommandStatus::NOT_SUPPORTED;
                        }

                        if (action == ProfileAction::Value::clear_and_update) {
                            data->init();
                        }
                        data->set(accessor, iter->second);
                        if (action == ProfileAction::Value::update_and_publish) {
                            data->publish(publisher);
                        }
                        return opendnp3::CommandStatus::SUCCESS;
                    });
            }
        };

        template <class T>
        ControlConfigReadVisitor<T>::ControlConfigReadVisitor(const YAML::Node& node, ICommandConfig& config)
            : util::PublishingConfigReadVisitorBase<T>(node)
            , config(config)
        {
        }
    }
}
}

#endif
