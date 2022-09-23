// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "timescaledb/PluginFactory.h"

#include "ConfigStrings.h"
#include "Plugin.h"
#include "adapter-api/Exception.h"
#include "schema-util/Builder.h"

namespace adapter {
namespace timescaledb {

    std::string PluginFactory::name() const
    {
        return "timescaledb";
    }

    std::string PluginFactory::description() const
    {
        return "saves all the published messages to a TimescaleDB";
    };

    schema::Object PluginFactory::get_plugin_schema() const
    {
        return schema::Object({
            schema::string_property(
                keys::database_url,
                schema::Required::yes,
                "database connection URL",
                "postgresql://user:password@localhost:5432/dbname",
                schema::StringFormat::None
            ),
            schema::numeric_property<int64_t>(
                keys::data_store_interval_seconds,
                schema::Required::no,
                "store data in every x seconds, 0 means 'no wait'",
                0,
                schema::Bound<int64_t>::from(0),
                schema::Bound<int64_t>::from(1000)
            ),
            schema::bool_property(
                keys::store_measurement,
                schema::Required::yes,
                "store measurements",
                true
            ),
            schema::string_property(
                keys::table_name,
                schema::Required::yes,
                "database table name for measurements",
                "data",
                schema::StringFormat::None
            ),
            schema::bool_property(
                keys::store_raw_message,
                schema::Required::yes,
                "store raw data in the database",
                true
            ),
            schema::string_property(
                keys::raw_table_name,
                schema::Required::yes,
                "database table name for raw data",
                "raw_data",
                schema::StringFormat::None
            ),
            schema::numeric_property<int64_t>(
                keys::raw_data_format,
                schema::Required::yes,
                "0 for json, 1 for protobuf",
                0,
                schema::Bound<int64_t>::from(0),
                schema::Bound<int64_t>::from(1)
            ),
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
                "time (in seconds) to wait between two connection attempts",
                5,
                schema::Bound<int64_t>::from(0),
                schema::Bound<int64_t>::unused()
            )
        });
    }

    std::unique_ptr<api::IPlugin> PluginFactory::create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
    {
        return std::make_unique<Plugin>(node, logger, *bus);
    }
}
}
