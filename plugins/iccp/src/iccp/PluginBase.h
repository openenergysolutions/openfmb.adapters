// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_ICCP_PLUGINBASE_H
#define OPENFMB_ADAPTER_ICCP_PLUGINBASE_H

#include <adapter-api/IPluginFactory.h>

namespace adapter {
    namespace iccp {

        class PluginBase : public api::IPlugin {

        public:
            PluginBase() = delete;
            virtual ~PluginBase() = default;

            PluginBase(const api::Logger& logger, const YAML::Node& node);

        protected:
            api::Logger logger;
        };
    }
}

#endif
