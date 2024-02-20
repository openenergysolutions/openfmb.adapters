// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "PluginBase.h"

#include "ConfigStrings.h"

#include <adapter-util/util/YAMLUtil.h>

namespace adapter {
    namespace iccp {

        PluginBase::PluginBase(
                const api::Logger& logger,
                const YAML::Node& node)
                : logger(logger)
        {
        }
    }
}
