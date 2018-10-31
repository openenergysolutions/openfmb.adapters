
#include "MultipleRegisterEnumMapping.h"
#include "ConfigStrings.h"

#include <adapter-api/util/Exception.h>
#include <adapter-api/util/YAMLUtil.h>
#include <adapter-api/ConfigStrings.h>

namespace adapter {
    namespace modbus {

        uint32_t read_bit_pattern(const YAML::Node& node)
        {
            const auto pattern_string = yaml::require_string(node, keys::pattern);
            if(pattern_string.size() > 32) {
                throw Exception(node.Mark(), "Bit pattern contains more than the allowed 32 bit characters (1|0)");
            }
            uint32_t bit_pos = 0;
            uint32_t pattern = 0;
            for(auto bit : pattern_string)
            {
                switch(bit)
                {
                    case '1':
                        pattern |= (1ul << bit_pos);
                        break;
                    case '0':
                        break;
                    default:
                        throw Exception(node.Mark(), "Bit pattern contains illegal character: ", bit);
                }
                ++bit_pos;
            }
            return pattern;
        }

        std::vector<MultipleRegisterEnumMapping::Bit> MultipleRegisterEnumMapping::read_bits(const YAML::Node& node)
        {
            std::vector<Bit> bits;

            yaml::foreach(
                    yaml::require(node, keys::bits),
                    [&bits](const YAML::Node& entry) {
                        bits.emplace_back(entry);
                    }
            );

            return std::move(bits);
        }

        std::shared_ptr<const std::map<uint32_t, int>> MultipleRegisterEnumMapping::read_mapping(const YAML::Node& node, google::protobuf::EnumDescriptor const* descriptor)
        {
            const std::shared_ptr<std::map<uint32_t, int>> mapping;

            yaml::foreach(
                    yaml::require(node, ::adapter::keys::mapping),
                    [&mapping, descriptor](const YAML::Node& entry) {
                        const auto pattern = read_bit_pattern(entry);
                        const auto value = yaml::require_string(entry, ::adapter::keys::value);
                        const auto value_descriptor = descriptor->FindValueByName(value);
                        if (!value_descriptor) {
                            throw Exception("Bad ", descriptor->name(), " enum name: ", value);
                        }
                        (*mapping)[pattern] = value_descriptor->number();
                    }
            );

            return mapping;
        }

        MultipleRegisterEnumMapping::Bit::Bit(const YAML::Node& node) :
                index(yaml::require_integer<uint16_t>(node, ::adapter::keys::index)),
                bit(yaml::require_integer<uint8_t>(node, keys::bit))
        {
            if(bit > 15) {
                throw Exception(node.Mark(), "Bit must be in the range [0,15]");
            }
        }

        MultipleRegisterEnumMapping::MultipleRegisterEnumMapping(const YAML::Node& node, google::protobuf::EnumDescriptor const* descriptor) :
                descriptor(descriptor),
                bits(read_bits(node)),
                mapping(read_mapping(node,descriptor))
        {

        }

    }
}


