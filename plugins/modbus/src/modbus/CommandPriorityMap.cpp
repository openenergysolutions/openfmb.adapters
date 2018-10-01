
#include "CommandPriorityMap.h"

#include <adapter-api/util/Exception.h>

namespace adapter {
namespace modbus {

    void CommandPriorityMap::add_operation(const std::string& id)
    {
        const auto iter = this->priority_map.find(id);
        if (iter != this->priority_map.end()) {
            throw Exception("duplicate operation id in priority list: ", id);
        }
        const auto priority = this->priority_map.size();
        this->priority_map[id] = priority;
    }

    void CommandPriorityMap::assert_all_operations_referenced()
    {
        for(const auto& elem : this->priority_map)
        {
            if(!elem.second.referenced) {
                throw Exception("Command order list contains unreferenced operation id: '", elem.first, "'");
            }
        }
    }

    size_t CommandPriorityMap::get_priority(const YAML::Node& node)
    {
        const auto id = yaml::require_string(node, keys::operation_ids);
        const auto elem = this->priority_map.find(id);
        if (elem == this->priority_map.end()) {
            throw Exception("No priority specified for operation id '", id, "' at line: ", node.Mark().line);
        }
        elem->second.referenced = true;
        return elem->second.priority;
    }


}
}
