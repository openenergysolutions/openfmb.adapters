// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "rti/PluginFactory.h"

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/config/generated/Profile.h>
#include <schema-util/Builder.h>

#include "ConfigKeys.h"
#include "DDSPlugin.h"

namespace adapter {
namespace dds {
namespace rti {

using namespace api;

schema::Object PluginFactory::get_plugin_schema() const
{
    return schema::Object({
        schema::numeric_property<int64_t>(
            keys::domain_id,
            schema::Required::yes,
            "how many messages to buffer before discarding the oldest",
            100,
            schema::Bound<int64_t>::from(0),
            schema::Bound<int64_t>::from(232)
        ),
        schema::array_property(
            util::keys::publish,
            schema::Required::yes,
            "profile to send to the DDS broker",
            schema::Object({
                schema::enum_property<util::Profile>(
                    schema::Required::yes,
                    "name of the profile to send",
                    util::Profile::Value::SwitchReadingProfile
                ),
                schema::string_property(
                    keys::subject,
                    schema::Required::yes,
                    "mRID of the profile to send to, or * for all",
                    "*",
                    schema::StringFormat::Subject
                )
            })
        ),
        schema::array_property(
            util::keys::subscribe,
            schema::Required::yes,
            "profile to receive from the DDS broker",
            schema::Object({
                schema::enum_property<util::Profile>(
                    schema::Required::yes,
                    "name of the profile to subscribe to",
                    util::Profile::Value::SwitchDiscreteControlProfile
                ),
                schema::string_property(
                    keys::subject,
                    schema::Required::yes,
                    "mRID of the profile to subscribe to, or * for all",
                    "*",
                    schema::StringFormat::Subject
                )
            })
        )
    });
}

std::unique_ptr<IPlugin> PluginFactory::create(const YAML::Node& node, const Logger& logger, message_bus_t bus)
{
    return std::make_unique<DDSPlugin>(logger, node, bus);
}

}
}
}
