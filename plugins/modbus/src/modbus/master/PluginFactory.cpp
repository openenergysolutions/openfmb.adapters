
#include "modbus/master/PluginFactory.h"

#include <adapter-api/Exception.h>

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/ProfileInfo.h>
#include <adapter-util/config/CommandPriorityMap.h>
#include <adapter-util/config/generated/ModelVisitors.h>
#include <adapter-util/util/EnumUtil.h>
#include <adapter-util/util/YAMLTemplate.h>
#include <schema-util/Builder.h>

#include "ConfigStrings.h"
#include "master/Plugin.h"
#include "master/ControlSchemaWriteVisitor.h"
#include "master/MeasurementSchemaWriteVisitor.h"

#include <iostream>

namespace adapter {
namespace modbus {
namespace master {

    template <typename T>
    struct SchemaWriter {
        static void handle(std::vector<schema::property_ptr_t>& props)
        {
            using namespace adapter::schema;

            props.emplace_back(
                numeric_property<int64_t>(
                    keys::poll_period_ms,
                    Required::yes,
                    "number of milliseconds between two polls",
                    5000,
                    Bound<int64_t>::from(0),
                    Bound<int64_t>::unused()
                )
            );

            if (util::profile_info<T>::type == util::ProfileType::Control) {
                props.emplace_back(util::CommandPriorityMap::get_schema());
                props.emplace_back(
                    numeric_property<int64_t>(
                        util::keys::tolerance,
                        Required::yes,
                        "tolerance of the first point in a schedule (in milliseconds)",
                        5000,
                        Bound<int64_t>::from(0),
                        Bound<int64_t>::unused()
                    )
                );

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
                "Modbus sessions",
                util::yaml::get_template_schema("modbus-master-config.yaml")
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
                "session1",
                StringFormat::None
            ),
            enum_property<LogLevel>(
                Required::yes,
                "Protocol log level",
                LogLevel::Value::Info
            ),
            string_property(
                keys::remote_ip,
                Required::yes,
                "IP address of the device to connect to",
                "127.0.0.1",
                StringFormat::IPv4
            ),
            numeric_property<uint16_t>(
                keys::port,
                Required::yes,
                "TCP port of the device to connect to",
                502,
                Bound<uint16_t>::from(0),
                Bound<uint16_t>::from(65535)
            ),
            string_property(
                keys::adapter,
                Required::yes,
                "Network adapter to use",
                "0.0.0.0",
                StringFormat::None
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
                keys::response_timeout_ms,
                Required::yes,
                "Timeout value in milliseconds for responses",
                10,
                Bound<int64_t>::from(0),
                Bound<int64_t>::unused()
            ),
            bool_property(
                keys::always_write_multiple_registers,
                Required::yes,
                "Always use a Write Multiple Registers (0x10) request",
                false
            ),
            object_property(
                keys::auto_polling,
                Required::yes,
                "Auto polling configuration",
                Object({
                    numeric_property<uint16_t>(
                        keys::max_bit_gaps,
                        Required::yes,
                        "Maximum number of unnecessary bits that can be read when polling for coils and discrete inputs",
                        0,
                        Bound<uint16_t>::from(0),
                        Bound<uint16_t>::from(65535)
                    ),
                    numeric_property<uint16_t>(
                        keys::max_register_gaps,
                        Required::yes,
                        "Maximum number of unnecessary registers that can be read when polling for coils and discrete inputs",
                        0,
                        Bound<uint16_t>::from(0),
                        Bound<uint16_t>::from(65535)
                    ),
                })
            ),
            array_property(
                keys::heartbeats,
                Required::yes,
                "Periodic heartbeat configuration",
                Object({
                    numeric_property<uint16_t>(
                        util::keys::index,
                        Required::yes,
                        "Read this register, invert the masked bits, and write it back",
                        0,
                        Bound<uint16_t>::from(0),
                        Bound<uint16_t>::from(65535)
                    ),
                    numeric_property<int64_t>(
                        keys::period_ms,
                        Required::yes,
                        "Heartbeat period (in milliseconds)",
                        0,
                        Bound<int64_t>::from(0),
                        Bound<int64_t>::unused()
                    ),
                    numeric_property<uint16_t>(
                        keys::mask,
                        Required::yes,
                        "Mask specifying the bits to invert",
                        0x1,
                        Bound<uint16_t>::from(0),
                        Bound<uint16_t>::from(65535)
                    )
                })
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
        return std::make_unique<Plugin>(node, logger, std::move(bus));
    }

}
}
}
