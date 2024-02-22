// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

//
// Created by cory on 2/9/21.
//

#ifndef OPENFMB_ADAPTER_ICCP_CLIENT_CONFIGREADER_H
#define OPENFMB_ADAPTER_ICCP_CLIENT_CONFIGREADER_H

#include <yaml-cpp/yaml.h>

namespace adapter {
namespace iccp {
namespace client {

/**
* Control is a index + CROB w/ static helper methods for YAML (de)serialization
*/
struct Control {
    std::string point_name;
    Control(std::string point_name);
};

Control read_control(const YAML::Node& node);

}
}
}
#endif //OPENFMB_ADAPTER_ICCP_CLIENT_CONFIGREADER_H
