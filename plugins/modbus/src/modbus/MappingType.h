
#ifndef OPENFMB_ADAPTER_MODBUS_MAPPINGTYPE_H
#define OPENFMB_ADAPTER_MODBUS_MAPPINGTYPE_H

#include <string>

namespace adapter {
namespace modbus {

    enum class MappingType {
        /// element is not mapped
        none,
        /// single signed register
        sint16,
        /// single unsigned register
        uint16,
        /// 32-bit signed register, formed from two modbus 16-bit registers
        sint32,
        /// 32-bit unsigned register, formed from two modbus 16-bit registers
        uint32,
        /// 32-bit signed register, formed from two modbus 16-bit registers, custom modulus
        sint32_with_modulus,
        /// 32-bit unsigned register, formed from two modbus 16-bit registers, custom modulus
        uint32_with_modulus
    };

    struct MappingTypeMeta {
        MappingTypeMeta() = delete;

        constexpr static const char* const none = "none";
        constexpr static const char* const sint16 = "sint16";
        constexpr static const char* const uint16 = "uint16";
        constexpr static const char* const sint32 = "sint32";
        constexpr static const char* const uint32 = "uint32";
        constexpr static const char* const sint32_with_modulus = "sint32_with_modulus";
        constexpr static const char* const uint32_with_modulus = "uint32_with_modulus";

        static MappingType from_string(const std::string& value);
    };
}
}

#endif
