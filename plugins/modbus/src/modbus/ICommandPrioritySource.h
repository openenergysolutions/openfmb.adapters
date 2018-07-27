
#ifndef OPENFMB_ADAPTER_ICOMMANDPRIORITYSOURCE_H
#define OPENFMB_ADAPTER_ICOMMANDPRIORITYSOURCE_H

#include "generated/CommandType.h"

#include <cstdint>

namespace adapter {
namespace modbus {

    class ICommandPrioritySource {
    public:
        virtual ~ICommandPrioritySource() = default;

        virtual int get_priority(CommandType::Value type, uint16_t index) const = 0;
    };
}
}

#endif // OPENFMB_ADAPTER_ICOMMANDPRIORITYSOURCE_H
