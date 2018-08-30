#ifndef OPENFMB_ADAPTER_GOOSE_PUB_PUBLISHINGCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_GOOSE_PUB_PUBLISHINGCONFIGREADVISITOR_H

#include "ConfigStrings.h"
#include "adapter-api/IPublisher.h"
#include "adapter-api/config/PublishingConfigReadVisitorBase.h"
#include "adapter-api/util/Time.h"
#include "pub/IPublishConfigBuilder.h"
#include <string>
#include <unordered_set>

namespace adapter {
namespace goose {

    template <typename T>
    class PublishingConfigReadVisitor final : public PublishingConfigReadVisitorBase<T> {
    public:
        PublishingConfigReadVisitor(const YAML::Node& root, publisher_t publisher, IPublishConfigBuilder& builder)
            : PublishingConfigReadVisitorBase<T>{ root }
            , m_publisher{ std::move(publisher) }
            , m_builder{ builder }
            , m_profile{ std::make_shared<T>() }
        {
            m_builder.add_start_action([profile = m_profile]() {
                profile->Clear();
            });
        }

        ~PublishingConfigReadVisitor()
        {
            m_builder.add_end_action([publisher = m_publisher, profile = m_profile]() {
                publisher->publish(*profile);
            });
        }

    protected:
        void handle_mapped_bool(const YAML::Node& node, const accessor_t<T, bool>& accessor) final
        {
            std::string name;
            if(get_name(node, name))
            {
                m_builder.add_bool_handler(name, [accessor, profile = m_profile](const bool& value) {
                    accessor->set(*profile, value);
                });
            }
        }

        void handle_mapped_int32(const YAML::Node& node, const accessor_t<T, int32_t>& accessor) final
        {
            std::string name;
            if(get_name(node, name))
            {
                m_builder.add_int32_handler(name, [accessor, profile = m_profile](const int32_t& value) {
                    accessor->set(*profile, value);
                });
            }
        }

        void handle_mapped_int64(const YAML::Node& node, const accessor_t<T, int64_t>& accessor) final
        {
            std::string name;
            if(get_name(node, name))
            {
                m_builder.add_int64_handler(name, [accessor, profile = m_profile](const int64_t& value) {
                    accessor->set(*profile, value);
                });
            }
        }

        void handle_mapped_float(const YAML::Node& node, const accessor_t<T, float>& accessor) final
        {
            std::string name;
            if(get_name(node, name))
            {
                m_builder.add_float_handler(name, [accessor, profile = m_profile](const float& value) {
                    accessor->set(*profile, value);
                });
            }
        }

        void handle_mapped_string(const YAML::Node& node, const accessor_t<T, std::string>& accessor) final
        {
            std::string name;
            if(get_name(node, name))
            {
                m_builder.add_string_handler(name, [accessor, profile = m_profile](const std::string& value) {
                    accessor->set(*profile, value);
                });
            }
        }

        void handle_mapped_enum(const YAML::Node& node, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor) final
        {
            throw Exception("GOOSE adapter does not support mapped enum");
        }

        void handle_mapped_quality(const YAML::Node& node, const message_accessor_t<T, commonmodule::Quality>& accessor) final
        {
            std::string name;
            if(get_name(node, name))
            {
                m_builder.add_bitstring_handler(name, [accessor, profile = m_profile](const goose_cpp::BitString& value) {
                    if(value.size() < 13) {
                        throw Exception{"Quality bitstring does not have the required length."};
                    }

                    auto quality = accessor->mutable_get(*profile);

                    auto first_bit = value.test(0);
                    auto second_bit = value.test(1);
                    if(!first_bit && !second_bit) quality->set_validity(commonmodule::ValidityKind::ValidityKind_good);
                    else if(!first_bit && second_bit) quality->set_validity(commonmodule::ValidityKind::ValidityKind_invalid);
                    else if(first_bit && !second_bit) quality->set_validity(commonmodule::ValidityKind::ValidityKind_reserved);
                    else quality->set_validity(commonmodule::ValidityKind::ValidityKind_questionable);

                    auto detailqual = quality->mutable_detailqual();
                    detailqual->set_overflow(value.test(2));
                    detailqual->set_outofrange(value.test(3));
                    detailqual->set_badreference(value.test(4));
                    detailqual->set_oscillatory(value.test(5));
                    detailqual->set_failure(value.test(6));
                    detailqual->set_olddata(value.test(7));
                    detailqual->set_inconsistent(value.test(8));
                    detailqual->set_inaccurate(value.test(9));

                    if(value.test(10)) quality->set_source(commonmodule::SourceKind::SourceKind_substituted);
                    else quality->set_source(commonmodule::SourceKind::SourceKind_process);

                    quality->set_test(value.test(11));
                    quality->set_operatorblocked(value.test(12));
                });
            }
        }

        void handle_mapped_timestamp(const YAML::Node& node, const message_accessor_t<T, commonmodule::Timestamp>& accessor) final
        {
            std::string name;
            if(get_name(node, name))
            {
                m_builder.add_timestamp_handler(name, [accessor, profile = m_profile](const std::chrono::system_clock::time_point& value) {
                    time::set(value, *accessor->mutable_get(*profile));
                });
            }
        }

        void add_message_init_action(const std::function<void(T&)>& action) final
        {
            m_builder.add_start_action([action, profile = m_profile]() {
                action(*profile);
            });
        }

        void add_message_complete_action(const std::function<void(T&)>& action) final
        {
            m_builder.add_end_action([action, profile = m_profile]() {
                action(*profile);
            });
        }

    private:
        bool get_name(const YAML::Node& node, std::string& value)
        {
            const auto name_node = node[keys::name];
            if(name_node)
            {
                value = name_node.as<std::string>();
                if(!value.empty())
                {
                    auto result = m_names.insert(value);
                    if (!result.second) {
                        throw Exception{ "Duplicate mapping name \"", value, "\"." };
                    };

                    return true;
                }
            }

            return false;
        }

        const publisher_t m_publisher;
        IPublishConfigBuilder& m_builder;
        const std::shared_ptr<T> m_profile;
        std::unordered_set<std::string> m_names;
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_PUB_PUBLISHINGCONFIGREADVISITOR_H
