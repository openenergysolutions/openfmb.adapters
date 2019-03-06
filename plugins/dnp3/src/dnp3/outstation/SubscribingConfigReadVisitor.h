
#ifndef OPENFMB_ADAPTER_DNP3_OUTSTATION_SUBSCRIBINGCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_DNP3_OUTSTATION_SUBSCRIBINGCONFIGREADVISITOR_H

#include <adapter-util/ProfileInfo.h>
#include <adapter-util/config/SubscribingConfigReadVisitorBase.h>
#include <adapter-util/util/Time.h>

#include "../generated/DestinationType.h"
#include "PointTracker.h"
#include "SubscriptionTypes.h"

namespace adapter {
namespace dnp3 {
    namespace outstation {

        opendnp3::DNPTime convert(const commonmodule::Timestamp& ts)
        {
            return opendnp3::DNPTime(std::chrono::duration_cast<std::chrono::milliseconds>(util::time::get(ts).time_since_epoch()).count());
        }

        template <class T>
        class SubscribingConfigReadVisitor final : public util::SubscribingConfigReadVisitorBase<T> {

            update_handler_vec_t<T> handlers;
            PointTracker& tracker;

        public:
            explicit SubscribingConfigReadVisitor(const YAML::Node& node, PointTracker& tracker);

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
            void map_to_analog(const YAML::Node& node, const util::accessor_t<T, float>& accessor);
        };

        template <class T>
        SubscribingConfigReadVisitor<T>::SubscribingConfigReadVisitor(const YAML::Node& node, PointTracker& tracker)
            : util::SubscribingConfigReadVisitorBase<T>(node)
            , tracker(tracker)
        {
        }

        template <class T>
        update_handler_vec_t<T> SubscribingConfigReadVisitor<T>::get_handlers()
        {
            return std::move(this->handlers);
        }

        template <class T>
        void SubscribingConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, bool>& accessor)
        {
            // ignored
        }

        template <class T>
        void SubscribingConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, int32_t>& accessor)
        {
            // ignored
        }

        template <class T>
        void SubscribingConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, int64_t>& accessor)
        {
            // ignored
        }

        template <class T>
        void SubscribingConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
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
                throw api::Exception("Unsupported destination type for floating point field: ", DestinationType::to_string(dest_type));
            }
        }

        template <class T>
        void SubscribingConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, int>& accessor,
                                                                  google::protobuf::EnumDescriptor const* descriptor)
        {
            // ignored
        }

        template <class T>
        void SubscribingConfigReadVisitor<T>::handle(const std::string& field_name,
                                                     const util::getter_t<T, google::protobuf::RepeatedPtrField<commonmodule::ENG_ScheduleParameter>>& getter)
        {
            throw api::Exception("DNP3 outstation subscriptions cannot contain schedule parameter lists");
        }

        template <class T>
        void SubscribingConfigReadVisitor<T>::map_to_analog(const YAML::Node& node, const util::accessor_t<T, float>& accessor)
        {
            const auto index = util::yaml::require_integer<uint16_t>(node, util::keys::index);
            const auto scale = util::yaml::require(node, util::keys::scale).as<float>();

            this->handlers.push_back(
                [index, scale, accessor](asiodnp3::UpdateBuilder& builder, const T& profile) {
                    accessor->if_present(
                        profile,
                        [&](float value) {
                            builder.Update(
                                    opendnp3::Analog(
                                            value * scale,
                                            opendnp3::Flags(0x01),
                                            // for the time being, let's use the message timestamp for the DNP3 time
                                            convert(util::profile_info<T>::get_message_info(profile).messagetimestamp())
                                    ),
                                    index
                            );
                        });
                });

            this->tracker.add_analog(index);
        }
    }
}
}

#endif
