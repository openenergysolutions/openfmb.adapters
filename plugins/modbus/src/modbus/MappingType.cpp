
#include "MappingType.h"

#include "adapter-api/util/Exception.h"

namespace adapter {
namespace modbus {

    MappingType MappingTypeMeta::from_string(const std::string& value)
    {
        if (value == none) {
            return MappingType::none;
        } else if (value == uint16) {
            return MappingType::uint16;
        } else if (value == sint16) {
            return MappingType::sint16;
        } else if (value == uint32) {
            return MappingType::uint32;
        } else if (value == sint32) {
            return MappingType::sint32;
        } else if (value == uint32_with_modulus) {
            return MappingType::uint32_with_modulus;
        } else if (value == sint32_with_modulus) {
            return MappingType::sint32_with_modulus;
        } else {
            throw Exception("Unknown mapping type: ", value);
        }
    }
}
}
