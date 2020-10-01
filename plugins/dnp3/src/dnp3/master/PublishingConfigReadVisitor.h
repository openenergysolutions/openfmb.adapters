
#ifndef OPENFMB_ADAPTER_DNP3_MASTER_PUBLISHINGCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_DNP3_MASTER_PUBLISHINGCONFIGREADVISITOR_H

#include "adapter-util/ConfigStrings.h"

#include "adapter-util/config/PublishingConfigReadVisitorBase.h"
#include "adapter-util/config/YAMLGetters.h"

#include "adapter-util/util/EnumUtil.h"

#include "dnp3/master/IPublishConfigBuilder.h"

#include <cstdint>
#include <deque>
#include <memory>

#include <boost/numeric/conversion/cast.hpp>
#include <dnp3/generated/SourceType.h>

namespace adapter {
namespace dnp3 {
    namespace master {

        template <class T>
        class PublishingConfigReadVisitor final : public util::PublishingConfigReadVisitorBase<T> {

            const std::shared_ptr<T> profile = std::make_shared<T>();
            const api::publisher_one_t<T> publisher;
            const std::shared_ptr<IPublishConfigBuilder> builder;

        public:
            PublishingConfigReadVisitor(const YAML::Node& root, api::publisher_one_t<T> publisher,
                                        std::shared_ptr<IPublishConfigBuilder> builder);

            ~PublishingConfigReadVisitor();

        protected:
            /// ----  handlers for mapped types ----

            void handle_mapped_bool(const YAML::Node& node, const util::accessor_t<T, bool>& accessor) override;

            void handle_mapped_int32(const YAML::Node& node, const util::accessor_t<T, int32_t>& accessor) override;

            void handle_mapped_int64(const YAML::Node& node, const util::accessor_t<T, int64_t>& accessor) override;

            void handle_mapped_float(const YAML::Node& node, const util::accessor_t<T, float>& accessor) override;

            void handle_mapped_double(const YAML::Node& node, const util::accessor_t<T, double>& accessor) override;

            void handle_mapped_enum(const YAML::Node& node, const util::accessor_t<T, int>& accessor,
                                    google::protobuf::EnumDescriptor const* descriptor) override;

            /// ----  generic message init/complete handlers ----

            void add_message_init_action(const std::function<void(T&)>& action) override;

            void add_message_complete_action(const std::function<void(T&)>& action) override;

        private:
            template<typename IntT>
            void handle_mapped_int(const YAML::Node& node, const util::accessor_t<T, IntT>& accessor);
        };

        template <class T>
        PublishingConfigReadVisitor<T>::PublishingConfigReadVisitor(const YAML::Node& root,
                                                                    api::publisher_one_t<T> publisher,
                                                                    std::shared_ptr<IPublishConfigBuilder> builder)
            : util::PublishingConfigReadVisitorBase<T>(root)
            , publisher(std::move(publisher))
            , builder(std::move(builder))
        {
            this->builder->add_start_action(
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
        void PublishingConfigReadVisitor<T>::handle_mapped_bool(const YAML::Node& node,
                                                                const util::accessor_t<T, bool>& accessor)
        {
            const auto source = util::yaml::require_enum<SourceType>(node);
            switch (source) {
            case (SourceType::Value::none):
                break;
            case (SourceType::Value::binary):
                this->builder->add_measurement_handler(
                    [accessor, profile = this->profile](
                        const opendnp3::Binary& meas) {
                        accessor->set(*profile, meas.value);
                    },
                    util::yaml::get::index(node));
                break;
            default:
                throw api::Exception("boolean value cannot be mapped to DNP3 type: ", SourceType::to_string(source));
            }
        }

        template <class T>
        void PublishingConfigReadVisitor<T>::handle_mapped_int32(const YAML::Node& node,
                                                                 const util::accessor_t<T, int32_t>& accessor)
        {
            handle_mapped_int(node, accessor);
        }

        template <class T>
        void PublishingConfigReadVisitor<T>::handle_mapped_int64(const YAML::Node& node,
                                                                 const util::accessor_t<T, int64_t>& accessor)
        {
            handle_mapped_int(node, accessor);
        }

        template <typename T>
        template <typename IntT>
        void PublishingConfigReadVisitor<T>::handle_mapped_int(const YAML::Node& node, const util::accessor_t<T, IntT>& accessor)
        {
            const auto source = util::yaml::require_enum<SourceType>(node);
            switch (source) {
            case (SourceType::Value::none):
                break;
            case (SourceType::Value::analog):
                this->builder->add_measurement_handler(
                    [accessor, profile = this->profile, scale = util::yaml::get::scale(node)](
                        const opendnp3::Analog& meas) {
                        accessor->set(*profile, static_cast<IntT>(meas.value * scale));
                    },
                    util::yaml::get::index(node));
                break;
            case (SourceType::Value::counter):
                this->builder->add_measurement_handler(
                    [accessor, profile = this->profile, scale = util::yaml::get::scale(node)](
                        const opendnp3::Counter& meas) {
                        accessor->set(*profile, static_cast<IntT>(meas.value * scale));
                    },
                    util::yaml::get::index(node));
                break;
            default:
                throw api::Exception("integer cannot be mapped to DNP3 type: ", SourceType::to_string(source));
            }
        }

        template <class T>
        void PublishingConfigReadVisitor<T>::handle_mapped_float(const YAML::Node& node,
                                                                 const util::accessor_t<T, float>& accessor)
        {
            const auto source = util::yaml::require_enum<SourceType>(node);
            switch (source) {
            case (SourceType::Value::none):
                break;
            case (SourceType::Value::analog):
                this->builder->add_measurement_handler(
                    [accessor, profile = this->profile, scale = util::yaml::get::scale(node)](
                        const opendnp3::Analog& meas) {
                        accessor->set(*profile, static_cast<float>(meas.value * scale));
                    },
                    util::yaml::get::index(node));
                break;
            default:
                throw api::Exception("float cannot be mapped to DNP3 type: ", SourceType::to_string(source));
            }
        }

        template <class T>
        void PublishingConfigReadVisitor<T>::handle_mapped_double(const YAML::Node& node,
                                                                 const util::accessor_t<T, double>& accessor)
        {
            const auto source = util::yaml::require_enum<SourceType>(node);
            switch (source) {
            case (SourceType::Value::none):
                break;
            case (SourceType::Value::analog):
                this->builder->add_measurement_handler(
                    [accessor, profile = this->profile, scale = util::yaml::get::scale(node)](
                        const opendnp3::Analog& meas) {
                        accessor->set(*profile, static_cast<double>(meas.value * scale));
                    },
                    util::yaml::get::index(node));
                break;
            default:
                throw api::Exception("double cannot be mapped to DNP3 type: ", SourceType::to_string(source));
            }
        }

        template <class T>
        void PublishingConfigReadVisitor<T>::handle_mapped_enum(const YAML::Node& node,
                                                                const util::accessor_t<T, int>& accessor,
                                                                google::protobuf::EnumDescriptor const* descriptor)
        {
            const auto source = util::yaml::require_enum<SourceType>(node);
            switch (source) {
            case (SourceType::Value::none):
                break;
            case (SourceType::Value::binary): {
                const auto true_value = util::yaml::get::enum_value(node, util::keys::when_true, *descriptor);
                const auto false_value = util::yaml::get::enum_value(node, util::keys::when_false, *descriptor);

                this->builder->add_measurement_handler(
                    [accessor, profile = this->profile, true_value, false_value](
                        const opendnp3::Binary& meas) {
                        accessor->set(*profile, meas.value ? true_value : false_value);
                    },
                    util::yaml::get::index(node));
                break;
            }
            case (SourceType::Value::analog):
            case (SourceType::Value::counter): {
                const auto index = util::yaml::get::index(node);
                std::map<uint32_t, int> mappings;
                const auto mapping_node = util::yaml::require(node, util::keys::mapping);
                util::yaml::foreach(mapping_node, [&mappings, descriptor](const YAML::Node& node) {
                    const auto value = util::yaml::require_integer<uint32_t>(node, util::keys::value);
                    const auto enum_value = util::yaml::get::enum_value(node, util::keys::name, *descriptor);
                    mappings.insert({value, enum_value});
                });

                if(source == SourceType::Value::analog)
                {
                    this->builder->add_measurement_handler(
                    [accessor, profile = this->profile, index, mappings](const opendnp3::Analog& meas) {
                        for(const auto& it : mappings)
                        {
                            if(std::abs(static_cast<double>(it.first) - meas.value) < 0.001)
                            {
                                accessor->set(*profile, it.second);
                                return;
                            }
                        }
                    }, index);
                }
                else if(source == SourceType::Value::counter)
                {
                    this->builder->add_measurement_handler(
                    [accessor, profile = this->profile, index, mappings](const opendnp3::Counter& meas) {
                        const auto it = mappings.find(meas.value);
                        if(it != mappings.end())
                        {
                            accessor->set(*profile, it->second);
                        }
                    }, index);
                }
                break;
            }
            default:
                throw api::Exception("enums cannot be mapped to DNP3 type: ", SourceType::to_string(source));
            }
        }

        template <class T>
        void PublishingConfigReadVisitor<T>::add_message_init_action(const std::function<void(T&)>& action)
        {
            this->builder->add_start_action([action, profile = this->profile]() {
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

#endif
