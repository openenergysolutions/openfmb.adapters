
#include "CommandOrdering.h"
#include <adapter-api/ConfigStrings.h>

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

    void CommandOrdering::write(const CommandOrdering& ordering, YAML::Emitter& out)
    {
        out << YAML::Key << ::adapter::keys::index << YAML::Value << ordering.index;
        out << YAML::Key << CommandType::label << YAML::Value << CommandType::to_string(ordering.type);
    }

    void CommandOrdering::write(const std::initializer_list<CommandOrdering>& orderings, YAML::Emitter& out)
    {
        out << YAML::BeginSeq;

        for (const auto& ordering : orderings) {
            out << YAML::BeginMap;
            write(ordering, out);
            out << YAML::EndMap;
        }

        out << YAML::EndSeq;
    }
}
}
