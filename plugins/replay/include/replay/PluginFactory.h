// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_REPLAY_PLUGINFACTORY_H
#define OPENFMB_ADAPTER_REPLAY_PLUGINFACTORY_H

#include <adapter-api/IPluginFactory.h>

namespace adapter {
namespace replay {

    class PluginFactory final : public api::IPluginFactory {

    public:
        PluginFactory() = default;

        virtual std::string name() const override
        {
            return "replay";
        }

        virtual std::string description() const override
        {
            return "replays captured OpenFMB messages from a file";
        };

        schema::Object get_plugin_schema() const override;

        virtual std::unique_ptr<api::IPlugin> create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus) override;
    };
}
}

#endif
