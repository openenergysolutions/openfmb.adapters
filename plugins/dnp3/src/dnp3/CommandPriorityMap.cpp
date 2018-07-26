
#include "CommandPriorityMap.h"

#include <adapter-api/util/Exception.h>

namespace adapter {
namespace dnp3 {

    CommandPriorityMap::CommandPriorityMap(const std::vector<CommandOrdering>& orderings)
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

    int CommandPriorityMap::get_binary_output_priority(uint16_t index) const
    {
        return get_priority(index, CommandType::Value::crob);
    }

    int CommandPriorityMap::get_analog_output_priority(uint16_t index) const
    {
        return get_priority(index, CommandType::Value::analog_output);
    }

    int CommandPriorityMap::get_priority(uint16_t index, CommandType::Value type) const
    {
        const auto elem = this->priority_map.find(CommandOrdering{ index, type });
        if (elem == this->priority_map.end()) {
            throw Exception("No priority specified for index: ", index, " and type: ", CommandType::to_string(type));
        }
        return elem->second;
    }
}
}
