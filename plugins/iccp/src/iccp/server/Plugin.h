// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_ICCP_SERVER_PLUGIN_H
#define OPENFMB_ADAPTER_ICCP_SERVER_PLUGIN_H

#include "iccp/PluginBase.h"

namespace adapter {
    namespace iccp {
        namespace server {

            class Plugin final : public PluginBase {


            public:
                Plugin() = delete;

                Plugin(const api::Logger& logger, const YAML::Node& node, api::message_bus_t bus);

                virtual std::string name() const override
                {
                    return "iccp-server";
                }

                virtual void start() override;

            private:
                void add_server(const YAML::Node& node, api::message_bus_t bus);

            };
        }
    }
}

#endif
