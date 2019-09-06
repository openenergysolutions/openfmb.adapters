
#include "SingleRegisterEnumMapping.h"

#include "ConfigStrings.h"

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/util/YAMLUtil.h>

namespace adapter {
namespace modbus {

    std::map<uint16_t, int> read_mapping(const YAML::Node& node, google::protobuf::EnumDescriptor const* descriptor, uint16_t mask)
    {
        std::map<uint16_t, int> mapping;

        util::yaml::foreach (
            util::yaml::require(node, util::keys::mapping),
            [&mapping, descriptor, mask](const YAML::Node& item) {
                const auto name = util::yaml::require_string(item, util::keys::name);
                const auto value = util::yaml::require_integer<uint16_t>(item, util::keys::value);

                const auto value_descriptor = descriptor->FindValueByName(name);
                if (!value_descriptor) {
                    throw api::Exception("Bad ", descriptor->name(), " enum name: ", name);
                }
                mapping[value & mask] = value_descriptor->number();
            });

        return std::move(mapping);
    }

    SingleRegisterEnumMapping::SingleRegisterEnumMapping(const YAML::Node& node, google::protobuf::EnumDescriptor const* descriptor)
        : descriptor(descriptor)
        , mask(util::yaml::require_integer<uint16_t>(node, keys::mask))
        , mapping(read_mapping(node, descriptor, mask))
    {
    }

    bool SingleRegisterEnumMapping::get_mapping(uint16_t value, int& out) const
    {
        const auto iter = this->mapping.find(value & mask);
        if (iter == this->mapping.end()) {
            return false;
        }
        out = iter->second;
        return true;
    }
}
}
