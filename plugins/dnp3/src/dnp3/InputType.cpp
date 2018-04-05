
#include "InputType.h"

#include "adapter-api/util/Exception.h"

namespace adapter
{

    namespace dnp3
    {

        std::string InputTypeMeta::to_string(InputType type)
        {
            switch(type)
            {
            case(InputType::binary):
                return InputTypeMeta::binary;
            case(InputType::analog):
                return InputTypeMeta::analog;
            case(InputType::counter):
                return InputTypeMeta::counter;
            default:
                return InputTypeMeta::disabled;
            }
        }

        InputType InputTypeMeta::from_string(const std::string& value)
        {
            if(value == InputTypeMeta::binary)
            {
                return InputType::binary;
            }
            else if(value == InputTypeMeta::analog)
            {
                return InputType::analog;
            }
            else if(value == InputTypeMeta::counter)
            {
                return InputType::counter;
            }
            else if(value == InputTypeMeta::disabled)
            {
                return InputType::disabled;
            }
            else
            {
                throw Exception("Unknown InputType: ", value);
            }
        }
    }
}


