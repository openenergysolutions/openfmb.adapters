// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "LoggerConfig.h"

#include <adapter-util/util/YAMLUtil.h>
#include <spdlog/sinks/rotating_file_sink.h>
#include <spdlog/sinks/stdout_sinks.h>

#include "ConfigKeys.h"
#include "schema-util/Builder.h"

namespace adapter {

namespace logging {

    namespace keys {
        static const char* const console = "console";
        static const char* const logging = "logging";
        static const char* const max_files = "max-files";
        static const char* const max_size = "max-size";
        static const char* const path = "path";
        static const char* const rotating_file = "rotating-file";
    }

    api::Logger create_logger_from_yaml(const YAML::Node& root)
    {

        const auto logging = util::yaml::require(root, keys::logging);
        const auto primary_log_name = util::yaml::require(logging, adapter::keys::logger_name).as<std::string>();

        std::vector<spdlog::sink_ptr> sinks;

        const auto console = util::yaml::require(logging, keys::console);

        if (util::yaml::require(console, adapter::keys::enabled).as<bool>()) {
            sinks.push_back(std::make_shared<spdlog::sinks::stdout_sink_mt>());
        }

        const auto rotating = util::yaml::require(logging, keys::rotating_file);

        if (util::yaml::require(rotating, adapter::keys::enabled).as<bool>()) {
            sinks.push_back(
                std::make_shared<spdlog::sinks::rotating_file_sink_mt>(
                    util::yaml::require(rotating, keys::path).as<std::string>(),
                    util::yaml::require(rotating, keys::max_size).as<size_t>(),
                    util::yaml::require(rotating, keys::max_files).as<size_t>()));
        }

        return api::Logger(primary_log_name, sinks);
    }

    void write_default_logging_config(YAML::Emitter& out)
    {
        out << YAML::Key << keys::logging;

        out << YAML::BeginMap;
        /**/ out << YAML::Key << adapter::keys::logger_name << YAML::Value << "application";
        /**/ out << YAML::Key << keys::console << YAML::Comment("log messages to the console");
        /**/ out << YAML::BeginMap;
        /**/ /**/ out << YAML::Key << adapter::keys::enabled << YAML::Value << true;
        /**/ out << YAML::EndMap;
        /**/ out << YAML::Key << keys::rotating_file << YAML::Comment("log messages to rotating files");
        /**/ out << YAML::BeginMap;
        /**/ /**/ out << YAML::Key << adapter::keys::enabled << YAML::Value << false;
        /**/ /**/ out << YAML::Key << keys::path << YAML::Value << "adapter.log";
        /**/ /**/ out << YAML::Key << keys::max_size << YAML::Value << 1048576 << YAML::Comment("maximum size of a single file in bytes");
        /**/ /**/ out << YAML::Key << keys::max_files << YAML::Value << 3;
        /**/ out << YAML::EndMap;
        out << YAML::EndMap;
    }

    schema::property_ptr_t get_logging_config_schema()
    {
        return schema::object_property(
            keys::logging, schema::Required::yes, "common application settings",
            schema::Object({
                schema::string_property(adapter::keys::logger_name, schema::Required::yes, "name of the logger", "application", schema::StringFormat::None),
                schema::object_property(keys::console, schema::Required::yes, "log messages to the console", schema::Object({
                    schema::bool_property(adapter::keys::enabled, schema::Required::yes, "enable console logging", true)
                })),
                schema::object_property(keys::rotating_file, schema::Required::yes, "log messages to rotating files", schema::Object({
                    schema::bool_property(adapter::keys::enabled, schema::Required::yes, "enable rotating files logging", false),
                    schema::string_property(keys::path, schema::Required::yes, "filename to use", "adapter.log", schema::StringFormat::None),
                    schema::numeric_property<int64_t>(keys::max_size, schema::Required::yes, "maximum size of a single file in bytes", 1048576, schema::Bound<int64_t>::from(0), schema::Bound<int64_t>::unused()),
                    schema::numeric_property<int64_t>(keys::max_files, schema::Required::yes, "maximum number of files to keep before starting to remove old data", 3, schema::Bound<int64_t>::from(0), schema::Bound<int64_t>::unused())
                }))
            })
        );
    }
}
}