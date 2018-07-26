
#ifndef OPENFMB_ADAPTER_COMMANDPRIORITYMAP_H
#define OPENFMB_ADAPTER_COMMANDPRIORITYMAP_H

#include "ICommandPrioritySource.h"

#include "CommandOrdering.h"

#include <map>

namespace adapter {
namespace dnp3 {

    class CommandPriorityMap final : public ICommandPrioritySource {
    public:
        explicit CommandPriorityMap(const std::vector<CommandOrdering>& ordering);

        int get_binary_output_priority(uint16_t index) const override;

        int get_analog_output_priority(uint16_t index) const override;

    private:
        int get_priority(uint16_t index, CommandType::Value type) const;

        std::map<CommandOrdering, int> priority_map;
    };
}
}

#endif
