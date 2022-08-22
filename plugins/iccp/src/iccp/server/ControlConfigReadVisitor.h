// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

//
// Created by cory on 2/10/21.
//

#ifndef OPENFMB_ADAPTER_ICCP_SERVER_CONTROLCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_ICCP_SERVER_CONTROLCONFIGREADVISITOR_H

#include <adapter-util/ProfileInfo.h>
#include <adapter-util/config/PublishingConfigReadVisitorBase.h>
#include <adapter-util/util/Time.h>

#include "iccp/server/ICommandConfig.h"

namespace adapter {
namespace iccp {
    namespace server {

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

                void publish(api::IPublishOne<T>& publisher)
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
                throw api::Exception("Not implemented");
            }

            void handle_mapped_int32(const YAML::Node& node, const util::accessor_t<T, int32_t>& accessor) override
            {
                throw api::Exception("Not implemented");
            }

            void handle_mapped_int64(const YAML::Node& node, const util::accessor_t<T, int64_t>& accessor) override
            {
                throw api::Exception("Not implemented");
            }

            void handle_mapped_uint32(const YAML::Node& node, const util::accessor_t<T, uint32_t>& accessor) override
            {
                throw api::Exception("Not implemented");
            }

            void handle_mapped_uint64(const YAML::Node& node, const util::accessor_t<T, uint64_t>& accessor) override
            {
                throw api::Exception("Not implemented");
            }

            void handle_mapped_float(const YAML::Node& node, const util::accessor_t<T, float>& accessor) override
            {
                throw api::Exception("Not implemented");
            }

            void handle_mapped_double(const YAML::Node& node, const util::accessor_t<T, double>& accessor) override
            {
                throw api::Exception("Not implemented");
            }

            void handle_mapped_enum(const YAML::Node& node, const util::accessor_t<T, int>& accessor,
                                    google::protobuf::EnumDescriptor const* descriptor) override
            {
                throw api::Exception("Not implemented");
            }

            void add_message_init_action(const std::function<void(T&)>& action) override
            {
                this->shared_data->add_init_action(action);
            }

            void add_message_complete_action(const std::function<void(T&)>& action) override
            {
                this->shared_data->add_complete_action(action);
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

#endif //OPENFMB_ADAPTER_ICCP_SERVER_CONTROLCONFIGREADVISITOR_H
