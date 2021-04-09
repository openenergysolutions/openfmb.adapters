// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "adapter-util/config/YAMLGetters.h"

#include "adapter-util/ConfigStrings.h"
#include "adapter-util/util/YAMLUtil.h"

namespace adapter {
namespace util {
    namespace yaml {
        namespace get {

            double scale(const YAML::Node& node)
            {
                return yaml::require(node, keys::scale).as<double>();
            }

            uint16_t index(const YAML::Node& node)
            {
                return yaml::require_integer<uint16_t>(node, keys::index);
            }

            int enum_value(const YAML::Node& node, const std::string& key, const ::google::protobuf::EnumDescriptor& desc)
            {
                const auto value_name = yaml::require_string(node, key);
                const auto value = desc.FindValueByName(value_name);
                if (!value) {
                    const auto mark = node.Mark();
                    throw api::Exception("unknown enum value \"", value_name, "\" for enum ", desc.name(), " at line: ", mark.line, " column: ", mark.column);
                }
                return value->number();
            }
        }
    }
}
}
