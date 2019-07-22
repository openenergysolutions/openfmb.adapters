
#ifndef OPENFMB_ADAPTER_DNP3_OUTSTATION_MEASUREMENTCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_DNP3_OUTSTATION_MEASUREMENTCONFIGREADVISITOR_H

#include <adapter-util/ProfileInfo.h>
#include <adapter-util/config/SubscribingConfigReadVisitorBase.h>
#include <adapter-util/util/Time.h>

#include <opendnp3/outstation/DatabaseConfig.h>

#include "../generated/DestinationType.h"
#include "SubscriptionTypes.h"

namespace adapter {
namespace dnp3 {
    namespace outstation {

        opendnp3::DNPTime convert(const commonmodule::Timestamp& ts)
        {
            return opendnp3::DNPTime(std::chrono::duration_cast<std::chrono::milliseconds>(util::time::get(ts).time_since_epoch()).count());
        }

        opendnp3::Counter get_counter(int64_t value, const commonmodule::Timestamp& ts)
        {
            const auto max = std::numeric_limits<uint32_t>::max();

            // the OpenFMB counter range (int64) exceeds the DNP3 range (uint32) so we have to do range checking
            if (value < 0) {
                // a value < 0 is non sensical so map it 0 w/ a flag
                return { 0, opendnp3::Flags(static_cast<uint8_t>(opendnp3::CounterQuality::DISCONTINUITY)), convert(ts) };
            } else if (value > max) {
                // use the modulo here since that's what a DNP3 counter would have to do anyway
                return { static_cast<uint32_t>(value % max), opendnp3::Flags(0x01), convert(ts) };
            } else {
                return { static_cast<uint32_t>(value), opendnp3::Flags(0x01), convert(ts) };
            }
        }

        template <class T>
        std::map<int, T> read_enum_mapping(const YAML::Node& node, google::protobuf::EnumDescriptor const* descriptor, T (*read_value)(const YAML::Node&))
        {
            std::map<int, T> map;
            util::yaml::foreach (
                node,
                [&](const YAML::Node& elem) {
                    const auto name = util::yaml::require_string(elem, util::keys::name);
                    const auto enum_value = descriptor->FindValueByName(name);
                    if (!enum_value) {
                        throw api::Exception(node, "Unknown value name ", name, " for enum ", descriptor->name());
                    }
                    map[enum_value->number()] = read_value(elem);
                });
            return map;
        }

        template <class T>
        class MeasurementConfigReadVisitor final : public util::SubscribingConfigReadVisitorBase<T> {

            update_handler_vec_t<T> handlers;
            opendnp3::DatabaseConfig& db_config;

        public:
            explicit MeasurementConfigReadVisitor(const YAML::Node& node, opendnp3::DatabaseConfig& db_config);

            update_handler_vec_t<T> get_handlers();

            void handle(const std::string& field_name,
                        const util::getter_t<T, google::protobuf::RepeatedPtrField<commonmodule::ENG_ScheduleParameter>>& getter) override;

            void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, bool>& accessor) override;

            void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int32_t>& accessor) override;

            void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int64_t>& accessor) override;

            void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, float>& accessor) override;

            void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int>& accessor,
                                     google::protobuf::EnumDescriptor const* descriptor) override;

        private:
            void map_to_binary(const YAML::Node& node, const util::accessor_t<T, bool>& accessor);

            void map_to_analog(const YAML::Node& node, const util::accessor_t<T, float>& accessor);

            void map_to_analog(const YAML::Node& node, const util::accessor_t<T, int64_t>& accessor);

            void map_to_counter(const YAML::Node& node, const util::accessor_t<T, int64_t>& accessor);

            void map_to_binary(const YAML::Node& node, const util::accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor);

            void map_to_analog(const YAML::Node& node, const util::accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor);
        };

        template <class T>
        MeasurementConfigReadVisitor<T>::MeasurementConfigReadVisitor(const YAML::Node& node, opendnp3::DatabaseConfig& db_config)
            : util::SubscribingConfigReadVisitorBase<T>(node)
            , db_config(db_config)
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
            const auto dest_type = util::yaml::require_enum<DestinationType>(node);
            switch (dest_type) {
            case (DestinationType::Value::none):
                break;
            case (DestinationType::Value::binary):
                this->map_to_binary(node, accessor);
                break;
            default:
                throw api::Exception(node.Mark(), "Unsupported destination type for bool field: ", DestinationType::to_string(dest_type));
            }
        }

        template <class T>
        void MeasurementConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, int32_t>& accessor)
        {
            throw api::Exception(node.Mark(), "DNP3 outstation subscriptions do not support int32 mapping");
        }

        template <class T>
        void MeasurementConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, int64_t>& accessor)
        {
            const auto dest_type = util::yaml::require_enum<DestinationType>(node);
            switch (dest_type) {
            case (DestinationType::Value::none):
                break;
            case (DestinationType::Value::analog):
                this->map_to_analog(node, accessor);
                break;
            case (DestinationType::Value::counter):
                this->map_to_counter(node, accessor);
                break;
            default:
                throw api::Exception(node.Mark(), "Unsupported destination type for int64 field: ", DestinationType::to_string(dest_type));
            }
        }

        template <class T>
        void MeasurementConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, float>& accessor)
        {
            const auto dest_type = util::yaml::require_enum<DestinationType>(node);
            switch (dest_type) {
            case (DestinationType::Value::none):
                break;
            case (DestinationType::Value::analog):
                this->map_to_analog(node, accessor);
                break;
            default:
                throw api::Exception(node.Mark(), "Unsupported destination type for floating point field: ", DestinationType::to_string(dest_type));
            }
        }

        template <class T>
        void MeasurementConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, int>& accessor,
                                                                  google::protobuf::EnumDescriptor const* descriptor)
        {
            const auto dest_type = util::yaml::require_enum<DestinationType>(node);
            switch (dest_type) {
            case (DestinationType::Value::none):
                break;
            case (DestinationType::Value::binary):
                this->map_to_binary(node, accessor, descriptor);
                break;
            case (DestinationType::Value::analog):
                this->map_to_analog(node, accessor, descriptor);
                break;
            default:
                throw api::Exception(node.Mark(), "Unsupported destination type for enum field: ", DestinationType::to_string(dest_type));
            }
        }

        template <class T>
        void MeasurementConfigReadVisitor<T>::handle(const std::string& field_name,
                                                     const util::getter_t<T, google::protobuf::RepeatedPtrField<commonmodule::ENG_ScheduleParameter>>& getter)
        {
            throw api::Exception("DNP3 outstation subscriptions cannot contain schedule parameter lists");
        }

        template <class T>
        void MeasurementConfigReadVisitor<T>::map_to_binary(const YAML::Node& node, const util::accessor_t<T, bool>& accessor)
        {
            const auto index = util::yaml::require_integer<uint16_t>(node, util::keys::index);
            const auto negate = util::yaml::require(node, util::keys::negate).as<bool>();
            const auto process = negate ? std::function<bool(bool)>{[](bool value) { return !value; }} : std::function<bool(bool)>{[](bool value) { return value; }};

            this->handlers.push_back(
                [index, process, accessor](opendnp3::UpdateBuilder& builder, const T& profile) {
                    accessor->if_present(
                        profile,
                        [&](bool value) {
                            builder.Update(
                                opendnp3::Binary(
                                    process(value),
                                    opendnp3::Flags(0x01),
                                    // for the time being, let's use the message timestamp for the DNP3 time
                                    convert(util::profile_info<T>::get_message_info(profile).messagetimestamp())),
                                index);
                        });
                });

            this->db_config.binary_input[index] = {};
        }

        template <class T>
        void MeasurementConfigReadVisitor<T>::map_to_analog(const YAML::Node& node, const util::accessor_t<T, float>& accessor)
        {
            const auto index = util::yaml::require_integer<uint16_t>(node, util::keys::index);
            const auto scale = util::yaml::require(node, util::keys::scale).as<float>();

            this->handlers.push_back(
                [index, scale, accessor](opendnp3::UpdateBuilder& builder, const T& profile) {
                    accessor->if_present(
                        profile,
                        [&](float value) {
                            builder.Update(
                                opendnp3::Analog(
                                    value * scale,
                                    opendnp3::Flags(0x01),
                                    // for the time being, let's use the message timestamp for the DNP3 time
                                    convert(util::profile_info<T>::get_message_info(profile).messagetimestamp())),
                                index);
                        });
                });

            this->db_config.analog_input[index] = {};
        }

        template <class T>
        void MeasurementConfigReadVisitor<T>::map_to_analog(const YAML::Node& node, const util::accessor_t<T, int64_t>& accessor)
        {
            const auto index = util::yaml::require_integer<uint16_t>(node, util::keys::index);
            const auto scale = util::yaml::require(node, util::keys::scale).as<float>();

            this->handlers.push_back(
                [index, scale, accessor](opendnp3::UpdateBuilder& builder, const T& profile) {
                    accessor->if_present(
                        profile,
                        [&](int64_t value) {
                            builder.Update(
                                opendnp3::Analog(
                                    value * scale,
                                    opendnp3::Flags(0x01),
                                    // for the time being, let's use the message timestamp for the DNP3 time
                                    convert(util::profile_info<T>::get_message_info(profile).messagetimestamp())),
                                index);
                        });
                });

            this->db_config.analog_input[index] = {};
        }

        template <class T>
        void MeasurementConfigReadVisitor<T>::map_to_counter(const YAML::Node& node, const util::accessor_t<T, int64_t>& accessor)
        {
            const auto index = util::yaml::require_integer<uint16_t>(node, util::keys::index);

            this->handlers.push_back(
                [index, accessor](opendnp3::UpdateBuilder& builder, const T& profile) {
                    accessor->if_present(
                        profile,
                        [&](int64_t value) {
                            builder.Update(
                                get_counter(value, util::profile_info<T>::get_message_info(profile).messagetimestamp()),
                                index);
                        });
                });

            this->db_config.counter[index] = {};
        }

        template <class T>
        void MeasurementConfigReadVisitor<T>::map_to_binary(const YAML::Node& node, const util::accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor)
        {
            const auto index = util::yaml::require_integer<uint16_t>(node, util::keys::index);

            auto mapping = read_enum_mapping<bool>(
                util::yaml::require(node, util::keys::mapping),
                descriptor,
                [](const YAML::Node& node) -> bool {
                    return util::yaml::require(node, util::keys::value).as<bool>();
                });

            this->handlers.push_back(
                [index, accessor, map = std::move(mapping)](opendnp3::UpdateBuilder& builder, const T& profile) {
                    accessor->if_present(
                        profile,
                        [&](int value) {
                            const auto iter = map.find(value);
                            if (iter == map.end()) {
                                // set the value to offline to indicate the mapping is incomplete
                                builder.Modify(opendnp3::FlagsType::BinaryInput, index, index, 0x00);
                            } else {
                                builder.Update(
                                    opendnp3::Binary(
                                        iter->second,
                                        opendnp3::Flags(0x01),
                                        convert(util::profile_info<T>::get_message_info(profile).messagetimestamp())),
                                    index);
                            }
                        });
                });

            this->db_config.binary_input[index] = {};
        }

        template <class T>
        void MeasurementConfigReadVisitor<T>::map_to_analog(const YAML::Node& node, const util::accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor)
        {
            const auto index = util::yaml::require_integer<uint16_t>(node, util::keys::index);

            auto mapping = read_enum_mapping<int32_t>(
                util::yaml::require(node, util::keys::mapping),
                descriptor,
                [](const YAML::Node& node) -> int32_t {
                    return util::yaml::require_integer<int32_t>(node, util::keys::value);
                });

            this->handlers.push_back(
                [index, accessor, map = std::move(mapping)](opendnp3::UpdateBuilder& builder, const T& profile) {
                    accessor->if_present(
                        profile,
                        [&](int value) {
                            const auto iter = map.find(value);
                            if (iter == map.end()) {
                                // set the value to offline to indicate the mapping is incomplete
                                builder.Modify(opendnp3::FlagsType::AnalogInput, index, index, 0x00);
                            } else {
                                builder.Update(
                                    opendnp3::Analog(
                                        iter->second,
                                        opendnp3::Flags(0x01),
                                        convert(util::profile_info<T>::get_message_info(profile).messagetimestamp())),
                                    index);
                            }
                        });
                });

            this->db_config.analog_input[index] = {};
        }
    }
}
}

#endif
