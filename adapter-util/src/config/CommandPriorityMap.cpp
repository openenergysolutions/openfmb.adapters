
#include "adapter-util/config/CommandPriorityMap.h"

#include "adapter-util/ConfigStrings.h"
#include "adapter-util/util/YAMLUtil.h"
#include "schema-util/Builder.h"

#include <adapter-api/Exception.h>

namespace adapter {
namespace util {

    CommandPriorityMap::CommandPriorityMap(const YAML::Node& node)
    {
        const auto add = [& map = this->priority_map](const YAML::Node& entry) {
            const auto id = entry.Scalar();
            const auto iter = map.find(id);
            if (iter != map.end()) {
                throw api::Exception("duplicate operation id in priority list: ", id);
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
                throw api::Exception("Command order list contains unreferenced operation id: '", elem.first, "'");
            }
        }
    }

    size_t CommandPriorityMap::get_priority(const YAML::Node& node)
    {
        const auto id = yaml::require_string(node, keys::command_id);
        const auto elem = this->priority_map.find(id);
        if (elem == this->priority_map.end()) {
            throw api::Exception("No priority specified for operation id '", id, "' at line: ", node.Mark().line);
        }
        elem->second.referenced = true;
        return elem->second.priority;
    }

    schema::property_ptr_t CommandPriorityMap::get_schema()
    {
        return schema::string_array_property(
            keys::command_order,
            schema::Required::yes,
            "order of commands by operation id. First == highest priority, last == lower priority",
            "operation-id",
            schema::StringFormat::None
        );
    }

}
}
