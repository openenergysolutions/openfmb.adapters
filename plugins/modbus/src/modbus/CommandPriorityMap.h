
#ifndef OPENFMB_ADAPTER_COMMANDPRIORITYMAP_H
#define OPENFMB_ADAPTER_COMMANDPRIORITYMAP_H

#include "ICommandPrioritySource.h"

#include "CommandOrdering.h"

#include <map>

namespace adapter {
namespace modbus {

    class CommandPriorityMap final : public ICommandPrioritySource {
    public:
        explicit CommandPriorityMap(const std::vector<command_ordering_t>& ordering);

        int get_priority(CommandType::Value type, uint16_t index) const override;

    private:
        std::map<command_ordering_t, int> priority_map;
    };
}
}

#endif
