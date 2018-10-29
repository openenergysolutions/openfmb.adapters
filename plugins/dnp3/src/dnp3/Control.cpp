
#include "Control.h"

#include <adapter-api/ConfigStrings.h>
#include <adapter-api/util/YAMLUtil.h>

#include "ConfigStrings.h"
#include "ControlCodeMeta.h"

namespace adapter {
namespace dnp3 {

    constexpr const char* const g12v1 = "g12v1";
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
        const auto crob = yaml::require(node, g12v1);

        return Control{
            yaml::require_integer<uint16_t>(node, ::adapter::keys::index),
            opendnp3::ControlRelayOutputBlock{
                ControlCodeMeta::from_string(yaml::require_string(crob, control_code)),
                yaml::require_integer<uint8_t>(crob, count),
                yaml::require_integer<uint32_t>(crob, on_time_ms),
                yaml::require_integer<uint32_t>(crob, off_time_ms) }
        };
    }

    void Control::write(const Control& control, YAML::Emitter& out)
    {
        out << YAML::Key << ::adapter::keys::index << YAML::Value << control.index;
        out << YAML::Key << ::adapter::keys::command_id << "some-command-id";
        out << YAML::Key << g12v1;

        out << YAML::BeginMap;
        out << YAML::Key << control_code << YAML::Value << ControlCodeMeta::to_string(control.crob.functionCode);
        out << YAML::Key << count << YAML::Value << static_cast<int>(control.crob.count);
        out << YAML::Key << on_time_ms << YAML::Value << control.crob.onTimeMS;
        out << YAML::Key << off_time_ms << YAML::Value << control.crob.offTimeMS;
        out << YAML::EndMap;
    }
}
}
