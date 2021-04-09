// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_GOOSE_PUBLISHPLUGINFACTORY_H
#define OPENFMB_ADAPTER_GOOSE_PUBLISHPLUGINFACTORY_H

#include <adapter-api/IPluginFactory.h>

namespace adapter {

namespace goose {

    class PublishingPluginFactory final : public api::IPluginFactory {
    public:
        PublishingPluginFactory() = default;

        std::string name() const final;
        std::string description() const final;

        std::unique_ptr<api::IPlugin> create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus) final;

        schema::Object get_plugin_schema() const override;
        std::vector<schema::property_ptr_t> get_session_schema() const override;
        std::vector<schema::property_ptr_t> get_profile_schema(const std::string& profile) const override;
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_PUBLISHPLUGINFACTORY_H
