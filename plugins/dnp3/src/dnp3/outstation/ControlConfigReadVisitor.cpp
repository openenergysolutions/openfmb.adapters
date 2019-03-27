
#include "ControlConfigReadVisitor.h"

namespace adapter {
namespace dnp3 {
    namespace outstation {

        std::map<opendnp3::ControlCode, bool> read_bool_mapping(const YAML::Node& node)
        {
            std::map<opendnp3::ControlCode, bool> mapping;
            util::yaml::foreach (
                util::yaml::require(node, util::keys::mapping),
                [&mapping](const YAML::Node& elem) {
                    const auto code = ControlCodeMeta::from_string(util::yaml::require_string(elem, ControlCodeMeta::label));
                    const auto value = util::yaml::require(elem, util::keys::value).as<bool>();

                    if (mapping.find(code) != mapping.end()) {
                        throw api::Exception(elem.Mark(), "Duplicate control code in mapping: ", ControlCodeMeta::to_string(code));
                    }

                    mapping[code] = value;
                });
            return mapping;
        }
    }
}
}
