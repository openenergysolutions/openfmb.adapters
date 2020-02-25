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

    void PluginFactory::write_default_config(YAML::Emitter& emitter) const
    {
        emitter << YAML::Key << keys::database_url << YAML::Value << "postgresql://user:password@localhost:5432/dbname";
        emitter << YAML::Key << keys::store_measurement << YAML::Value << "true";
        emitter << YAML::Key << keys::table_name << YAML::Value << "data";
        emitter << YAML::Key << keys::store_raw_message << YAML::Value << "true";
        emitter << YAML::Key << keys::raw_table_name << YAML::Value << "raw_data";
        emitter << YAML::Key << keys::raw_data_format << YAML::Value << 0 << YAML::Comment("0 = json; 1 = protobuf");
        emitter << YAML::Key << keys::max_queued_messages << 100 << YAML::Comment("how many messages to buffer before discarding the oldest");
        emitter << YAML::Key << keys::connect_retry_seconds << 5 << YAML::Comment("time to wait between to connection attempts");
        ;
    }

    void PluginFactory::write_session_config(YAML::Emitter& out, const api::profile_vec_t& profiles) const
    {
        throw api::Exception("timescaledb adapter does not support writing session configuration");
    }

    std::unique_ptr<api::IPlugin> PluginFactory::create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
    {
        return std::make_unique<Plugin>(node, logger, *bus);
    }
}
}
