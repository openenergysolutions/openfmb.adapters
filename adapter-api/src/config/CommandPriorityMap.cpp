
#include "adapter-api/config/CommandPriorityMap.h"

#include "adapter-api/ConfigStrings.h"
#include "adapter-api/util/Exception.h"
#include "adapter-api/util/YAMLUtil.h"

namespace adapter {

CommandPriorityMap::CommandPriorityMap(const YAML::Node& node)
{
    const auto add = [& map = this->priority_map](const YAML::Node& entry) {
        const auto id = entry.Scalar();
        const auto iter = map.find(id);
        if (iter != map.end()) {
            throw Exception("duplicate operation id in priority list: ", id);
        }
        const auto priority = map.size();
        map[id] = priority;
    };

    yaml::foreach (node, add);
}

void CommandPriorityMap::assert_all_operations_referenced() const
{
    for (const auto& elem : this->priority_map) {
        if (!elem.second.referenced) {
            throw Exception("Command order list contains unreferenced operation id: '", elem.first, "'");
        }
    }
}

size_t CommandPriorityMap::get_priority(const YAML::Node& node)
{
    const auto id = yaml::require_string(node, ::adapter::keys::command_order);
    const auto elem = this->priority_map.find(id);
    if (elem == this->priority_map.end()) {
        throw Exception("No priority specified for operation id '", id, "' at line: ", node.Mark().line);
    }
    elem->second.referenced = true;
    return elem->second.priority;
}
}
