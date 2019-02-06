
#include "PluginBase.h"

#include "ConfigStrings.h"
#include "LogAdapter.h"

#include <adapter-util/util/YAMLUtil.h>

using namespace openpal;
using namespace opendnp3;
using namespace asiodnp3;

namespace adapter {
namespace dnp3 {

    PluginBase::PluginBase(
        const api::Logger& logger,
        const YAML::Node& node)
        : logger(logger)
        , manager(
              util::yaml::optionally(node[keys::thread_pool_size], std::thread::hardware_concurrency()),
              std::make_shared<LogAdapter>(logger))
    {
    }
}
}
