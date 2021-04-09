// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "dnp3/master/PluginFactory.h"

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/ProfileInfo.h>

#include <adapter-util/config/CommandPriorityMap.h>
#include <adapter-util/config/generated/ModelVisitors.h>
#include <adapter-util/util/YAMLTemplate.h>
#include <schema-util/Builder.h>

#include "ControlSchemaWriteVisitor.h"
#include "MeasurementSchemaWriteVisitor.h"

#include "../ConfigStrings.h"
#include "Plugin.h"

#include <iostream>

namespace adapter {
namespace dnp3 {
namespace master {

    template <typename T>
    struct SchemaWriter {
        static void handle(std::vector<schema::property_ptr_t>& props)
        {
            using namespace adapter::schema;

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
                props.emplace_back(
                    string_property(
                        keys::poll_name,
                        Required::yes,
                        "name of the poll that retrieves the values for this profile",
                        "static_data_scan",
                        StringFormat::None
                    )
                );

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
                keys::masters,
                schema::Required::yes,
                "DNP3 masters",
                util::yaml::get_template_schema("dnp3-master-template.yaml")
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
                "name pre-pended to each log message",
                "device1",
                StringFormat::None
            ),
            object_property(
                keys::channel,
                Required::yes,
                "DNP3 channel configuration",
                Object({
                    string_property(
                        keys::adapter,
                        Required::yes,
                        "network adapter to use",
                        "0.0.0.0",
                        StringFormat::IPv4
                    ),
                    string_property(
                        keys::outstation_ip,
                        Required::yes,
                        "outstation IP address",
                        "127.0.0.1",
                        StringFormat::IPv4
                    ),
                    numeric_property<uint16_t>(
                        keys::port,
                        Required::yes,
                        "TCP port",
                        20000,
                        Bound<uint16_t>::from(1),
                        Bound<uint16_t>::from(65535)
                    )
                })
            ),
            object_property(
                keys::protocol,
                Required::yes,
                "DNP3 specific configuration",
                Object({
                    numeric_property<uint16_t>(
                        keys::master_address,
                        Required::yes,
                        "DNP3 master link-layer address",
                        1,
                        Bound<uint16_t>::from(0),
                        Bound<uint16_t>::from(65535)
                    ),
                    numeric_property<uint16_t>(
                        keys::outstation_address,
                        Required::yes,
                        "DNP3 outstation link-layer address",
                        10,
                        Bound<uint16_t>::from(0),
                        Bound<uint16_t>::from(65535)
                    ),
                    object_property(
                        keys::startup_integrity,
                        Required::yes,
                        "configures which classes are read during the startup integrity scan",
                        Object(
                            {
                                bool_property(
                                    keys::class0,
                                    Required::yes,
                                    "read class 0",
                                    false
                                ),
                                bool_property(
                                    keys::class1,
                                    Required::yes,
                                    "read class 1",
                                    false
                                ),
                                bool_property(
                                    keys::class2,
                                    Required::yes,
                                    "read class 2",
                                    false
                                ),
                                bool_property(
                                    keys::class3,
                                    Required::yes,
                                    "read class 3",
                                    false
                                )
                            }
                        )
                    ),
                    object_property(
                        keys::unsolicited,
                        Required::yes,
                        "configures which event classes to will be reported via unsolicited",
                        Object(
                            {
                                bool_property(
                                    keys::class1,
                                    Required::yes,
                                    "enable class 1 unsolicited responses",
                                    true
                                ),
                                bool_property(
                                    keys::class2,
                                    Required::yes,
                                    "enable class 2 unsolicited responses",
                                    true
                                ),
                                bool_property(
                                    keys::class3,
                                    Required::yes,
                                    "enable class 3 unsolicited responses",
                                    true
                                )
                            }
                        )
                    )                   
                })
            ),
            array_property(
                keys::polls,
                Required::yes,
                "periodic polls to execute",
                Object({
                    string_property(
                        util::keys::name,
                        Required::yes,
                        "name associated with that poll",
                        "static_data_scan",
                        StringFormat::None
                    ),
                    numeric_property<uint16_t>(
                        keys::poll_interval,
                        Required::yes,
                        "poll interval (in milliseconds)",
                        1000,
                        Bound<uint16_t>::from(0),
                        Bound<uint16_t>::unused()
                    ),
                    object_property(
                        keys::classes,
                        Required::yes,
                        "configuration for a class poll (g60v{1,2,3,4})",
                        Object(
                            {
                                bool_property(
                                    keys::class0,
                                    Required::yes,
                                    "request class 0 static data",
                                    true
                                ),
                                bool_property(
                                    keys::class1,
                                    Required::yes,
                                    "request class 1 events",
                                    false
                                ),
                                bool_property(
                                    keys::class2,
                                    Required::yes,
                                    "request class 2 events",
                                    false
                                ),
                                bool_property(
                                    keys::class3,
                                    Required::yes,
                                    "request class 3 events",
                                    false
                                )
                            }
                        )
                    )
                }                
            ))
        };
    }

    std::vector<schema::property_ptr_t> PluginFactory::get_profile_schema(const std::string& profile) const
    {
        auto props = std::vector<schema::property_ptr_t>{};
        api::ProfileRegistry::handle_by_name<SchemaWriter>(profile, props);
        return props;
    }

    std::unique_ptr<api::IPlugin>
    PluginFactory::create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
    {
        return std::make_unique<Plugin>(
            logger,
            node,
            std::move(bus));
    }

}
}
}
