
#ifndef OPENFMB_ADAPTER_DNP3_PUBLISHINGCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_DNP3_PUBLISHINGCONFIGREADVISITOR_H

#include "adapter-api/ConfigStrings.h"
#include "adapter-api/config/PublishingConfigReadVisitorBase.h"

#include "IPublishConfigBuilder.h"

#include <cstdint>
#include <deque>
#include <memory>

#include <boost/numeric/conversion/cast.hpp>

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

        void handle_mapped_bool(const YAML::Node& node, const accessor_t<T, bool>& accessor) override
        {
            throw Exception("mapped bool not implemented");
        }

        void handle_mapped_int32(const YAML::Node& node, const accessor_t<T, int32_t>& accessor) override
        {
            throw Exception("mapped int32 not implemented");
        }

        void handle_mapped_int64(const YAML::Node& node, const accessor_t<T, int64_t>& accessor) override
        {
            throw Exception("mapped int64 not implemented");
        }

        void handle_mapped_float(const YAML::Node& node, const accessor_t<T, float>& accessor) override
        {
            throw Exception("mapped float not implemented");
        }

        void handle_mapped_enum(const YAML::Node& node, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor) override
        {
            throw Exception("mapped enum not implemented");
        }

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
    };
}
}

#endif
