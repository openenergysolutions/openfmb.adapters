
#include "CommandPriorityMap.h"

#include <adapter-api/util/Exception.h>

namespace adapter {
namespace modbus {

    CommandPriorityMap::CommandPriorityMap(const std::vector<command_ordering_t>& orderings)
    {
        int priority = 0;
        for (const auto& ordering : orderings) {
            const auto iter = this->priority_map.find(ordering);
            if (iter != this->priority_map.end()) {
                throw Exception("duplicate command ordering w/ index: ", ordering.index, " and type: ", CommandType::to_string(ordering.type));
            }
            this->priority_map[ordering] = priority;
            ++priority;
        }
    }

    int CommandPriorityMap::get_priority(CommandType::Value type, uint16_t index) const
    {
        const auto elem = this->priority_map.find(command_ordering_t{ index, type });
        if (elem == this->priority_map.end()) {
            throw Exception("No priority specified for index: ", index, " and type: ", CommandType::to_string(type));
        }
        return elem->second;
    }
}
}
