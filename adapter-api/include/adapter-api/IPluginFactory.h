// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_IPLUGINFACTORY_H
#define OPENFMB_ADAPTER_IPLUGINFACTORY_H

#include "IMessageBus.h"
#include "IPlugin.h"

#include "schema-util/Types.h"

#include "yaml-cpp/yaml.h"

#include "Logger.h"

namespace adapter {
namespace api {

    using profile_vec_t = std::vector<std::string>;

    /**
     * An adapter is something that can read a YAML configuration,
     * and create an instance of an IPlugin
     */
    class IPluginFactory {
    public:
        virtual ~IPluginFactory() = default;

        virtual std::string name() const = 0;

        virtual std::string description() const = 0;

        virtual schema::Object get_plugin_schema() const = 0;

        virtual std::vector<schema::property_ptr_t> get_session_schema() const
        {
            throw api::Exception(name(), "does not support writing session configuration");
        }

        virtual std::vector<schema::property_ptr_t> get_profile_schema(const std::string& profile) const
        {
            throw api::Exception(name(), "does not support writing session configuration");
        }

        virtual std::unique_ptr<IPlugin> create(const YAML::Node& node, const Logger& logger, message_bus_t bus) = 0;
    };
}
}

#endif
