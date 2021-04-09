// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_LOG_PLUGINFACTORY_H
#define OPENFMB_ADAPTER_LOG_PLUGINFACTORY_H

#include <adapter-api/IPluginFactory.h>

namespace adapter {
namespace log {
    class PluginFactory final : public api::IPluginFactory {
    public:
        std::string name() const override
        {
            return "log";
        }

        std::string description() const override
        {
            return "pretty prints profiles to the log";
        };

        schema::Object get_plugin_schema() const override;

        std::unique_ptr<api::IPlugin> create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus) override;
    };
}
}

#endif
