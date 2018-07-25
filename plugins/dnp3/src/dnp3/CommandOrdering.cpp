
#include "CommandOrdering.h"

#include "adapter-api/config/YAMLGetters.h"
#include "adapter-api/util/YAMLUtil.h"

namespace adapter {
namespace dnp3 {

    CommandOrdering::CommandOrdering(uint16_t index, CommandType::Value type)
        : index(index)
        , type(type)
    {
    }

    bool CommandOrdering::operator<(const CommandOrdering& rhs) const
    {
        if (this->index < rhs.index) {
            return true;
        } else if (rhs.index < this->index) {
            return false;
        } else {
            // if the indices are equal, break the tie based on enum
            return this->type < rhs.type;
        }
    }

    CommandOrdering CommandOrdering::read(const YAML::Node& node)
    {
        return CommandOrdering{
            yaml::get::index(node),
            yaml::require_enum<CommandType>(node)
        };
    }

    std::vector<CommandOrdering> CommandOrdering::read_sequence(const YAML::Node& node)
    {
        std::vector<CommandOrdering> list;

        yaml::foreach (
            node,
            [&list](const YAML::Node& node) { list.push_back(read(node)); });

        return std::move(list);
    }
}
}
