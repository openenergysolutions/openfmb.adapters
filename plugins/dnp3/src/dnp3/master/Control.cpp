
#include "Control.h"

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/config/YAMLGetters.h>
#include <adapter-util/util/YAMLUtil.h>

#include <opendnp3/gen/ControlCode.h>

#include "dnp3/ConfigStrings.h"

namespace adapter {
namespace dnp3 {
    namespace master {

        constexpr const char* const control_code = "control-code";
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
                    opendnp3::ControlCodeSpec::from_string(util::yaml::require_string(node, control_code)),
                    util::yaml::require_integer<uint8_t>(node, count),
                    util::yaml::require_integer<uint32_t>(node, on_time_ms),
                    util::yaml::require_integer<uint32_t>(node, off_time_ms) }
            };
        }

        void Control::write(const Control& control, YAML::Emitter& out)
        {
            out << YAML::Key << util::keys::index << YAML::Value << control.index;
            out << YAML::Key << util::keys::command_id << YAML::Value << "some-command-id";

            out << YAML::Key << control_code << YAML::Value
                << opendnp3::ControlCodeSpec::to_string(control.crob.functionCode);
            out << YAML::Key << count << YAML::Value << static_cast<int>(control.crob.count);
            out << YAML::Key << on_time_ms << YAML::Value << control.crob.onTimeMS;
            out << YAML::Key << off_time_ms << YAML::Value << control.crob.offTimeMS;
        }
    }
}
}