// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_PUBLISHINGCONFIGREADVISITORBASE_H
#define OPENFMB_ADAPTER_PUBLISHINGCONFIGREADVISITORBASE_H

#include "ConfigReadVisitorBase.h"

#include "adapter-util/ConfigStrings.h"
#include "adapter-util/config/YAMLGetters.h"
#include "adapter-util/util/Time.h"

#include "FieldTypes.h"

#include <boost/lexical_cast.hpp>
#include <boost/uuid/random_generator.hpp>
#include <boost/uuid/uuid_io.hpp>

namespace adapter {
namespace util {

    /**
     * Base class that can be used in plugins that need to read a configuration and publish a profile
     *
     * Automatically handles message mRID, timestamp, etc
     *
     * @tparam T
     */
    template <class T>
    class PublishingConfigReadVisitorBase : public ConfigReadVisitorBase<T> {

    public:
        /* --- final handlers for primitives --- */

        void handle(const std::string& field_name, const accessor_t<T, bool>& accessor) final;

        void handle(const std::string& field_name, const accessor_t<T, int32_t>& accessor) final;

        void handle(const std::string& field_name, const accessor_t<T, int64_t>& accessor) final;

        void handle(const std::string& field_name, const accessor_t<T, uint32_t>& accessor) final;

        void handle(const std::string& field_name, const accessor_t<T, uint64_t>& accessor) final;

        void handle(const std::string& field_name, const accessor_t<T, float>& accessor) final;

        void handle(const std::string& field_name, const accessor_t<T, double>& accessor) final;

        void handle(const std::string& field_name, const accessor_t<T, std::string>& accessor) final;

        void handle(const std::string& field_name, const accessor_t<T, int>& setter, google::protobuf::EnumDescriptor const* descriptor) final;

        /* --- final handlers for terminal messages --- */

        void handle(const std::string& field_name, const message_accessor_t<T, commonmodule::Quality>& accessor) override;

        void handle(const std::string& field_name, const message_accessor_t<T, commonmodule::Timestamp>& accessor) override;

        void handle(const std::string& field_name, const message_accessor_t<T, commonmodule::ControlTimestamp>& accessor) override;

        void handle(const std::string& field_name, const message_accessor_t<T, commonmodule::ClearingTime>& accessor) override;

        void handle(const std::string& field_name,
                    const getter_t<T, google::protobuf::RepeatedPtrField<commonmodule::ENG_ScheduleParameter>>& getter) override;

    protected:
        explicit PublishingConfigReadVisitorBase(const YAML::Node& root)
            : ConfigReadVisitorBase<T>(root)
        {
        }

        // --- inherited classes implement these methods ---

        /**
     * Add an action that should be performed on the profile prior to applying any values
     *
     * @param init functor to be applied to the profile
     */
        virtual void add_message_init_action(const std::function<void(T&)>& init) = 0;

        /**
     * Add an action that should be performed on the profile prior to publishing the profile
     *
     * @param init functor to be applied to the profile
     */
        virtual void add_message_complete_action(const std::function<void(T&)>& init) = 0;

        // --- handlers for mapped fields ---

        virtual void handle_mapped_bool(const YAML::Node& node, const accessor_t<T, bool>& accessor) = 0;

        virtual void handle_mapped_int32(const YAML::Node& node, const accessor_t<T, int32_t>& accessor) = 0;

        virtual void handle_mapped_int64(const YAML::Node& node, const accessor_t<T, int64_t>& accessor) = 0;

        virtual void handle_mapped_uint32(const YAML::Node& node, const accessor_t<T, uint32_t>& accessor) = 0;

        virtual void handle_mapped_uint64(const YAML::Node& node, const accessor_t<T, uint64_t>& accessor) = 0;

        virtual void handle_mapped_float(const YAML::Node& node, const accessor_t<T, float>& accessor) = 0;

        virtual void handle_mapped_double(const YAML::Node& node, const accessor_t<T, double>& accessor) = 0;

        virtual void handle_mapped_string(const YAML::Node& node, const accessor_t<T, std::string>& accessor) {} // TODO: decide purity

        virtual void handle_mapped_enum(const YAML::Node& node, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor) = 0;

        virtual void handle_mapped_quality(const YAML::Node& node, const message_accessor_t<T, commonmodule::Quality>& accessor) {} // TODO: decide purity

        virtual void handle_mapped_timestamp(const YAML::Node& node, const message_accessor_t<T, commonmodule::Timestamp>& accessor) {} // TODO: decide purity

        virtual void handle_mapped_clearingtime(const YAML::Node& node, const message_accessor_t<T, commonmodule::ClearingTime>& accessor) {} // TODO: decide purity

    private:
        void handle_optional_const_bool(const YAML::Node& node, const accessor_t<T, bool>& accessor);

        void handle_constant_int32(const YAML::Node& node, const accessor_t<T, int32_t>& accessor);

        void handle_constant_uint32(const YAML::Node& node, const accessor_t<T, uint32_t>& accessor);

        void handle_constant_int64(const YAML::Node& node, const accessor_t<T, int64_t>& accessor);

        void handle_constant_uint64(const YAML::Node& node, const accessor_t<T, uint64_t>& accessor);

        void handle_optional_const_float(const YAML::Node& node, const accessor_t<T, float>& accessor);

        void handle_optional_const_double(const YAML::Node& node, const accessor_t<T, double>& accessor);

        void handle_const_uuid(const YAML::Node& node, const accessor_t<T, std::string>& accessor);

        void handle_const_string(const YAML::Node& node, const accessor_t<T, std::string>& accessor);

        void handle_generated_uuid(const YAML::Node& node, const accessor_t<T, std::string>& accessor);

        void handle_const_enum(const YAML::Node& node, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor);

        const std::shared_ptr<boost::uuids::random_generator> generator = std::make_shared<boost::uuids::random_generator>();
    };

    template <class T>
    void PublishingConfigReadVisitorBase<T>::handle(const std::string& field_name, const accessor_t<T, bool>& accessor)
    {
        const auto node = this->get_config_node(field_name);
        const auto field_type = yaml::require_enum<BoolFieldType>(node);
        switch (field_type) {
        case (BoolFieldType::Value::mapped):
            this->handle_mapped_bool(node, accessor);
            break;
        case (BoolFieldType::Value::constant):
            this->handle_optional_const_bool(node, accessor);
            break;
        default:
            // ignored
            break;
        }
    }

    template <class T>
    void PublishingConfigReadVisitorBase<T>::handle(const std::string& field_name, const accessor_t<T, int32_t>& accessor)
    {
        const auto node = this->get_config_node(field_name);
        const auto field_type = yaml::require_enum<Int32FieldType>(node);
        switch (field_type) {
        case (Int32FieldType::Value::mapped):
            this->handle_mapped_int32(node, accessor);
            break;
        case (Int32FieldType::Value::constant):
            this->handle_constant_int32(node, accessor);
        default:
            // ignored
            break;
        }
    }

    template <class T>
    void PublishingConfigReadVisitorBase<T>::handle(const std::string& field_name, const accessor_t<T, uint32_t>& accessor)
    {
        const auto node = this->get_config_node(field_name);
        const auto field_type = yaml::require_enum<Int32FieldType>(node);
        switch (field_type) {
        case (Int32FieldType::Value::mapped):
            this->handle_mapped_uint32(node, accessor);
            break;
        case (Int32FieldType::Value::constant):
            this->handle_constant_uint32(node, accessor);
        default:
            // ignored
            break;
        }
    }

    template <class T>
    void PublishingConfigReadVisitorBase<T>::handle(const std::string& field_name, const accessor_t<T, int64_t>& accessor)
    {
        const auto node = this->get_config_node(field_name);
        const auto field_type = yaml::require_enum<Int64FieldType>(node);
        switch (field_type) {
        case (Int64FieldType::Value::mapped):
            this->handle_mapped_int64(node, accessor);
            break;
        case (Int64FieldType::Value::constant):
            this->handle_constant_int64(node, accessor);
        default:
            // ignored
            break;
        }
    }

    template <class T>
    void PublishingConfigReadVisitorBase<T>::handle(const std::string& field_name, const accessor_t<T, uint64_t>& accessor)
    {
        const auto node = this->get_config_node(field_name);
        const auto field_type = yaml::require_enum<Int64FieldType>(node);
        switch (field_type) {
        case (Int64FieldType::Value::mapped):
            this->handle_mapped_uint64(node, accessor);
            break;
        case (Int64FieldType::Value::constant):
            this->handle_constant_uint64(node, accessor);
        default:
            // ignored
            break;
        }
    }

    template <class T>
    void PublishingConfigReadVisitorBase<T>::handle(const std::string& field_name, const accessor_t<T, float>& accessor)
    {
        const auto node = this->get_config_node(field_name);
        const auto field_type = yaml::require_enum<FloatFieldType>(node);
        switch (field_type) {
        case (FloatFieldType::Value::mapped):
            this->handle_mapped_float(node, accessor);
            break;
        case (FloatFieldType::Value::constant):
            this->handle_optional_const_float(node, accessor);
        default:
            // ignored
            break;
        }
    }

    template <class T>
    void PublishingConfigReadVisitorBase<T>::handle(const std::string& field_name, const accessor_t<T, double>& accessor)
    {
        const auto node = this->get_config_node(field_name);
        const auto field_type = yaml::require_enum<DoubleFieldType>(node);
        switch (field_type) {
        case (DoubleFieldType::Value::mapped):
            this->handle_mapped_double(node, accessor);
            break;
        case (DoubleFieldType::Value::constant):
            this->handle_optional_const_double(node, accessor);
        default:
            // ignored
            break;
        }
    }

    template <class T>
    void PublishingConfigReadVisitorBase<T>::handle(const std::string& field_name, const accessor_t<T, std::string>& accessor)
    {
        const auto node = this->get_config_node(field_name);
        const auto field_type = yaml::require_enum<StringFieldType>(node);
        switch (field_type) {
        case (StringFieldType::Value::primary_uuid):
        case (StringFieldType::Value::constant_uuid):
            this->handle_const_uuid(node, accessor);
            break;
        case (StringFieldType::Value::constant):
            this->handle_const_string(node, accessor);
            break;
        case (StringFieldType::Value::generated_uuid):
            this->handle_generated_uuid(node, accessor);
            break;
        case (StringFieldType::Value::mapped):
            this->handle_mapped_string(node, accessor);
            break;
        default:
            // ignored
            break;
        }
    }

    template <class T>
    void PublishingConfigReadVisitorBase<T>::handle(const std::string& field_name, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor)
    {
        const auto node = this->get_config_node(field_name);
        const auto field_type = yaml::require_enum<EnumFieldType>(node);
        switch (field_type) {
        case (EnumFieldType::Value::mapped):
            this->handle_mapped_enum(node, accessor, descriptor);
            break;
        case (EnumFieldType::Value::constant):
            this->handle_const_enum(node, accessor, descriptor);
            break;
        default:
            // ignored
            break;
        }
    }

    template <class T>
    void PublishingConfigReadVisitorBase<T>::handle(const std::string& field_name, const message_accessor_t<T, commonmodule::Quality>& accessor)
    {
        const auto node = this->get_config_node(field_name);
        const auto field_type = yaml::require_enum<QualityFieldType>(node);

        if (field_type == QualityFieldType::Value::mapped) {
            this->handle_mapped_quality(node, accessor);
        }
    }

    template <class T>
    void PublishingConfigReadVisitorBase<T>::handle(const std::string& field_name, const message_accessor_t<T, commonmodule::Timestamp>& accessor)
    {
        const auto node = this->get_config_node(field_name);
        const auto field_type = yaml::require_enum<TimestampFieldType>(node);

        switch (field_type) {
        case TimestampFieldType::Value::message:
            this->add_message_complete_action(
                [accessor](T& profile) {
                    time::set(std::chrono::system_clock::now(), *accessor->mutable_get(profile));
                });
            break;
        case TimestampFieldType::Value::mapped:
            this->handle_mapped_timestamp(node, accessor);
            break;
        default:
            // ignore
            break;
        }
    }

    template <class T>
    void PublishingConfigReadVisitorBase<T>::handle(const std::string& field_name, const message_accessor_t<T, commonmodule::ControlTimestamp>& accessor)
    {
        const auto node = this->get_config_node(field_name);
        const auto field_type = yaml::require_enum<ControlTimestampFieldType>(node);

        switch (field_type) {
        case ControlTimestampFieldType::Value::message:
            this->add_message_complete_action(
                [accessor](T& profile) {
                    time::set(std::chrono::system_clock::now(), *accessor->mutable_get(profile));
                });
            break;
        default:
            // ignore
            break;
        }
    }

    template <class T>
    void PublishingConfigReadVisitorBase<T>::handle(const std::string& field_name, const message_accessor_t<T, commonmodule::ClearingTime>& accessor)
    {
        const auto node = this->get_config_node(field_name);
        const auto field_type = yaml::require_enum<ClearingTimeFieldType>(node);

        switch (field_type) {
        case ClearingTimeFieldType::Value::message:
            this->add_message_complete_action(
                [accessor](T& profile) {
                    time::set(std::chrono::system_clock::now(), *accessor->mutable_get(profile));
                });
            break;
        case ClearingTimeFieldType::Value::mapped:
            this->handle_mapped_clearingtime(node, accessor);
            break;
        default:
            // ignore
            break;
        }
    }

    template <class T>
    void PublishingConfigReadVisitorBase<T>::handle(const std::string& field_name, const getter_t<T, google::protobuf::RepeatedPtrField<commonmodule::ENG_ScheduleParameter>>& getter)
    {
        // ignore for now
    }

    template <class T>
    void PublishingConfigReadVisitorBase<T>::handle_optional_const_bool(const YAML::Node& node, const accessor_t<T, bool>& accessor)
    {
        this->add_message_init_action(
            [accessor, value = yaml::require(node, util::keys::value).as<bool>()](T& profile) {
                accessor->set(profile, value);
            });
    }

    template <class T>
    void PublishingConfigReadVisitorBase<T>::handle_constant_int32(const YAML::Node& node, const accessor_t<T, int32_t>& accessor)
    {
        this->add_message_init_action(
            [accessor, value = yaml::require_integer<int32_t>(node, util::keys::value)](T& profile) {
                accessor->set(profile, value);
            });
    }

    template <class T>
    void PublishingConfigReadVisitorBase<T>::handle_constant_uint32(const YAML::Node& node, const accessor_t<T, uint32_t>& accessor)
    {
        this->add_message_init_action(
            [accessor, value = yaml::require_integer<int32_t>(node, util::keys::value)](T& profile) {
                accessor->set(profile, value);
            });
    }

    template <class T>
    void PublishingConfigReadVisitorBase<T>::handle_constant_int64(const YAML::Node& node, const accessor_t<T, int64_t>& accessor)
    {
        this->add_message_init_action(
            [accessor, value = yaml::require(node, util::keys::value).as<int64_t>()](T& profile) {
                accessor->set(profile, value);
            });
    }

    template <class T>
    void PublishingConfigReadVisitorBase<T>::handle_constant_uint64(const YAML::Node& node, const accessor_t<T, uint64_t>& accessor)
    {
        this->add_message_init_action(
            [accessor, value = yaml::require(node, util::keys::value).as<uint64_t>()](T& profile) {
                accessor->set(profile, value);
            });
    }

    template <class T>
    void PublishingConfigReadVisitorBase<T>::handle_optional_const_float(const YAML::Node& node, const accessor_t<T, float>& accessor)
    {
        this->add_message_init_action(
            [accessor, value = yaml::require(node, util::keys::value).as<float>()](T& profile) {
                accessor->set(profile, value);
            });
    }

    template <class T>
    void PublishingConfigReadVisitorBase<T>::handle_optional_const_double(const YAML::Node& node, const accessor_t<T, double>& accessor)
    {
        this->add_message_init_action(
            [accessor, value = yaml::require(node, util::keys::value).as<double>()](T& profile) {
                accessor->set(profile, value);
            });
    }

    template <class T>
    void PublishingConfigReadVisitorBase<T>::handle_const_uuid(const YAML::Node& node, const accessor_t<T, std::string>& accessor)
    {
        this->add_message_init_action(
            [accessor, value = yaml::require_uuid(node, util::keys::value)](T& profile) {
                accessor->set(profile, value);
            });
    }

    template <class T>
    void PublishingConfigReadVisitorBase<T>::handle_const_string(const YAML::Node& node, const accessor_t<T, std::string>& accessor)
    {
        this->add_message_init_action(
            [accessor, value = yaml::require_string(node, util::keys::value)](T& profile) {
                accessor->set(profile, value);
            });
    }

    template <class T>
    void PublishingConfigReadVisitorBase<T>::handle_generated_uuid(const YAML::Node& node, const accessor_t<T, std::string>& accessor)
    {
        this->add_message_init_action(
            [accessor, generator = this->generator](T& profile) {
                accessor->set(profile, boost::uuids::to_string((*generator)()));
            });
    }

    template <class T>
    void PublishingConfigReadVisitorBase<T>::handle_const_enum(const YAML::Node& node, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor)
    {
        const auto value = yaml::get::enum_value(node, util::keys::value, *descriptor);

        this->add_message_init_action(
            [accessor, value](T& profile) {
                accessor->set(profile, value);
            });
    }
}
}

#endif
