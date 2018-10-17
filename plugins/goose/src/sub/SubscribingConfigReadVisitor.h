#ifndef OPENFMB_ADAPTER_GOOSE_SUB_SUBSCRIBINGCONFIGREADER_H
#define OPENFMB_ADAPTER_GOOSE_SUB_SUBSCRIBINGCONFIGREADER_H

#include "adapter-api/Logger.h"
#include "adapter-api/config/SubscribingConfigReadVisitorBase.h"
#include "adapter-api/util/Exception.h"
#include "goose-cpp/messages/BitString.h"
#include "yaml-cpp/yaml.h"
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>

namespace adapter {
namespace goose {

    template <typename T>
    class SubscribingConfigReadVisitor final : public SubscribingConfigReadVisitorBase<T> {
    public:
        SubscribingConfigReadVisitor(const YAML::Node& root, Logger logger)
            : SubscribingConfigReadVisitorBase<T>(root)
            , m_logger{ logger }
        {
        }

        bool has(const std::string& name) const
        {
            return m_names.find(name) != m_names.end();
        }

        bool get_bool(const std::string& name, accessor_t<T, bool>& accessor) const
        {
            auto search = m_bool_accessors.find(name);
            if (search == m_bool_accessors.end()) {
                return false;
            };

            accessor = search->second;
            return true;
        }

        bool get_int32(const std::string& name, accessor_t<T, int32_t>& accessor) const
        {
            auto search = m_int32_accessors.find(name);
            if (search == m_int32_accessors.end()) {
                return false;
            };

            accessor = search->second;
            return true;
        }

        bool get_int64(const std::string& name, accessor_t<T, int64_t>& accessor) const
        {
            auto search = m_int64_accessors.find(name);
            if (search == m_int64_accessors.end()) {
                return false;
            };

            accessor = search->second;
            return true;
        }

        bool get_float(const std::string& name, accessor_t<T, float>& accessor) const
        {
            auto search = m_float_accessors.find(name);
            if (search == m_float_accessors.end()) {
                return false;
            };

            accessor = search->second;
            return true;
        }

        bool get_string(const std::string& name, accessor_t<T, std::string>& accessor) const
        {
            auto search = m_string_accessors.find(name);
            if (search == m_string_accessors.end()) {
                return false;
            };

            accessor = search->second;
            return true;
        }

        bool get_enum(const std::string& name, std::pair<accessor_t<T, int>, std::unordered_map<int, goose_cpp::BitString>>& accessor) const
        {
            auto search = m_enum_accessors.find(name);
            if (search == m_enum_accessors.end()) {
                return false;
            };

            accessor = search->second;
            return true;
        }

        bool get_quality(const std::string& name, message_accessor_t<T, commonmodule::Quality>& accessor) const
        {
            auto search = m_quality_accessors.find(name);
            if (search == m_quality_accessors.end()) {
                return false;
            };

            accessor = search->second;
            return true;
        }

        bool get_timestamp(const std::string& name, message_accessor_t<T, commonmodule::Timestamp>& accessor) const
        {
            auto search = m_timestamp_accessors.find(name);
            if (search == m_timestamp_accessors.end()) {
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
        void handle_mapped_field(const YAML::Node& node, const accessor_t<T, bool>& accessor) final
        {
            std::string name;
            if (get_name(node, name)) {
                m_bool_accessors.insert({ name, accessor });
            }
        }

        void handle_mapped_field(const YAML::Node& node, const accessor_t<T, int32_t>& accessor) final
        {
            std::string name;
            if (get_name(node, name)) {
                m_int32_accessors.insert({ name, accessor });
            }
        }

        void handle_mapped_field(const YAML::Node& node, const accessor_t<T, int64_t>& accessor) final
        {
            std::string name;
            if (get_name(node, name)) {
                m_int64_accessors.insert({ name, accessor });
            }
        }

        void handle_mapped_field(const YAML::Node& node, const accessor_t<T, float>& accessor) final
        {
            std::string name;
            if (get_name(node, name)) {
                m_float_accessors.insert({ name, accessor });
            }
        }

        void handle_mapped_field(const YAML::Node& node, const accessor_t<T, std::string>& accessor) final
        {
            std::string name;
            if (get_name(node, name)) {
                m_string_accessors.insert({ name, accessor });
            }
        }

        void handle_mapped_field(const YAML::Node& node, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor) final
        {
            std::string name;
            if (get_name(node, name)) {
                std::unordered_map<int, goose_cpp::BitString> mapping{};
                yaml::foreach (yaml::require(node, ::adapter::keys::mapping), [&](const YAML::Node& node) {
                    const auto name = yaml::require_string(node, ::adapter::keys::name);
                    const auto value = descriptor->FindValueByName(name);
                    if (!value)
                        throw Exception("Unknown enum value: ", name);
                    const auto output = yaml::require_string(node, ::adapter::keys::value);
                    auto bit_string = goose_cpp::BitString::from_string(output);
                    mapping.insert({ value->number(), bit_string });
                });

                m_enum_accessors.insert({ name, std::make_pair(accessor, mapping) });
            }
        }

        void handle_mapped_field(const YAML::Node& node, const message_accessor_t<T, commonmodule::Quality>& accessor) final
        {
            std::string name;
            if (get_name(node, name)) {
                m_quality_accessors.insert({ name, accessor });
            }
        }

        void handle_mapped_field(const YAML::Node& node, const message_accessor_t<T, commonmodule::Timestamp>& accessor) final
        {
            std::string name;
            if (get_name(node, name)) {
                m_timestamp_accessors.insert({ name, accessor });
            }
        }

    public:
        // --- ignore these schedule types as they only occur in control profiles

        void handle(const std::string& field_name, const getter_t<T, repeated_schedule_parameter_t>& getter) override
        {
        }

    private:
        bool get_name(const YAML::Node& node, std::string& value)
        {
            const auto name_node = node[keys::name];
            if (name_node) {
                value = name_node.as<std::string>();
                if (!value.empty()) {
                    auto result = m_names.insert(value);
                    if (!result.second) {
                        throw Exception{ "Duplicate mapping name \"", value, "\"." };
                    };

                    return true;
                }
            }

            return false;
        }

        Logger m_logger;

        std::unordered_set<std::string> m_names;
        std::unordered_map<std::string, const accessor_t<T, bool>> m_bool_accessors;
        std::unordered_map<std::string, const accessor_t<T, int32_t>> m_int32_accessors;
        std::unordered_map<std::string, const accessor_t<T, int64_t>> m_int64_accessors;
        std::unordered_map<std::string, const accessor_t<T, float>> m_float_accessors;
        std::unordered_map<std::string, const accessor_t<T, std::string>> m_string_accessors;
        std::unordered_map<std::string, std::pair<const accessor_t<T, int>, const std::unordered_map<int, goose_cpp::BitString>>> m_enum_accessors;
        std::unordered_map<std::string, const message_accessor_t<T, commonmodule::Quality>> m_quality_accessors;
        std::unordered_map<std::string, const message_accessor_t<T, commonmodule::Timestamp>> m_timestamp_accessors;
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_SUB_SUBSCRIBINGCONFIGREADER_H
