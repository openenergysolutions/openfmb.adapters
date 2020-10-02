#ifndef OPENFMB_ADAPTER_GOOSE_SUB_SUBSCRIBINGCONFIGREADER_H
#define OPENFMB_ADAPTER_GOOSE_SUB_SUBSCRIBINGCONFIGREADER_H

#include "generated/QualityMappingType.h"
#include "sub/ConstantMessageAccessor.h"
#include "sub/QualityTemplatesConfigReader.h"
#include "sub/TimeQualityMessageAccessor.h"
#include "sub/TimeQualityTemplatesConfigReader.h"
#include <goose-cpp/messages/BitString.h>
#include <adapter-api/Exception.h>
#include <adapter-api/Logger.h>
#include <adapter-util/config/SubscribingConfigReadVisitorBase.h>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>

namespace adapter {
namespace goose {

    template <typename T>
    class SubscribingConfigReadVisitor final : public util::SubscribingConfigReadVisitorBase<T> {
    public:
        SubscribingConfigReadVisitor(const YAML::Node& root, api::Logger logger, const QualityTemplatesConfigReader& quality_templates, const TimeQualityTemplatesConfigReader& time_quality_templates)
            : util::SubscribingConfigReadVisitorBase<T>(root)
            , m_logger{ std::move(logger) }
            , m_quality_templates{ quality_templates }
            , m_time_quality_templates{ time_quality_templates }
        {
        }

        bool has(const std::string& name) const
        {
            return m_names.find(name) != m_names.end();
        }

        bool get_bool(const std::string& name, util::accessor_t<T, bool>& accessor) const
        {
            auto search = m_bool_accessors.find(name);
            if (search == m_bool_accessors.end()) {
                return false;
            };

            accessor = search->second;
            return true;
        }

        bool get_int32(const std::string& name, util::accessor_t<T, int32_t>& accessor) const
        {
            auto search = m_int32_accessors.find(name);
            if (search == m_int32_accessors.end()) {
                return false;
            };

            accessor = search->second;
            return true;
        }

        bool get_int64(const std::string& name, util::accessor_t<T, int64_t>& accessor) const
        {
            auto search = m_int64_accessors.find(name);
            if (search == m_int64_accessors.end()) {
                return false;
            };

            accessor = search->second;
            return true;
        }

        bool get_float(const std::string& name, util::accessor_t<T, float>& accessor) const
        {
            auto search = m_float_accessors.find(name);
            if (search == m_float_accessors.end()) {
                return false;
            };

            accessor = search->second;
            return true;
        }

        bool get_double(const std::string& name, util::accessor_t<T, double>& accessor) const
        {
            auto search = m_double_accessors.find(name);
            if (search == m_double_accessors.end()) {
                return false;
            };

            accessor = search->second;
            return true;
        }


        bool get_string(const std::string& name, util::accessor_t<T, std::string>& accessor) const
        {
            auto search = m_string_accessors.find(name);
            if (search == m_string_accessors.end()) {
                return false;
            };

            accessor = search->second;
            return true;
        }

        bool get_enum(const std::string& name, std::pair<util::accessor_t<T, int>, std::unordered_map<int, goose_cpp::BitString>>& accessor) const
        {
            auto search = m_enum_accessors.find(name);
            if (search == m_enum_accessors.end()) {
                return false;
            };

            accessor = search->second;
            return true;
        }

        bool get_quality(const std::string& name, util::message_accessor_t<T, commonmodule::Quality>& accessor) const
        {
            auto search = m_quality_accessors.find(name);
            if (search == m_quality_accessors.end()) {
                return false;
            };

            accessor = search->second;
            return true;
        }

        bool get_timestamp(const std::string& name, util::message_accessor_t<T, commonmodule::Timestamp>& accessor) const
        {
            auto search = m_timestamp_accessors.find(name);
            if (search == m_timestamp_accessors.end()) {
                return false;
            };

            accessor = search->second;
            return true;
        }

        bool get_time_quality(const std::string& name, util::message_accessor_t<T, commonmodule::TimeQuality>& accessor) const
        {
            auto search = m_time_quality_accessors.find(name);
            if (search == m_time_quality_accessors.end()) {
                return false;
            };

            accessor = search->second;
            return true;
        }

        const std::string& get_mrid() const
        {
            return this->get_primary_mrid();
        }

    protected:
        void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, bool>& accessor) final
        {
            std::string name;
            if (get_name(node, keys::name, name)) {
                m_bool_accessors.insert({ name, accessor });
            }
        }

        void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int32_t>& accessor) final
        {
            std::string name;
            if (get_name(node, keys::name, name)) {
                m_int32_accessors.insert({ name, accessor });
            }
        }

        void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int64_t>& accessor) final
        {
            std::string name;
            if (get_name(node, keys::name, name)) {
                m_int64_accessors.insert({ name, accessor });
            }
        }

        void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, float>& accessor) final
        {
            std::string name;
            if (get_name(node, keys::name, name)) {
                m_float_accessors.insert({ name, accessor });
            }
        }

        void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, double>& accessor) final
        {
            std::string name;
            if (get_name(node, keys::name, name)) {
                m_double_accessors.insert({ name, accessor });
            }
        }

        void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, std::string>& accessor) final
        {
            std::string name;
            if (get_name(node, keys::name, name)) {
                m_string_accessors.insert({ name, accessor });
            }
        }

        void handle_mapped_field(const YAML::Node& node, const util::accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor) final
        {
            std::string name;
            if (get_name(node, keys::name, name)) {
                std::unordered_map<int, goose_cpp::BitString> mapping{};
                util::yaml::foreach (util::yaml::require(node, util::keys::mapping), [&](const YAML::Node& node) {
                    const auto name = util::yaml::require_string(node, util::keys::name);
                    const auto value = descriptor->FindValueByName(name);
                    if (!value)
                        throw api::Exception("Unknown enum value: ", name);
                    const auto output = util::yaml::require_string(node, util::keys::value);
                    auto bit_string = goose_cpp::BitString::from_string(output);
                    mapping.insert({ value->number(), bit_string });
                });

                m_enum_accessors.insert({ name, std::make_pair(accessor, mapping) });
            }
        }

        void handle_mapped_field(const YAML::Node& node, const util::message_accessor_t<T, commonmodule::Quality>& accessor) final
        {
            std::string name;
            if (get_name(node, keys::name, name)) {
                auto quality_mapping_type = util::yaml::require_enum<QualityMappingType>(node);
                if(quality_mapping_type == QualityMappingType::Value::copy)
                {
                    m_quality_accessors.insert({ name, accessor });
                }
                else
                {
                    auto quality_id = util::yaml::require_string(node, keys::quality_id);
                    auto& constant_quality = m_quality_templates.get(quality_id);

                    if(quality_mapping_type == QualityMappingType::Value::constant)
                    {
                        m_quality_accessors.insert({ name,  std::make_shared<ConstantMessageAccessor<T, commonmodule::Quality>>(constant_quality)});
                    }
                    else if(quality_mapping_type == QualityMappingType::Value::constant_if_absent)
                    {
                        m_quality_accessors.insert({ name, std::make_shared<ConstantFallbackMessageAccessor<T, commonmodule::Quality>>(constant_quality, accessor)});
                    }
                }
            }
        }

        void handle_mapped_field(const YAML::Node& node, const util::message_accessor_t<T, commonmodule::Timestamp>& accessor) final
        {
            std::string name;
            if (get_name(node, keys::name, name)) {
                m_timestamp_accessors.insert({ name, accessor });
            }

            std::string time_quality_name;
            if (get_name(node, keys::timequality_name, time_quality_name)) {
                auto time_quality_accessor = std::make_shared<TimeQualityMessageAccessor<T>>(accessor);
                auto quality_mapping_type = util::yaml::require_enum<QualityMappingType>(node);
                if(quality_mapping_type == QualityMappingType::Value::copy)
                {
                    m_time_quality_accessors.insert({ time_quality_name, time_quality_accessor });
                }
                else
                {
                    auto quality_id = util::yaml::require_string(node, keys::timequality_id);
                    auto& constant_quality = m_time_quality_templates.get(quality_id);

                    if(quality_mapping_type == QualityMappingType::Value::constant)
                    {
                        m_time_quality_accessors.insert({ time_quality_name,  std::make_shared<ConstantMessageAccessor<T, commonmodule::TimeQuality>>(constant_quality)});
                    }
                    else if(quality_mapping_type == QualityMappingType::Value::constant_if_absent)
                    {
                        m_time_quality_accessors.insert({ time_quality_name, std::make_shared<ConstantFallbackMessageAccessor<T, commonmodule::TimeQuality>>(constant_quality, time_quality_accessor)});
                    }
                }
            }
        }

    public:
        // --- ignore these schedule types as they only occur in control profiles

        void handle(const std::string& field_name, const util::getter_t<T, util::repeated_schedule_parameter_t>& getter) override
        {
        }

    private:

        bool get_name(const YAML::Node& node, const std::string& key, std::string& value)
        {
            const auto name_node = node[key];
            if (name_node) {
                value = name_node.as<std::string>();
                if (!value.empty()) {
                    auto result = m_names.insert(value);
                    if (!result.second) {
                        throw api::Exception{ "Duplicate mapping name \"", value, "\"." };
                    };

                    return true;
                }
            }

            return false;
        }

        api::Logger m_logger;
        const QualityTemplatesConfigReader& m_quality_templates;
        const TimeQualityTemplatesConfigReader& m_time_quality_templates;

        std::unordered_set<std::string> m_names;
        std::unordered_map<std::string, const util::accessor_t<T, bool>> m_bool_accessors;
        std::unordered_map<std::string, const util::accessor_t<T, int32_t>> m_int32_accessors;
        std::unordered_map<std::string, const util::accessor_t<T, int64_t>> m_int64_accessors;
        std::unordered_map<std::string, const util::accessor_t<T, float>> m_float_accessors;
        std::unordered_map<std::string, const util::accessor_t<T, double>> m_double_accessors;
        std::unordered_map<std::string, const util::accessor_t<T, std::string>> m_string_accessors;
        std::unordered_map<std::string, const std::pair<const util::accessor_t<T, int>, const std::unordered_map<int, goose_cpp::BitString>>> m_enum_accessors;
        std::unordered_map<std::string, const util::message_accessor_t<T, commonmodule::Quality>> m_quality_accessors;
        std::unordered_map<std::string, const util::message_accessor_t<T, commonmodule::Timestamp>> m_timestamp_accessors;
        std::unordered_map<std::string, const util::message_accessor_t<T, commonmodule::TimeQuality>> m_time_quality_accessors;
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_SUB_SUBSCRIBINGCONFIGREADER_H
