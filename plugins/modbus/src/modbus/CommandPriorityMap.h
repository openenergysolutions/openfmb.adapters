
#ifndef OPENFMB_ADAPTER_COMMANDPRIORITYMAP_H
#define OPENFMB_ADAPTER_COMMANDPRIORITYMAP_H

#include "ICommandPrioritySource.h"

#include <map>

namespace adapter {
namespace modbus {

    class CommandPriorityMap final : public ICommandPrioritySource {

        struct Value {

            Value() = default;
            Value(size_t priority)
                : priority(priority)
            {
            }

            size_t priority = 0;
            bool referenced = false;
        };

    public:
        void add_operation(const std::string& operation_id);

        /**
         * After getting all the priorities, call this to throw
         * an exception if one wasn't referenced
         */
        void assert_all_operations_referenced();

        // ---- implement ICommandPrioritySource ----

        size_t get_priority(const YAML::Node& node) override;

    private:
        std::map<std::string, Value> priority_map;
    };
}
}

#endif
