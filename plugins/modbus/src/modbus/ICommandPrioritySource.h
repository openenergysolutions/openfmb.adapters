
#ifndef OPENFMB_ADAPTER_ICOMMANDPRIORITYSOURCE_H
#define OPENFMB_ADAPTER_ICOMMANDPRIORITYSOURCE_H

#include "ConfigStrings.h"
#include "generated/CommandType.h"

#include <adapter-api/util/YAMLUtil.h>

#include <cstdint>

namespace adapter {
namespace modbus {

    class ICommandPrioritySource {
    public:
        virtual ~ICommandPrioritySource() = default;

        // retrieve the priority via the "operation-id" map entry of the YAML node
        virtual size_t get_priority(const YAML::Node& node) = 0;
    };
}
}

#endif // OPENFMB_ADAPTER_ICOMMANDPRIORITYSOURCE_H
