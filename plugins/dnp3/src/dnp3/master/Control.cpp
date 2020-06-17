
#include "Control.h"

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/config/YAMLGetters.h>
#include <adapter-util/util/YAMLUtil.h>

#include <opendnp3/gen/TripCloseCode.h>
#include <opendnp3/gen/OperationType.h>

#include "dnp3/ConfigStrings.h"

namespace adapter {
namespace dnp3 {
    namespace master {

        constexpr const char* const trip_close_code = "trip-close-code";
        constexpr const char* const operation_type = "operation-type";
        constexpr const char* const count = "count";
        constexpr const char* const on_time_ms = "on-time-ms";
        constexpr const char* const off_time_ms = "off-time-ms";

        Control::Control(uint16_t index, const opendnp3::ControlRelayOutputBlock& crob)
            : index(index)
            , crob(crob)
        {
        }

        Control Control::read(const YAML::Node& node)
        {
            return Control{
                util::yaml::get::index(node),
                opendnp3::ControlRelayOutputBlock{
                    opendnp3::OperationTypeSpec::from_string(util::yaml::require_string(node, operation_type)),
                    opendnp3::TripCloseCodeSpec::from_string(util::yaml::require_string(node, trip_close_code)),
                    false,
                    util::yaml::require_integer<uint8_t>(node, count),
                    util::yaml::require_integer<uint32_t>(node, on_time_ms),
                    util::yaml::require_integer<uint32_t>(node, off_time_ms) }
            };
        }        
    }
}
}