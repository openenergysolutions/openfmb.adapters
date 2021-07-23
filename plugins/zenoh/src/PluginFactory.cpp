// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "zenoh/PluginFactory.h"

#include "Plugin.h"

#include "ConfigStrings.h"

#include "adapter-util/ConfigStrings.h"
#include "adapter-util/config/generated/Profile.h"
#include "schema-util/Builder.h"

#include <google/protobuf/descriptor.h>
#include <proto-api/switchmodule/switchmodule.pb.h>

namespace adapter {
namespace zenoh {

    schema::Object PluginFactory::get_plugin_schema() const
    {
        return schema::Object({
            schema::numeric_property<int64_t>(
                keys::max_queued_messages,
                schema::Required::yes,
                "how many messages to buffer before discarding the oldest",
                100,
                schema::Bound<int64_t>::from(0),
                schema::Bound<int64_t>::unused()
            ),
            schema::numeric_property<int64_t>(
                keys::connect_retry_seconds,
                schema::Required::yes,
                "number of seconds to wait before trying to re-establish a connection to the server",
                5,
                schema::Bound<int64_t>::from(0),
                schema::Bound<int64_t>::unused()
            ),
            schema::array_property(
                util::keys::publish,
                schema::Required::yes,
                "profile to send to Zenoh peers",
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
                "profile to receive from Zenoh peers",
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

    std::unique_ptr<api::IPlugin> PluginFactory::create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
    {
        return std::make_unique<Plugin>(
            logger,
            node,
            std::move(bus));
    }

}
}
