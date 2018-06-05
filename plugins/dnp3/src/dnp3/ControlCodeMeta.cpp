
#include "ControlCodeMeta.h"

#include <adapter-api/util/Exception.h>

namespace adapter
{
    namespace dnp3
    {

        std::string ControlCodeMeta::to_string(opendnp3::ControlCode code)
        {
            switch(code)
            {
            case(opendnp3::ControlCode::LATCH_ON):
                return "LATCH_ON";
            case(opendnp3::ControlCode::LATCH_OFF):
                return "LATCH_OFF";
            default:
                throw Exception("Unsupported control code");
            }
        }

        opendnp3::ControlCode ControlCodeMeta::from_string(const std::string& value)
        {
            if(value == "LATCH_ON")
            {
                return opendnp3::ControlCode::LATCH_ON;
            }
            else if(value == "LATCH_OFF")
            {
                return opendnp3::ControlCode::LATCH_OFF;
            }
            else
            {
                throw Exception("Unknown control code: ", value);
            }
        }

    }
}
