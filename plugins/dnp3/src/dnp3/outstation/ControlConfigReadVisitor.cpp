// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "ControlConfigReadVisitor.h"
#include "dnp3/ConfigStrings.h"

namespace adapter {
namespace dnp3 {
    namespace outstation {

        std::map<ControlKey, bool> read_bool_mapping(const YAML::Node& node)
        {
            std::map<ControlKey, bool> mapping;
            util::yaml::foreach (
                util::yaml::require(node, util::keys::mapping),
                [&mapping](const YAML::Node& elem) {
                    ControlKey key {
                        opendnp3::OperationTypeSpec::from_string(util::yaml::require_string(elem, keys::operation_type)),
                        opendnp3::TripCloseCodeSpec::from_string(util::yaml::require_string(elem, keys::trip_close_code)),
                    };                    

                    const auto value = util::yaml::require(elem, util::keys::value).as<bool>();

                    if (mapping.find(key) != mapping.end()) {
                        throw api::Exception(elem.Mark(), "Duplicate control mapping, op type = ", opendnp3::OperationTypeSpec::to_string(key.first), " tcc = ", opendnp3::TripCloseCodeSpec::to_string(key.second));
                    }

                    mapping[key] = value;
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
