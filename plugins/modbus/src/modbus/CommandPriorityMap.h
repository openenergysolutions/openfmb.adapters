
#ifndef OPENFMB_ADAPTER_COMMANDPRIORITYMAP_H
#define OPENFMB_ADAPTER_COMMANDPRIORITYMAP_H

#include "ICommandPrioritySource.h"

#include <map>

namespace adapter {
namespace modbus {

    class CommandPriorityMap final : public ICommandPrioritySource {

    public:

        void add_operation(const std::string& operation_id);

        size_t get_priority(const YAML::Node& node) const override;

    private:
        std::map<std::string, size_t> priority_map;
    };
}
}

#endif
