// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_ICCP_SERVER_MEASUREMENTCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_ICCP_SERVER_MEASUREMENTCONFIGREADVISITOR_H

#include <adapter-util/ProfileInfo.h>
#include <adapter-util/config/SubscribingConfigReadVisitorBase.h>
#include <adapter-util/util/Time.h>

#include "SubscriptionTypes.h"

namespace adapter {
namespace iccp {
    namespace server {

        template <class T>
        class MeasurementConfigReadVisitor final : public util::SubscribingConfigReadVisitorBase<T> {

            update_handler_vec_t<T> handlers;

        public:
            explicit MeasurementConfigReadVisitor(const YAML::Node& node);

            update_handler_vec_t<T> get_handlers();

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
        MeasurementConfigReadVisitor<T>::MeasurementConfigReadVisitor(const YAML::Node& node)
            : util::SubscribingConfigReadVisitorBase<T>(node)
        {
        }

        template <class T>
        update_handler_vec_t<T> MeasurementConfigReadVisitor<T>::get_handlers()
        {
            return std::move(this->handlers);
        }

        template <class T>
        void MeasurementConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, bool>& accessor)
        {
            throw api::Exception("Not implemented");
        }

        template <class T>
        void MeasurementConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, int32_t>& accessor)
        {
            throw api::Exception("Not implemented");
        }

        template <class T>
        void MeasurementConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, uint32_t>& accessor)
        {
            throw api::Exception("Not implemented");
        }

        template <class T>
        void MeasurementConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, int64_t>& accessor)
        {
            throw api::Exception("Not implemented");
        }

        template <class T>
        void MeasurementConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, uint64_t>& accessor)
        {
            throw api::Exception("Not implemented");
        }

        template <class T>
        void MeasurementConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, float>& accessor)
        {
            throw api::Exception("Not implemented");
        }

        template <class T>
        void MeasurementConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, double>& accessor)
        {
            throw api::Exception("Not implemented");
        }

        template <class T>
        void MeasurementConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, int>& accessor,
                                                                  google::protobuf::EnumDescriptor const* descriptor)
        {
            throw api::Exception("Not implemented");
        }

        template <class T>
        void MeasurementConfigReadVisitor<T>::handle(const std::string& field_name,
                                                     const util::getter_t<T, google::protobuf::RepeatedPtrField<commonmodule::ENG_ScheduleParameter>>& getter)
        {
            throw api::Exception("ICCP server subscriptions cannot contain schedule parameter lists");
        }
    }
}
}

#endif //OPENFMB_ADAPTER_ICCP_SERVER_MEASUREMENTCONFIGREADVISITOR_H
