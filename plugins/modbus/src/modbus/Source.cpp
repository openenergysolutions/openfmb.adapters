
#include "Source.h"

#include <adapter-api/util/Exception.h>

namespace adapter {
namespace modbus {
    Source SourceMeta::from_string(const std::string& value)
    {
        if (value == none) {
            return Source::none;
        } else if (value == holding_register) {
            return Source::holding_register;
        } else {
            throw Exception("Unknown mapping type: ", value);
        }
    }

    std::string SourceMeta::to_string(Source value)
    {
        switch (value) {
        case (Source::holding_register):
            return holding_register;
        default:
            return none;
        }
    }
}
}
