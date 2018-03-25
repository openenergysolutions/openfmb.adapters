
#include "MappingType.h"

#include "adapter-api/util/Exception.h"

namespace adapter
{
    namespace modbus
    {

        const std::string MappingTypeMeta::none("none");
        const std::string MappingTypeMeta::bit16("bit16");
        const std::string MappingTypeMeta::bit32("bit32");

        MappingType MappingTypeMeta::from_string(const std::string& value)
        {
            if(value == none)
            {
                return MappingType::none;
            }
            else if(value == bit16)
            {
                return MappingType::bit16;
            }
            else if(value == bit32)
            {
                return MappingType::bit32;
            }
            else
            {
                throw Exception("Unknown mapping type: ", value);
            }
        }

    }
}


