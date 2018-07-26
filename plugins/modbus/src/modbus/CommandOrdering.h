
#ifndef OPENFMB_ADAPTER_COMMANDORDERING_H
#define OPENFMB_ADAPTER_COMMANDORDERING_H

#include <adapter-api/config/IndexedEnumOrdering.h>

#include "generated/CommandType.h"

namespace adapter {
namespace modbus {

    using command_ordering_t = ::adapter::IndexedEnumOrdering<CommandType>;
}
}

#endif
