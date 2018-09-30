
#ifndef OPENFMB_ADAPTER_COMMANDPRIORITYMAP_H
#define OPENFMB_ADAPTER_COMMANDPRIORITYMAP_H

#include "ICommandPrioritySource.h"

#include "CommandOrdering.h"

#include <map>

namespace adapter {
namespace modbus {

    class CommandPriorityMap final : public ICommandPrioritySource {

        struct Value {

            Value() = default;
            Value(size_t priority) : priority(priority) {}

            size_t priority = 0;
            YAML::Mark mark = YAML::Mark::null_mark();
        };

    public:

        void add_operation(const std::string& operation_id);

        size_t get_priority(const YAML::Node& node) const override;

    private:
        std::map<std::string, Value> priority_map;
    };
}
}

#endif
