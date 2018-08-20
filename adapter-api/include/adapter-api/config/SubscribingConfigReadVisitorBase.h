
#ifndef OPENFMB_ADAPTER_DNP3_SUBSCRIBINGCONFIGREADVISITORBASE_H
#define OPENFMB_ADAPTER_DNP3_SUBSCRIBINGCONFIGREADVISITORBASE_H

#include "ConfigReadVisitorBase.h"

#include "../util/Exception.h"

namespace adapter {

template <class T>
class SubscribingConfigReadVisitorBase : public ConfigReadVisitorBase<T> {

    std::string mRID;

protected:
    const std::string& get_primary_mrid() const;

    explicit SubscribingConfigReadVisitorBase(const YAML::Node& root)
        : ConfigReadVisitorBase<T>(root)
    {
    }

public:
    void handle(const std::string& field_name, const accessor_t<T, bool>& accessor) final;

    void handle(const std::string& field_name, const accessor_t<T, int32_t>& accessor) final;

    void handle(const std::string& field_name, const accessor_t<T, int64_t>& accessor) final;

    void handle(const std::string& field_name, const accessor_t<T, float>& accessor) final;

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

    virtual void handle_mapped_field(const YAML::Node& node, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor) = 0;
};

template <class T>
const std::string& SubscribingConfigReadVisitorBase<T>::get_primary_mrid() const
{
    if (this->mRID.empty()) {
        throw Exception("primary mRID for control profile was not specified");
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
void SubscribingConfigReadVisitorBase<T>::handle(const std::string& field_name, const accessor_t<T, std::string>& accessor)
{
    const auto node = this->get_config_node(field_name);
    const auto field_type = yaml::require_enum<StringFieldType>(node);

    if (field_type == StringFieldType::Value::primary_uuid) {

        if (!this->mRID.empty()) {
            throw Exception("the primary mRID may only be specified once");
        }

        this->mRID = yaml::require_uuid(node, ::adapter::keys::value);
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
    // ignore all
}

template <class T>
void SubscribingConfigReadVisitorBase<T>::handle(const std::string& field_name, const message_accessor_t<T, commonmodule::Timestamp>& accessor)
{
    // ignore all
}

template <class T>
void SubscribingConfigReadVisitorBase<T>::handle(const std::string& field_name, const message_accessor_t<T, commonmodule::ControlTimestamp>& accessor)
{
    // ignore all
}
}

#endif