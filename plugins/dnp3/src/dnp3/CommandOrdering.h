
#ifndef OPENFMB_ADAPTER_COMMANDORDERING_H
#define OPENFMB_ADAPTER_COMMANDORDERING_H

#include "generated/CommandType.h"
#include <cstdint>
#include <yaml-cpp/yaml.h>

namespace adapter {
namespace dnp3 {

    struct CommandOrdering {

        uint16_t index;
        CommandType::Value type;

        CommandOrdering(uint16_t index, CommandType::Value type);

        // natural ordering to be usable in a map or set
        bool operator<(const CommandOrdering& rhs) const;

        static CommandOrdering read(const YAML::Node& node);
        static std::vector<CommandOrdering> read_sequence(const YAML::Node& node);

        static void write(const CommandOrdering& ordering, YAML::Emitter& out);
        static void write(const std::initializer_list<CommandOrdering>& orderings, YAML::Emitter& out);
    };
}
}

#endif
