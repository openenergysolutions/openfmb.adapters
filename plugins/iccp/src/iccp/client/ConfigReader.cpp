// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "ConfigReader.h"
#include "iccp/ConfigStrings.h"

#include <adapter-util/util/YAMLUtil.h>

namespace adapter {
namespace iccp {
    namespace client {

        Control::Control(std::string point_name)
            : point_name(point_name)
        {
        }

        Control read_control(const YAML::Node& node)
        {
            return Control{
                util::yaml::require_string(node, keys::name)
            };
        }
    }
}
}
