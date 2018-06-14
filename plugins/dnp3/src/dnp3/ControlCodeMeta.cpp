
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
                return latch_on;
            case(opendnp3::ControlCode::LATCH_OFF):
                return latch_off;
            case(opendnp3::ControlCode::TRIP_PULSE_ON):
                return trip_pulse_on;
            default:
                throw Exception("Unsupported control code");
            }
        }

        opendnp3::ControlCode ControlCodeMeta::from_string(const std::string& value)
        {
            if(value == latch_on)
            {
                return opendnp3::ControlCode::LATCH_ON;
            }
            else if(value == latch_off)
            {
                return opendnp3::ControlCode::LATCH_OFF;
            }
            else if(value == trip_pulse_on)
            {
                return opendnp3::ControlCode::TRIP_PULSE_ON;
            }
            else
            {
                throw Exception("Unknown control code: ", value);
            }
        }

    }
}
