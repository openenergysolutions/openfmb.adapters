
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
        this->priority_map[id] = Value(priority);
    }

    size_t CommandPriorityMap::get_priority(const YAML::Node& node)
    {
        const auto id = yaml::require_string(node, keys::operation_ids);
        const auto elem = this->priority_map.find(id);
        if (elem == this->priority_map.end()) {
            throw Exception("No priority specified for operation id '", id, "' at line: ", node.Mark().line);
        }
        if(!elem->second.mark.is_null()) {
            throw Exception("Operation id '", id, "' is not unique. First defined at line ", elem->second.mark.line, ". Used again at line ", node.Mark().line, ".");
        }
        elem->second.mark = node.Mark();
        return elem->second.priority;
    }

}
}
