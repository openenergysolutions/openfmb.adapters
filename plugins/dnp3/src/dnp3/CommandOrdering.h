
#ifndef OPENFMB_ADAPTER_COMMANDORDERING_H
#define OPENFMB_ADAPTER_COMMANDORDERING_H

#include "generated/CommandType.h"
#include <adapter-api/config/IndexedEnumOrdering.h>

namespace adapter {
namespace dnp3 {

    using command_ordering_t = ::adapter::IndexedEnumOrdering<CommandType>;
}
}

#endif
