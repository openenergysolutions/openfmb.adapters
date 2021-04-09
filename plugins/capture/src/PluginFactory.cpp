// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "capture/PluginFactory.h"

#include "ConfigStrings.h"
#include "Plugin.h"

#include <adapter-api/Exception.h>
#include <adapter-util/ConfigStrings.h>
#include <schema-util/Builder.h>

namespace adapter {
namespace capture {
    schema::Object PluginFactory::get_plugin_schema() const
    {
        return schema::Object({
            schema::string_property(
                keys::file,
                schema::Required::yes,
                "file to write to",
                "capture.txt",
                schema::StringFormat::None
            )
        });
    }

    std::unique_ptr<api::IPlugin> PluginFactory::create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
    {
        return std::make_unique<Plugin>(node, logger, std::move(bus));
    }

}
}
