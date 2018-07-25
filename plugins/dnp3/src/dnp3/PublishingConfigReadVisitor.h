
#ifndef OPENFMB_ADAPTER_DNP3_PUBLISHINGCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_DNP3_PUBLISHINGCONFIGREADVISITOR_H

#include "adapter-api/ConfigStrings.h"
#include "adapter-api/config/PublishingConfigReadVisitorBase.h"

#include "IPublishConfigBuilder.h"

#include <cstdint>
#include <deque>
#include <memory>

#include <boost/numeric/conversion/cast.hpp>
#include <dnp3/generated/SourceType.h>

namespace adapter {
namespace dnp3 {

    template <class T>
    class PublishingConfigReadVisitor final : public PublishingConfigReadVisitorBase<T> {

        const std::shared_ptr<T> profile = std::make_shared<T>();
        const publisher_t publisher;
        const std::shared_ptr<IPublishConfigBuilder> builder;

    public:
        PublishingConfigReadVisitor(const YAML::Node& root, publisher_t publisher, std::shared_ptr<IPublishConfigBuilder> builder)
            : PublishingConfigReadVisitorBase<T>(root)
            , publisher(std::move(publisher))
            , builder(std::move(builder))
        {
            this->builder->add_start_action(
                [profile = this->profile]() {
                    profile->Clear();
                });
        }

        ~PublishingConfigReadVisitor()
        {
            this->builder->add_end_action(
                [profile = this->profile, publisher = this->publisher]() {
                    publisher->publish(*profile);
                });
        }

    protected:
        /// ----  handlers for mapped types ----

        void handle_mapped_bool(const YAML::Node& node, const accessor_t<T, bool>& accessor) override;

        void handle_mapped_int32(const YAML::Node& node, const accessor_t<T, int32_t>& accessor) override;

        void handle_mapped_int64(const YAML::Node& node, const accessor_t<T, int64_t>& accessor) override;

        void handle_mapped_float(const YAML::Node& node, const accessor_t<T, float>& accessor) override;

        void handle_mapped_enum(const YAML::Node& node, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor) override;

        /// ----  generic message init/complete handlers ----

        void add_message_init_action(const std::function<void(T&)>& action) override
        {
            this->builder->add_start_action([action, profile = this->profile]() {
                action(*profile);
            });
        }

        void add_message_complete_action(const std::function<void(T&)>& action) override
        {
            this->builder->add_end_action([action, profile = this->profile]() {
                action(*profile);
            });
        }

    private:
        static double get_scale(const YAML::Node& node)
        {
            return yaml::require(node, keys::scale).as<double>();
        }

        static uint16_t get_index(const YAML::Node& node)
        {
            return yaml::require_integer<uint16_t>(node, keys::index);
        }

        static int get_enum_value(const std::string& name, google::protobuf::EnumDescriptor const* desc)
        {
            const auto value = desc->FindValueByName(name);
            if (value) {
                return value->number();
            } else {
                throw Exception("Unknown enum name: ", name);
            }
        }
    };

    template <class T>
    void PublishingConfigReadVisitor<T>::handle_mapped_bool(const YAML::Node& node, const accessor_t<T, bool>& accessor)
    {
        throw Exception("mapped bool not implemented");
    }

    template <class T>
    void PublishingConfigReadVisitor<T>::handle_mapped_int32(const YAML::Node& node, const accessor_t<T, int32_t>& accessor)
    {
        throw Exception("mapped int32 not implemented");
    }

    template <class T>
    void PublishingConfigReadVisitor<T>::handle_mapped_int64(const YAML::Node& node, const accessor_t<T, int64_t>& accessor)
    {
        const auto source = yaml::require_enum<SourceType>(node);
        switch (source) {
        case (SourceType::Value::none):
            break;
        case (SourceType::Value::analog):
            this->builder->add_measurement_handler(
                [accessor, profile = this->profile, scale = this->get_scale(node)](const opendnp3::Analog& meas) {
                    accessor->set(*profile, static_cast<int64_t>(meas.value * scale));
                },
                get_index(node));
            break;
        case (SourceType::Value::counter):
            this->builder->add_measurement_handler(
                [accessor, profile = this->profile, scale = this->get_scale(node)](const opendnp3::Counter& meas) {
                    accessor->set(*profile, static_cast<int64_t>(meas.value * scale));
                },
                get_index(node));
            break;
        default:
            throw Exception("int64 cannot be mapped to DNP3 type: ", SourceType::to_string(source));
        }
    }

    template <class T>
    void PublishingConfigReadVisitor<T>::handle_mapped_float(const YAML::Node& node, const accessor_t<T, float>& accessor)
    {
        const auto source = yaml::require_enum<SourceType>(node);
        switch (source) {
        case (SourceType::Value::none):
            break;
        case (SourceType::Value::analog):
            this->builder->add_measurement_handler(
                [accessor, profile = this->profile, scale = this->get_scale(node)](const opendnp3::Analog& meas) {
                    accessor->set(*profile, static_cast<float>(meas.value * scale));
                },
                get_index(node));
            break;
        default:
            throw Exception("float cannot be mapped to DNP3 type: ", SourceType::to_string(source));
        }
    }

    template <class T>
    void PublishingConfigReadVisitor<T>::handle_mapped_enum(const YAML::Node& node, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor)
    {
        const auto source = yaml::require_enum<SourceType>(node);
        switch (source) {
        case (SourceType::Value::none):
            break;
        case (SourceType::Value::binary): {
            const auto true_value = get_enum_value(yaml::require_string(node, keys::when_true), commonmodule::DynamicTestKind_descriptor());
            const auto false_value = get_enum_value(yaml::require_string(node, keys::when_false), commonmodule::DynamicTestKind_descriptor());

            this->builder->add_measurement_handler(
                [accessor, profile = this->profile, true_value, false_value](const opendnp3::Binary& meas) {
                    accessor->set(*profile, meas.value ? true_value : false_value);
                },
                get_index(node));
            break;
        }
        default:
            throw Exception("enums cannot be mapped to DNP3 type: ", SourceType::to_string(source));
        }
    }
}
}

#endif
