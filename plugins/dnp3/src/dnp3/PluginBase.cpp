// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "PluginBase.h"

#include "ConfigStrings.h"
#include "LogAdapter.h"

#include <adapter-util/util/YAMLUtil.h>

#include <thread>

using namespace opendnp3;

namespace adapter {
namespace dnp3 {

    PluginBase::PluginBase(
        const api::Logger& logger,
        const YAML::Node& node)
        : logger(logger)
        , manager(
              util::yaml::optionally(node[keys::thread_pool_size], std::thread::hardware_concurrency()),
              std::make_shared<LogAdapter>(logger))
    {
    }
}
}
