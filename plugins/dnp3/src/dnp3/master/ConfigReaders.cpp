
#include "ConfigReaders.h"

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/config/YAMLGetters.h>
#include <adapter-util/util/YAMLUtil.h>

#include <opendnp3/gen/TripCloseCode.h>
#include <opendnp3/gen/OperationType.h>

#include "dnp3/ConfigStrings.h"

namespace adapter {
namespace dnp3 {
    namespace master {        

        Control::Control(uint16_t index, const opendnp3::ControlRelayOutputBlock& crob)
            : index(index)
            , crob(crob)
        {
        }

        Control read_control(const YAML::Node& node)
        {
            return Control{
                util::yaml::get::index(node),
                opendnp3::ControlRelayOutputBlock{
                    opendnp3::OperationTypeSpec::from_string(util::yaml::require_string(node, keys::operation_type)),
                    opendnp3::TripCloseCodeSpec::from_string(util::yaml::require_string(node, keys::trip_close_code)),
                    false,
                    util::yaml::require_integer<uint8_t>(node, keys::count),
                    util::yaml::require_integer<uint32_t>(node, keys::on_time_ms),
                    util::yaml::require_integer<uint32_t>(node, keys::off_time_ms) }
            };
        }

        opendnp3::ClassField read_class_field(const YAML::Node& node)
        {
            return opendnp3::ClassField(
                util::yaml::require(node, keys::class0).as<bool>(),
                util::yaml::require(node, keys::class1).as<bool>(),
                util::yaml::require(node, keys::class2).as<bool>(),
                util::yaml::require(node, keys::class3).as<bool>()
            );
        }

        opendnp3::ClassField read_event_class_field(const YAML::Node& node)
        {
            return opendnp3::ClassField(
                false,
                util::yaml::require(node, keys::class1).as<bool>(),
                util::yaml::require(node, keys::class2).as<bool>(),
                util::yaml::require(node, keys::class3).as<bool>()
            );
        }
    }
}
}