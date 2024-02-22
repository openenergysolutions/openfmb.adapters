// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_ICCP_CLIENT_PLUGINFACTORY_H
#define OPENFMB_ADAPTER_ICCP_CLIENT_PLUGINFACTORY_H

#include "adapter-api/IPluginFactory.h"

namespace adapter {
    namespace iccp {
        namespace client {

            class PluginFactory final : public api::IPluginFactory {

            public:
                PluginFactory() = default;

                virtual std::string name() const override
                {
                    return "iccp-client";
                }

                virtual std::string description() const override
                {
                    return "maps openFMB to the client side of the ICCP protocol";
                };

                schema::Object get_plugin_schema() const override;

                std::vector<schema::property_ptr_t> get_session_schema() const override;

                std::vector<schema::property_ptr_t> get_profile_schema(const std::string& profile) const override;

                virtual std::unique_ptr<api::IPlugin>
                create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus) override;
            };
        }
    }
}

#endif //OPENFMB_ADAPTER_ICCP_CLIENT_PLUGINFACTORY_H
