
#include "SingleRegisterEnumMapping.h"

#include "ConfigStrings.h"

#include <adapter-api/ConfigStrings.h>
#include <adapter-api/util/YAMLUtil.h>

namespace adapter {
namespace modbus {

    std::map<uint16_t, int> read_mapping(const YAML::Node& node, google::protobuf::EnumDescriptor const* descriptor)
    {
        std::map<uint16_t, int> mapping;

        yaml::foreach (
            yaml::require(node, ::adapter::keys::mapping),
            [&mapping, descriptor](const YAML::Node& item) {
                const auto name = yaml::require_string(item, ::adapter::keys::name);
                const auto value = yaml::require_integer<uint16_t>(item, ::adapter::keys::value);

                const auto value_descriptor = descriptor->FindValueByName(name);
                if (!value_descriptor) {
                    throw Exception("Bad ", descriptor->name(), " enum name: ", name);
                }
                mapping[value] = value_descriptor->number();
            });

        return std::move(mapping);
    }

    SingleRegisterEnumMapping::SingleRegisterEnumMapping(const YAML::Node& node, google::protobuf::EnumDescriptor const* descriptor)
        : descriptor(descriptor)
        , mask(yaml::require_integer<uint16_t>(node, keys::mask))
        , mapping(read_mapping(node, descriptor))
    {
    }

    bool SingleRegisterEnumMapping::get_mapping(uint16_t value, int& out) const
    {
        const auto iter = this->mapping.find(value);
        if (iter == this->mapping.end()) {
            return false;
        }
        out = iter->second;
        return true;
    }
}
}
