
#ifndef OPENFMB_ADAPTER_COMMANDORDERING_H
#define OPENFMB_ADAPTER_COMMANDORDERING_H

#include "generated/CommandType.h"
#include <cstdint>

namespace adapter {
namespace dnp3 {

    struct CommandOrdering {
        uint16_t index;
        CommandType::Value type;

        CommandOrdering(uint16_t index, CommandType::Value type)
            : index(index)
            , type(type)
        {
        }

        // natural ordering to be usable in a map or set
        bool operator<(const CommandOrdering& rhs) const
        {
            if (this->index < rhs.index) {
                return true;
            } else if (rhs.index < this->index) {
                return false;
            } else {
                // if the indices are equal, break the tie based on enum
                return this->type < rhs.type;
            }
        }
    };
}
}

#endif //OPENFMB_ADAPTER_COMMANDORDERING_H
