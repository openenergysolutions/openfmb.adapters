
#ifndef OPENFMB_ADAPTER_PUBLISHINGCONFIGREADVISITORBASE_H
#define OPENFMB_ADAPTER_PUBLISHINGCONFIGREADVISITORBASE_H

#include "ConfigReadVisitorBase.h"

#include "adapter-api/ConfigStrings.h"
#include "adapter-api/config/YAMLGetters.h"
#include "adapter-api/util/Time.h"

#include <boost/lexical_cast.hpp>
#include <boost/uuid/random_generator.hpp>
#include <boost/uuid/uuid_io.hpp>

namespace adapter {

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

    void handle(const std::string& field_name, const accessor_t<T, float>& accessor) final;

    void handle(const std::string& field_name, const accessor_t<T, std::string>& accessor) final;

    void handle(const std::string& field_name, const accessor_t<T, int>& setter, google::protobuf::EnumDescriptor const* descriptor) final;

    /* --- final handlers for terminal messages --- */

    void handle(const std::string& field_name, const message_accessor_t<T, commonmodule::Quality>& accessor) override;

    void handle(const std::string& field_name, const message_accessor_t<T, commonmodule::Timestamp>& accessor) override;

    void handle(const std::string& field_name, const message_accessor_t<T, commonmodule::ControlTimestamp>& accessor) override;

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

    virtual void handle_mapped_float(const YAML::Node& node, const accessor_t<T, float>& accessor) = 0;

    virtual void handle_mapped_enum(const YAML::Node& node, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor) = 0;

private:
    void handle_optional_const_bool(const YAML::Node& node, const accessor_t<T, bool>& accessor);

    void handle_constant_int32(const YAML::Node& node, const accessor_t<T, int32_t>& accessor);

    void handle_constant_int64(const YAML::Node& node, const accessor_t<T, int64_t>& accessor);

    void handle_optional_const_float(const YAML::Node& node, const accessor_t<T, float>& accessor);

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
    // ignore for now
}

template <class T>
void PublishingConfigReadVisitorBase<T>::handle(const std::string& field_name, const message_accessor_t<T, commonmodule::Timestamp>& accessor)
{
    const auto node = this->get_config_node(field_name);
    const auto field_type = yaml::require_enum<TimestampFieldType>(node);
    if (field_type == TimestampFieldType::Value::message) {
        this->add_message_complete_action(
            [accessor](T& profile) {
                time::set(std::chrono::system_clock::now(), *accessor->mutable_get(profile));
            });
    }
}

template <class T>
void PublishingConfigReadVisitorBase<T>::handle(const std::string& field_name, const message_accessor_t<T, commonmodule::ControlTimestamp>& accessor)
{
    // ignore for now
}

template <class T>
void PublishingConfigReadVisitorBase<T>::handle_optional_const_bool(const YAML::Node& node, const accessor_t<T, bool>& accessor)
{
    this->add_message_init_action(
        [accessor, value = yaml::require(node, keys::value).as<bool>()](T& profile) {
            accessor->set(profile, value);
        });
}

template <class T>
void PublishingConfigReadVisitorBase<T>::handle_constant_int32(const YAML::Node& node, const accessor_t<T, int32_t>& accessor)
{
    this->add_message_init_action(
        [accessor, value = yaml::require_integer<int32_t>(node, keys::value)](T& profile) {
            accessor->set(profile, value);
        });
}

template <class T>
void PublishingConfigReadVisitorBase<T>::handle_constant_int64(const YAML::Node& node, const accessor_t<T, int64_t>& accessor)
{
    this->add_message_init_action(
        [accessor, value = yaml::require(node, keys::value).as<int64_t>()](T& profile) {
            accessor->set(profile, value);
        });
}

template <class T>
void PublishingConfigReadVisitorBase<T>::handle_optional_const_float(const YAML::Node& node, const accessor_t<T, float>& accessor)
{
    this->add_message_init_action(
        [accessor, value = yaml::require(node, keys::value).as<float>()](T& profile) {
            accessor->set(profile, value);
        });
}

template <class T>
void PublishingConfigReadVisitorBase<T>::handle_const_uuid(const YAML::Node& node, const accessor_t<T, std::string>& accessor)
{
    this->add_message_init_action(
        [accessor, value = yaml::require_uuid(node, keys::value)](T& profile) {
            accessor->set(profile, value);
        });
}

template <class T>
void PublishingConfigReadVisitorBase<T>::handle_const_string(const YAML::Node& node, const accessor_t<T, std::string>& accessor)
{
    this->add_message_init_action(
        [accessor, value = yaml::require_string(node, keys::value)](T& profile) {
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
    const auto value = yaml::get::enum_value(node, keys::value, *descriptor);

    this->add_message_init_action(
        [accessor, value](T& profile) {
            accessor->set(profile, value);
        });
}
}

#endif
