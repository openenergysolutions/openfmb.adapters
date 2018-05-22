#ifndef OPENFMB_PLUGIN_TIMESCALEDB_CONFIGSTRINGS_H
#define OPENFMB_PLUGIN_TIMESCALEDB_CONFIGSTRINGS_H

#include <deque>
#include <memory>
#include <string>
#include <boost/uuid/uuid_generators.hpp>
#include "adapter-api/ISubscriber.h"
#include "adapter-api/config/IArchiveVisitor.h"
#include "adapter-api/config/MessageInformation.h"
#include "adapter-api/config/generated/ArchiveVisitors.h"
#include "IArchiver.h"
#include "Message.h"

namespace adapter
{
namespace timescaledb
{
namespace keys
{

constexpr const char* const database_url = "database-url";
constexpr const char* const table_name = "table-name";

}
}
}

#endif
