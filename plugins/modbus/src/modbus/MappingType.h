
#ifndef OPENFMB_ADAPTER_MODBUS_MAPPINGTYPE_H
#define OPENFMB_ADAPTER_MODBUS_MAPPINGTYPE_H

#include <string>

namespace adapter
{
    namespace modbus
    {

        enum class MappingType
        {
            /// element is not mapped
            none,
            /// single register
            bit16,
            /// double register, value formed from two modbus registers
            bit32
        };

        struct MappingTypeMeta
        {
            MappingTypeMeta() = delete;

            static const std::string none;
            static const std::string bit16;
            static const std::string bit32;

            static MappingType from_string(const std::string& value);
        };

    }
}

#endif
