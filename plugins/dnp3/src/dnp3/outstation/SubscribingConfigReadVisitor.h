
#ifndef OPENFMB_ADAPTER_DNP3_OUTSTATION_SUBSCRIBINGCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_DNP3_OUTSTATION_SUBSCRIBINGCONFIGREADVISITOR_H

#include <adapter-util/ProfileInfo.h>
#include <adapter-util/config/SubscribingConfigReadVisitorBase.h>

namespace adapter {
namespace dnp3 {
    namespace outstation {

        template <class T>
        class SubscribingConfigReadVisitor final : public util::SubscribingConfigReadVisitorBase<T> {

        public:
            explicit SubscribingConfigReadVisitor(const YAML::Node& root)
                : util::SubscribingConfigReadVisitorBase<T>(root)
            {
            }

            void subscribe(api::Logger logger, api::IMessageBus& bus)
            {
            }

            void handle(const std::string& field_name,
                        const util::getter_t<T, google::protobuf::RepeatedPtrField<commonmodule::ENG_ScheduleParameter>>& getter) override;

            void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, bool>& accessor) override;

            void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int32_t>& accessor) override;

            void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int64_t>& accessor) override;

            void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, float>& accessor) override;

            void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int>& accessor,
                                     google::protobuf::EnumDescriptor const* descriptor) override;
        };

        template <class T>
        void SubscribingConfigReadVisitor<T>::handle_mapped_field(const YAML::Node& node,
                                                                  const util::accessor_t<T, bool>& accessor)
        {
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
            // ignored
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
    }
}
}

#endif
