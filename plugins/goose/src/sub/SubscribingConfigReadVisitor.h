#ifndef OPENFMB_ADAPTER_GOOSE_SUB_SUBSCRIBINGCONFIGREADER_H
#define OPENFMB_ADAPTER_GOOSE_SUB_SUBSCRIBINGCONFIGREADER_H

#include <string>
#include <unordered_map>
#include <unordered_set>
#include "adapter-api/Logger.h"
#include "adapter-api/util/Exception.h"
#include "adapter-api/config/SubscribingConfigReadVisitorBase.h"
#include "yaml-cpp/yaml.h"

namespace adapter {
namespace goose {

template <typename T>
class SubscribingConfigReadVisitor final : public SubscribingConfigReadVisitorBase<T> {
public:
    SubscribingConfigReadVisitor(const YAML::Node& root, Logger logger)
            : SubscribingConfigReadVisitorBase<T>(root)
            , m_logger{logger}
    {}

    bool has(const std::string& name) const
    {
        return m_names.find(name) != m_names.end();
    }

    bool get_bool(const std::string& name, accessor_t<T, bool>& accessor) const
    {
        auto search = m_bool_accessors.find(name);
        if(search == m_bool_accessors.end())
        {
            return false;
        };

        accessor = search->second;
        return true;
    }

    bool get_int32(const std::string& name, accessor_t<T, int32_t>& accessor) const
    {
        auto search = m_int32_accessors.find(name);
        if(search == m_int32_accessors.end())
        {
            return false;
        };

        accessor = search->second;
        return true;
    }

    bool get_int64(const std::string& name, accessor_t<T, int64_t>& accessor) const
    {
        auto search = m_int64_accessors.find(name);
        if(search == m_int64_accessors.end())
        {
            return false;
        };

        accessor = search->second;
        return true;
    }

    bool get_float(const std::string& name, accessor_t<T, float>& accessor) const
    {
        auto search = m_float_accessors.find(name);
        if(search == m_float_accessors.end())
        {
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
        auto name = get_name(node);
        m_bool_accessors.insert({name, accessor});
    }

    void handle_mapped_field(const YAML::Node& node, const accessor_t<T, int32_t>& accessor) final
    {
        auto name = get_name(node);
        m_int32_accessors.insert({name, accessor});
    }

    void handle_mapped_field(const YAML::Node& node, const accessor_t<T, int64_t>& accessor) final
    {
        auto name = get_name(node);
        m_int64_accessors.insert({name, accessor});
    }

    void handle_mapped_field(const YAML::Node& node, const accessor_t<T, float>& accessor) final
    {
        auto name = get_name(node);
        m_float_accessors.insert({name, accessor});
    }

    void handle_mapped_field(const YAML::Node& node, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor) final
    {
        throw Exception{"Mapped enums are not supported by goose-sub."};
    }

private:
    std::string get_name(const YAML::Node& node)
    {
        auto name = yaml::require_string(node, keys::name);

        if(name.empty())
        {
            const auto mark = node.Mark();
            throw Exception{"Name cannot be empty at line ", mark.line + 1};
        }

        auto result = m_names.insert(name);
        if(!result.second)
        {
            throw Exception{"Duplicate mapping name \"", name, "\"."};
        };

        return name;
    }

    Logger m_logger;

    std::unordered_set<std::string> m_names;
    std::unordered_map<std::string, const accessor_t<T, bool>> m_bool_accessors;
    std::unordered_map<std::string, const accessor_t<T, int32_t>> m_int32_accessors;
    std::unordered_map<std::string, const accessor_t<T, int64_t>> m_int64_accessors;
    std::unordered_map<std::string, const accessor_t<T, float>> m_float_accessors;
};

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_SUB_SUBSCRIBINGCONFIGREADER_H
