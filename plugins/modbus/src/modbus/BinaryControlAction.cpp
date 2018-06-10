
#include "BinaryControlAction.h"

#include "adapter-api/util/Exception.h"

namespace adapter
{
    namespace modbus
    {


        BinaryControlAction BinaryControlActionMeta::from_string(const std::string& value)
        {
            if(value == none)
            {
                return BinaryControlAction::none;
            }
            else if(value == clear_masked_bits)
            {
                return BinaryControlAction::clear_masked_bits;
            }
            else if(value == set_masked_bits)
            {
                return BinaryControlAction::set_masked_bits;
            }
            else
            {
                throw Exception("Unknown BinaryControlAction: ", value);
            }
        }

    }
}


