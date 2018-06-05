#ifndef OPENFMB_ADAPTER_CONTROLCODEMETA_H
#define OPENFMB_ADAPTER_CONTROLCODEMETA_H

#include <opendnp3/gen/ControlCode.h>

#include <string>

namespace adapter
{
    namespace dnp3
    {
        struct ControlCodeMeta
        {
            static std::string to_string(opendnp3::ControlCode code);
            static opendnp3::ControlCode from_string(const std::string& value);
        };
    }
}

#endif
