
#ifndef OPENFMB_ADAPTER_COMMANDPRIORITYMAP_H
#define OPENFMB_ADAPTER_COMMANDPRIORITYMAP_H

#include <adapter-util/config/ICommandPrioritySource.h>
#include <schema-util/Types.h>

#include <yaml-cpp/yaml.h>

#include <map>

namespace adapter { namespace util {

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
    /**
         * Construct the map from sequence (of strings) node
         *
         * @param node a YAML::Node that is a sequence of operation names referenced later in the config
         */
    explicit CommandPriorityMap(const YAML::Node& node);

    /**
         * After getting all the priorities, call this to throw
         * an exception if one wasn't referenced
         */
    void assert_all_operations_referenced() const;

    // ---- implement ICommandPrioritySource ----

    size_t get_priority(const YAML::Node& node) override;

    static schema::property_ptr_t get_schema();

private:
    std::map<std::string, Value> priority_map;
};

}}

#endif
