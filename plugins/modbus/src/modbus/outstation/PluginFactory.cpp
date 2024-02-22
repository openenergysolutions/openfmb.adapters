// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "modbus/outstation/PluginFactory.h"

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/ProfileInfo.h>
#include <adapter-util/config/generated/ModelVisitors.h>
#include <adapter-util/util/EnumUtil.h>
#include <adapter-util/util/YAMLTemplate.h>
#include <schema-util/Builder.h>

#include "ConfigStrings.h"
#include "outstation/ControlSchemaWriteVisitor.h"
#include "outstation/MeasurementSchemaWriteVisitor.h"
#include "outstation/Plugin.h"
#include "generated/LogLevel.h"

#include <iostream>

namespace adapter {
namespace modbus {
namespace outstation {

    template <typename T>
    struct SchemaWriter {
        static void handle(std::vector<schema::property_ptr_t>& props)
        {
            using namespace adapter::schema;

            if (util::profile_info<T>::type == util::ProfileType::Control) {
                auto visitor = ControlSchemaWriteVisitor{};
                util::visit<T>(visitor);
                props.emplace_back(
                    object_property(
                        util::keys::mapping,
                        Required::yes,
                        "profile mapping",
                        visitor.get_schema()
                    )
                );
            }
            else {
                auto visitor = MeasurementSchemaWriteVisitor{};
                util::visit<T>(visitor);
                props.emplace_back(
                    object_property(
                        util::keys::mapping,
                        Required::yes,
                        "profile mapping",
                        visitor.get_schema()
                    )
                );
            }
        }
    };

    schema::Object PluginFactory::get_plugin_schema() const
    {
        return schema::Object({
            schema::numeric_property<int64_t>(
                keys::thread_pool_size,
                schema::Required::yes,
                "number of threads in the pool (defaults to std::thread::hardware_concurrency() if <= 0",
                1,
                schema::Bound<int64_t>::from(0),
                schema::Bound<int64_t>::unused()
            ),
            schema::array_property(
                keys::sessions,
                schema::Required::yes,
                "list of session configuration files",
                util::yaml::get_template_schema("modbus-outstation-template.yaml")
            )
        });
    }

    std::vector<schema::property_ptr_t> PluginFactory::get_session_schema() const
    {
        using namespace adapter::schema;

        return {
            string_property(
                util::keys::name,
                Required::yes,
                "Name used in the logs",
                "device1",
                StringFormat::None
            ),
            object_property(
                util::keys::file,
                Required::no,
                "file information, used by configuration tool",
                Object({
                    enum_property(
                        util::keys::id,
                        { "openfmb-adapter-template" },
                        schema::Required::yes,
                        "file id type",
                        "openfmb-adapter-template"
                    ),
                    string_property(
                        util::keys::edition,
                        Required::yes,
                        "openfmb edition",
                        "2.1",
                        StringFormat::None
                    ),
                    string_property(
                        util::keys::version,
                        Required::yes,
                        "openfmb adapter version",
                        "2.1.0.0",
                        StringFormat::None
                    ),
                    enum_property(
                        util::keys::plugin,
                        { "modbus-outstation" },
                        schema::Required::yes,
                        "plugin type",
                        "modbus-outstation"
                    )
                })
            ),
            enum_property<LogLevel>(
                Required::yes,
                "Protocol log level",
                LogLevel::Value::Info
            ),
            string_property(
                keys::adapter,
                Required::yes,
                "Network adapter to use",
                "0.0.0.0",
                StringFormat::None
            ),
            numeric_property<uint16_t>(
                keys::port,
                Required::yes,
                "TCP port on which the outstation will be listening",
                502,
                Bound<uint16_t>::from(0),
                Bound<uint16_t>::from(65535)
            ),
            numeric_property<uint16_t>(
                keys::unit_identifier,
                Required::yes,
                "Modbus unit identifier (aka slave address)",
                1,
                Bound<uint16_t>::from(0),
                Bound<uint16_t>::from(255)
            ),
            numeric_property<int64_t>(
                keys::max_num_connections,
                Required::yes,
                "Maximum number of concurrent TCP connections",
                10,
                Bound<int64_t>::from(0),
                Bound<int64_t>::unused()
            )
        };
    }

    std::vector<schema::property_ptr_t> PluginFactory::get_profile_schema(const std::string& profile) const
    {
        auto props = std::vector<schema::property_ptr_t>{};
        api::ProfileRegistry::handle_by_name<SchemaWriter>(profile, props);
        return props;
    }

    std::unique_ptr<api::IPlugin> PluginFactory::create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
    {
        return std::make_unique<Plugin>(node, logger, bus);;
    }

}
}
}
