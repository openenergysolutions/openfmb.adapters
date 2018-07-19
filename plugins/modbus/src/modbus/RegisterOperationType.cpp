
#include "RegisterOperationType.h"

#include "adapter-api/util/Exception.h"

namespace adapter
{
    namespace modbus
    {


        RegisterOperationType RegisterOperationTypeMeta::from_string(const std::string& value)
        {
            if(value == none)
            {
                return RegisterOperationType::none;
            }
            else if(value == clear_masked_bits)
            {
                return RegisterOperationType::clear_masked_bits;
            }
            else if(value == set_masked_bits)
            {
                return RegisterOperationType::set_masked_bits;
            }
            else if(value == write_value)
            {
                return RegisterOperationType::write_value;
            }
            else
            {
                throw Exception("Unknown RegisterOperationType: ", value);
            }
        }

    }
}


