
#include "Plugin.h"

#include "adapter-util/ConfigStrings.h"

using namespace openpal;
using namespace opendnp3;
using namespace asiodnp3;

namespace adapter {
namespace dnp3 {
    namespace outstation {

        Plugin::Plugin(
            const api::Logger& logger,
            const YAML::Node& node,
            api::message_bus_t bus)
            : PluginBase(logger, node)
        {
        }

        void Plugin::start()
        {
        }
    }
}
}
