#ifndef OPENFMB_ADAPTER_GOOSE_PUBLISHINGCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_GOOSE_PUBLISHINGCONFIGREADVISITOR_H

#include <string>
#include "adapter-api/config/PublishingConfigReadVisitorBase.h"
#include "adapter-api/IPublisher.h"
#include "ConfigStrings.h"
#include "IPublishConfigBuilder.h"

namespace adapter
{
namespace goose
{

template <typename T>
class PublishingConfigReadVisitor final : public PublishingConfigReadVisitorBase<T>
{
public:
    PublishingConfigReadVisitor(const YAML::Node& root, publisher_t publisher, std::shared_ptr<IPublishConfigBuilder> builder)
            : PublishingConfigReadVisitorBase<T>{root}
            , m_publisher{std::move(publisher)}
            , m_builder{std::move(builder)}
            , m_profile{std::make_shared<T>()}
    {
        m_builder->add_start_action([profile = m_profile]() {
            profile->Clear();
        });
    }

    ~PublishingConfigReadVisitor()
    {
        m_builder->add_end_action([publisher = m_publisher, profile = m_profile]() {
            publisher->publish(*profile);
        });
    }

protected:
    void handle_mapped_bool(const YAML::Node& node, const accessor_t<T, bool>& accessor) final
    {
        m_builder->add_bool_handler([accessor, profile = m_profile](const bool& value) {
            accessor->set(*profile, value);
        }, get_path(node));
    }

    void handle_mapped_int32(const YAML::Node& node, const accessor_t<T, int32_t>& accessor) final
    {
        m_builder->add_int32_handler([accessor, profile = m_profile](const int32_t& value) {
            accessor->set(*profile, value);
        }, get_path(node));
    }

    void handle_mapped_int64(const YAML::Node& node, const accessor_t<T, int64_t>& accessor) final
    {
        m_builder->add_int64_handler([accessor, profile = m_profile](const int64_t& value) {
            accessor->set(*profile, value);
        }, get_path(node));
    }

    void handle_mapped_float(const YAML::Node& node, const accessor_t<T, float>& accessor) final
    {
        m_builder->add_float_handler([accessor, profile = m_profile](const float& value) {
            accessor->set(*profile, value);
        }, get_path(node));
    }

    void handle_mapped_enum(const YAML::Node& node, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor) final
    {
        throw Exception("GOOSE adapter does not support mapped enum");
    }

    void add_message_init_action(const std::function<void(T&)>& action) final
    {
        m_builder->add_start_action([action, profile = m_profile]() {
            action(*profile);
        });
    }

    void add_message_complete_action(const std::function<void(T&)>& action) final
    {
        m_builder->add_end_action([action, profile = m_profile]() {
            action(*profile);
        });
    }

private:
    GoosePath get_path(const YAML::Node& node) const
    {
        auto path_str = yaml::require_string(node, keys::path);
        return GoosePath::from_string(path_str);
    }

    const publisher_t m_publisher;
    const std::shared_ptr<IPublishConfigBuilder> m_builder;
    const std::shared_ptr<T> m_profile;
};

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_PUBLISHINGCONFIGREADVISITOR_H
