
#ifndef OPENFMB_ADAPTER_DNP3_OUTSTATION_CONTROLCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_DNP3_OUTSTATION_CONTROLCONFIGREADVISITOR_H

#include <adapter-util/ProfileInfo.h>
#include <adapter-util/config/PublishingConfigReadVisitorBase.h>
#include <adapter-util/util/Time.h>

namespace adapter {
namespace dnp3 {
    namespace outstation {

        template <class T>
        class ControlConfigReadVisitor final : public util::PublishingConfigReadVisitorBase<T> {

            ICommandConfig& config;

        public:
            ControlConfigReadVisitor(const YAML::Node& node, ICommandConfig& config);

        protected:
            void handle_mapped_bool(const YAML::Node& node, const util::accessor_t<T, bool>& accessor) override
            {
            }

            void handle_mapped_int32(const YAML::Node& node, const util::accessor_t<T, int>& accessor) override
            {
            }

            void handle_mapped_int64(const YAML::Node& node, const util::accessor_t<T, long>& accessor) override
            {
            }

            void handle_mapped_float(const YAML::Node& node, const util::accessor_t<T, float>& accessor) override
            {
            }

            void handle_mapped_enum(const YAML::Node& node, const util::accessor_t<T, int>& accessor,
                                    google::protobuf::EnumDescriptor const* descriptor) override
            {
            }

            void add_message_init_action(const std::function<void(T&)>& init) override
            {
            }

            void add_message_complete_action(const std::function<void(T&)>& init) override
            {
            }

        private:
        };

        template <class T>
        ControlConfigReadVisitor<T>::ControlConfigReadVisitor(const YAML::Node& node, ICommandConfig& config)
             : util::PublishingConfigReadVisitorBase<T>(node)
             , config(config)
        {
        }
    }
}
}

#endif
