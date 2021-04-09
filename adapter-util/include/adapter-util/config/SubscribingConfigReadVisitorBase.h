// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_DNP3_SUBSCRIBINGCONFIGREADVISITORBASE_H
#define OPENFMB_ADAPTER_DNP3_SUBSCRIBINGCONFIGREADVISITORBASE_H

#include "ConfigReadVisitorBase.h"

#include "FieldTypes.h"

#include "../ConfigStrings.h"
#include <adapter-api/Exception.h>

namespace adapter {
namespace util {

    template <class T>
    class SubscribingConfigReadVisitorBase : public ConfigReadVisitorBase<T> {

        std::string mRID;

    protected:
        explicit SubscribingConfigReadVisitorBase(const YAML::Node& root)
            : ConfigReadVisitorBase<T>(root)
        {
        }

    public:
        const std::string& get_primary_mrid() const;

        void handle(const std::string& field_name, const accessor_t<T, bool>& accessor) final;

        void handle(const std::string& field_name, const accessor_t<T, int32_t>& accessor) final;

        void handle(const std::string& field_name, const accessor_t<T, int64_t>& accessor) final;

        void handle(const std::string& field_name, const accessor_t<T, float>& accessor) final;

        void handle(const std::string& field_name, const accessor_t<T, double>& accessor) final;

        void handle(const std::string& field_name, const accessor_t<T, std::string>& accessor) final;

        void handle(const std::string& field_name, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor) final;

        void handle(const std::string& field_name, const message_accessor_t<T, commonmodule::Quality>& accessor) final;

        void handle(const std::string& field_name, const message_accessor_t<T, commonmodule::Timestamp>& accessor) final;

        void handle(const std::string& field_name, const message_accessor_t<T, commonmodule::ControlTimestamp>& accessor) final;

    protected:
        virtual void handle_mapped_field(const YAML::Node& node, const accessor_t<T, bool>& accessor) = 0;

        virtual void handle_mapped_field(const YAML::Node& node, const accessor_t<T, int32_t>& accessor) = 0;

        virtual void handle_mapped_field(const YAML::Node& node, const accessor_t<T, int64_t>& accessor) = 0;

        virtual void handle_mapped_field(const YAML::Node& node, const accessor_t<T, float>& accessor) = 0;

        virtual void handle_mapped_field(const YAML::Node& node, const accessor_t<T, double>& accessor) = 0;

        virtual void handle_mapped_field(const YAML::Node& node, const accessor_t<T, std::string>& accessor) {} // TODO: decide purity

        virtual void handle_mapped_field(const YAML::Node& node, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor) = 0;

        virtual void handle_mapped_field(const YAML::Node& node, const message_accessor_t<T, commonmodule::Quality>& accessor) {} // TODO: decide purity

        virtual void handle_mapped_field(const YAML::Node& node, const message_accessor_t<T, commonmodule::Timestamp>& accessor) {} // TODO: decide purity
    };

    template <class T>
    const std::string& SubscribingConfigReadVisitorBase<T>::get_primary_mrid() const
    {
        if (this->mRID.empty()) {
            throw api::Exception("primary mRID for profile was not specified");
        }

        return this->mRID;
    }

    template <class T>
    void SubscribingConfigReadVisitorBase<T>::handle(const std::string& field_name, const accessor_t<T, bool>& accessor)
    {
        const auto node = this->get_config_node(field_name);
        const auto field_type = yaml::require_enum<BoolFieldType>(node);

        if (field_type == BoolFieldType::Value::mapped) {
            this->handle_mapped_field(node, accessor);
        }
    }

    template <class T>
    void SubscribingConfigReadVisitorBase<T>::handle(const std::string& field_name, const accessor_t<T, int32_t>& accessor)
    {
        const auto node = this->get_config_node(field_name);
        const auto field_type = yaml::require_enum<Int32FieldType>(node);

        if (field_type == Int32FieldType::Value::mapped) {
            this->handle_mapped_field(node, accessor);
        }
    }

    template <class T>
    void SubscribingConfigReadVisitorBase<T>::handle(const std::string& field_name, const accessor_t<T, int64_t>& accessor)
    {
        const auto node = this->get_config_node(field_name);
        const auto field_type = yaml::require_enum<Int64FieldType>(node);

        if (field_type == Int64FieldType::Value::mapped) {
            this->handle_mapped_field(node, accessor);
        }
    }

    template <class T>
    void SubscribingConfigReadVisitorBase<T>::handle(const std::string& field_name, const accessor_t<T, float>& accessor)
    {
        const auto node = this->get_config_node(field_name);
        const auto field_type = yaml::require_enum<FloatFieldType>(node);

        if (field_type == FloatFieldType::Value::mapped) {
            this->handle_mapped_field(node, accessor);
        }
    }

    template <class T>
    void SubscribingConfigReadVisitorBase<T>::handle(const std::string& field_name, const accessor_t<T, double>& accessor)
    {
        const auto node = this->get_config_node(field_name);
        const auto field_type = yaml::require_enum<DoubleFieldType>(node);

        if (field_type == DoubleFieldType::Value::mapped) {
            this->handle_mapped_field(node, accessor);
        }
    }

    template <class T>
    void SubscribingConfigReadVisitorBase<T>::handle(const std::string& field_name, const accessor_t<T, std::string>& accessor)
    {
        const auto node = this->get_config_node(field_name);
        const auto field_type = yaml::require_enum<StringFieldType>(node);

        switch (field_type) {
        case StringFieldType::Value::primary_uuid: {
            if (!this->mRID.empty()) {
                throw api::Exception("the primary mRID may only be specified once");
            }

            this->mRID = yaml::require_uuid(node, util::keys::value);
            break;
        }
        case StringFieldType::Value::mapped:
            this->handle_mapped_field(node, accessor);
            break;
        default:
            break;
        }
    }

    template <class T>
    void SubscribingConfigReadVisitorBase<T>::handle(const std::string& field_name, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor)
    {
        const auto node = this->get_config_node(field_name);
        const auto field_type = yaml::require_enum<EnumFieldType>(node);

        if (field_type == EnumFieldType::Value::mapped) {
            this->handle_mapped_field(node, accessor, descriptor);
        }
    }

    template <class T>
    void SubscribingConfigReadVisitorBase<T>::handle(const std::string& field_name, const message_accessor_t<T, commonmodule::Quality>& accessor)
    {
        const auto node = this->get_config_node(field_name);
        const auto field_type = yaml::require_enum<QualityFieldType>(node);

        if (field_type == QualityFieldType::Value::mapped) {
            this->handle_mapped_field(node, accessor);
        }
    }

    template <class T>
    void SubscribingConfigReadVisitorBase<T>::handle(const std::string& field_name, const message_accessor_t<T, commonmodule::Timestamp>& accessor)
    {
        const auto node = this->get_config_node(field_name);
        const auto field_type = yaml::require_enum<TimestampFieldType>(node);

        if (field_type == TimestampFieldType::Value::mapped) {
            this->handle_mapped_field(node, accessor);
        }
    }

    template <class T>
    void SubscribingConfigReadVisitorBase<T>::handle(const std::string& field_name, const message_accessor_t<T, commonmodule::ControlTimestamp>& accessor)
    {
        // ignore all
    }
}
}

#endif
