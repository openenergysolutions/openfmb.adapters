
#include "ControlConfigReadVisitor.h"
#include "dnp3/ConfigStrings.h"

#include <opendnp3/gen/ControlCode.h>

namespace adapter {
namespace dnp3 {
    namespace outstation {

        std::map<opendnp3::ControlCode, bool> read_bool_mapping(const YAML::Node& node)
        {
            std::map<opendnp3::ControlCode, bool> mapping;
            util::yaml::foreach (
                util::yaml::require(node, util::keys::mapping),
                [&mapping](const YAML::Node& elem) {
                    const auto code = opendnp3::ControlCodeSpec::from_string(util::yaml::require_string(elem, keys::control_code));
                    const auto value = util::yaml::require(elem, util::keys::value).as<bool>();

                    if (mapping.find(code) != mapping.end()) {
                        throw api::Exception(elem.Mark(), "Duplicate control code in mapping: ", opendnp3::ControlCodeSpec::to_string(code));
                    }

                    mapping[code] = value;
                });
            return mapping;
        }

        std::map<int, int> read_enum_mapping(const YAML::Node& node, google::protobuf::EnumDescriptor const* descriptor)
        {
            std::map<int, int> mapping;
            util::yaml::foreach (
                util::yaml::require(node, util::keys::mapping),
                [&mapping, descriptor](const YAML::Node& elem) {
                    const auto name = util::yaml::require_string(elem, util::keys::name);
                    const auto value = util::yaml::require_integer<int>(elem, util::keys::value);

                    const auto enum_value = descriptor->FindValueByName(name);
                    if (!enum_value) {
                        throw api::Exception(elem, "Undefined value: ", value, " for enum: ", descriptor->name());
                    }

                    mapping[value] = enum_value->number();
                });
            return mapping;
        }
    }
}
}
