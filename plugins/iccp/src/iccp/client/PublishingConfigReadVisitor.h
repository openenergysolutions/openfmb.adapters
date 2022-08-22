// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

//
// Created by cory on 2/10/21.
//

#ifndef OPENFMB_ADAPTER_ICCP_CLIENT_PUBLISHINGCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_ICCP_CLIENT_PUBLISHINGCONFIGREADVISITOR_H

#include "adapter-util/ConfigStrings.h"

#include "adapter-util/config/PublishingConfigReadVisitorBase.h"
#include "adapter-util/config/YAMLGetters.h"

#include "adapter-util/util/EnumUtil.h"

#include <cstdint>
#include <deque>
#include <memory>

#include "IConfigurationBuilder.h"
#include <boost/numeric/conversion/cast.hpp>

namespace adapter {
namespace iccp {
    namespace client {

        template <class T>
        class PublishingConfigReadVisitor final : public util::PublishingConfigReadVisitorBase<T> {

            const std::shared_ptr<T> profile = std::make_shared<T>();
            const api::publisher_one_t<T> publisher;
            const std::shared_ptr<IConfigurationBuilder> builder;

        public:
            PublishingConfigReadVisitor(const YAML::Node& root, api::publisher_one_t<T> publisher,
                                        std::shared_ptr<IConfigurationBuilder> builder);

            ~PublishingConfigReadVisitor();

        protected:
            /// ----  handlers for mapped types ----

            void handle_mapped_bool(const YAML::Node& node, const util::accessor_t<T, bool>& accessor) override;

            void handle_mapped_int32(const YAML::Node& node, const util::accessor_t<T, int32_t>& accessor) override;

            void handle_mapped_int64(const YAML::Node& node, const util::accessor_t<T, int64_t>& accessor) override;

            void handle_mapped_uint32(const YAML::Node& node, const util::accessor_t<T, uint32_t>& accessor) override;

            void handle_mapped_uint64(const YAML::Node& node, const util::accessor_t<T, uint64_t>& accessor) override;

            void handle_mapped_float(const YAML::Node& node, const util::accessor_t<T, float>& accessor) override;

            void handle_mapped_double(const YAML::Node& node, const util::accessor_t<T, double>& accessor) override;

            void handle_mapped_enum(const YAML::Node& node, const util::accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor) override;

            /// ----  generic message init/complete handlers ----

            void add_message_init_action(const std::function<void(T&)>& action) override;

            void add_message_complete_action(const std::function<void(T&)>& action) override;

        private:
            template <typename IntT>
            void handle_mapped_int(const YAML::Node& node, const util::accessor_t<T, IntT>& accessor);

            bool get_name(const YAML::Node& node, std::string& value)
            {
                const auto name_node = node[keys::name];
                if (name_node) {
                    value = name_node.as<std::string>();
                    if (!value.empty()) {
                        return true;
                    }
                }

                return false;
            }
        };

        template <class T>
        PublishingConfigReadVisitor<T>::PublishingConfigReadVisitor(const YAML::Node& root,
                                                                    api::publisher_one_t<T> publisher,
                                                                    std::shared_ptr<IConfigurationBuilder> builder)
            : util::PublishingConfigReadVisitorBase<T>(root)
            , publisher(std::move(publisher))
            , builder(std::move(builder))
        {
            this->builder->add_begin_action(
                [profile = this->profile]() {
                    profile->Clear();
                });
        }

        template <class T>
        PublishingConfigReadVisitor<T>::~PublishingConfigReadVisitor()
        {
            this->builder->add_end_action(
                [profile = this->profile, publisher = this->publisher]() {
                    publisher->publish(*profile);
                });
        }

        template <class T>
        void PublishingConfigReadVisitor<T>::handle_mapped_bool(const YAML::Node& node, const util::accessor_t<T, bool>& accessor)
        {            
            std::string name;
            if (get_name(node, name)) {
                this->builder->add_bool_handler(name, [accessor, profile = profile](const bool& value) {
                    accessor->set(*profile, value);
                });
            }
        }

        template <class T>
        void PublishingConfigReadVisitor<T>::handle_mapped_int32(const YAML::Node& node,
                                                                 const util::accessor_t<T, int32_t>& accessor)
        {
            handle_mapped_int(node, accessor);
        }

        template <class T>
        void PublishingConfigReadVisitor<T>::handle_mapped_uint32(const YAML::Node& node,
                                                                 const util::accessor_t<T, uint32_t>& accessor)
        {
            handle_mapped_int(node, accessor);
        }

        template <class T>
        void PublishingConfigReadVisitor<T>::handle_mapped_int64(const YAML::Node& node,
                                                                 const util::accessor_t<T, int64_t>& accessor)
        {
            handle_mapped_int(node, accessor);
        }

        template <class T>
        void PublishingConfigReadVisitor<T>::handle_mapped_uint64(const YAML::Node& node,
                                                                 const util::accessor_t<T, uint64_t>& accessor)
        {
            handle_mapped_int(node, accessor);
        }

        template <typename T>
        template <typename IntT>
        void PublishingConfigReadVisitor<T>::handle_mapped_int(const YAML::Node& node, const util::accessor_t<T, IntT>& accessor)
        {
            std::string name;
            if (get_name(node, name)) {
                this->builder->add_int32_handler(name, [accessor, profile = profile](const int& value) {
                    accessor->set(*profile, value);
                });
            }
        }

        template <class T>
        void PublishingConfigReadVisitor<T>::handle_mapped_float(const YAML::Node& node,
                                                                 const util::accessor_t<T, float>& accessor)
        {
            std::string name;
            if (get_name(node, name)) {
                this->builder->add_double_handler(name, [accessor, profile = profile](const double& value) {
                    accessor->set(*profile, value);
                    });
            }
        }

        template <class T>
        void PublishingConfigReadVisitor<T>::handle_mapped_double(const YAML::Node& node,
                                                                  const util::accessor_t<T, double>& accessor)
        {            
            std::string name;
            if (get_name(node, name)) {
                this->builder->add_double_handler(name, [accessor, profile = profile](const double& value) {
                    accessor->set(*profile, value);
                });
            }
        }

        template <class T>
        void PublishingConfigReadVisitor<T>::handle_mapped_enum(const YAML::Node& node,
                                                                const util::accessor_t<T, int>& accessor,
                                                                google::protobuf::EnumDescriptor const* descriptor)
        {
            std::string name;
            if (get_name(node, name)) {
                this->builder->add_int32_handler(name, [accessor, profile = profile](const int& value) {
                    accessor->set(*profile, value);
                    });
            }
        }

        template <class T>
        void PublishingConfigReadVisitor<T>::add_message_init_action(const std::function<void(T&)>& action)
        {
            this->builder->add_begin_action([action, profile = this->profile]() {
                action(*profile);
            });
        }

        template <class T>
        void PublishingConfigReadVisitor<T>::add_message_complete_action(const std::function<void(T&)>& action)
        {
            this->builder->add_end_action([action, profile = this->profile]() {
                action(*profile);
            });
        }
    }
}
}

#endif //OPENFMB_ADAPTER_ICCP_CLIENT_PUBLISHINGCONFIGREADVISITOR_H
