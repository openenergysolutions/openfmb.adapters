// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "dnp3/outstation/PluginFactory.h"

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/ProfileInfo.h>

#include <adapter-util/config/CommandPriorityMap.h>
#include <adapter-util/config/generated/ModelVisitors.h>
#include <adapter-util/util/YAMLTemplate.h>
#include <schema-util/Builder.h>

#include "../ConfigStrings.h"

#include "ControlSchemaWriteVisitor.h"
#include "DefaultVariations.h"
#include "MeasurementSchemaWriteVisitor.h"
#include "Plugin.h"

#include <iostream>

using namespace opendnp3;

namespace adapter {
namespace dnp3 {
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
                keys::outstations,
                schema::Required::yes,
                "DNP3 outstations",
                util::yaml::get_template_schema("dnp3-outstation-template.yaml")
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
                        { "dnp3-outstation" },
                        schema::Required::yes,
                        "plugin type",
                        "dnp3-outstation"
                    )
                })
            ),
            object_property(
                keys::channel,
                Required::yes,
                "DNP3 channel configuration",
                Object({
                    string_property(
                        keys::listen_adapter,
                        Required::yes,
                        "network adapter to listen on",
                        "0.0.0.0",
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
                    bool_property(
                        keys::enable_unsolicited,
                        Required::yes,
                        "enable unsolicited responses",
                        false
                    ),
                    numeric_property<int64_t>(
                        keys::confirm_timeout_ms,
                        Required::yes,
                        "DNP3 confirmation timeout (in milliseconds)",
                        5000,
                        Bound<int64_t>::from(0),
                        Bound<int64_t>::unused()
                    ),
                    object_property(
                        keys::default_static_variations,
                        Required::yes,
                        "DNP3 default static variations",
                        Object({
                            enum_property(
                                keys::binary_input,
                                {
                                    StaticBinaryVariationSpec::to_string(StaticBinaryVariation::Group1Var1),
                                    StaticBinaryVariationSpec::to_string(StaticBinaryVariation::Group1Var2)
                                },
                                Required::yes,
                                "Binary input default static variation",
                                StaticBinaryVariationSpec::to_string(StaticBinaryVariation::Group1Var2)
                            ),
                            enum_property(
                                keys::analog_input,
                                {
                                    StaticAnalogVariationSpec::to_string(StaticAnalogVariation::Group30Var1),
                                    StaticAnalogVariationSpec::to_string(StaticAnalogVariation::Group30Var2),
                                    StaticAnalogVariationSpec::to_string(StaticAnalogVariation::Group30Var3),
                                    StaticAnalogVariationSpec::to_string(StaticAnalogVariation::Group30Var4),
                                    StaticAnalogVariationSpec::to_string(StaticAnalogVariation::Group30Var5),
                                    StaticAnalogVariationSpec::to_string(StaticAnalogVariation::Group30Var6),
                                },
                                Required::yes,
                                "Analog input default static variation",
                                StaticAnalogVariationSpec::to_string(StaticAnalogVariation::Group30Var1)
                            ),
                            enum_property(
                                keys::counter,
                                {
                                    StaticCounterVariationSpec::to_string(StaticCounterVariation::Group20Var1),
                                    StaticCounterVariationSpec::to_string(StaticCounterVariation::Group20Var2),
                                    StaticCounterVariationSpec::to_string(StaticCounterVariation::Group20Var5),
                                    StaticCounterVariationSpec::to_string(StaticCounterVariation::Group20Var6),
                                },
                                Required::yes,
                                "Counter default static variation",
                                StaticCounterVariationSpec::to_string(StaticCounterVariation::Group20Var1)
                            ),
                        })
                    ),
                    object_property(
                        keys::default_event_variations,
                        Required::yes,
                        "DNP3 default event variations",
                        Object({
                            enum_property(
                                keys::binary_input,
                                {
                                    EventBinaryVariationSpec::to_string(EventBinaryVariation::Group2Var1),
                                    EventBinaryVariationSpec::to_string(EventBinaryVariation::Group2Var2),
                                    EventBinaryVariationSpec::to_string(EventBinaryVariation::Group2Var3),
                                },
                                Required::yes,
                                "Binary input default event variation",
                                EventBinaryVariationSpec::to_string(EventBinaryVariation::Group2Var2)
                            ),
                            enum_property(
                                keys::analog_input,
                                {
                                    EventAnalogVariationSpec::to_string(EventAnalogVariation::Group32Var1),
                                    EventAnalogVariationSpec::to_string(EventAnalogVariation::Group32Var2),
                                    EventAnalogVariationSpec::to_string(EventAnalogVariation::Group32Var3),
                                    EventAnalogVariationSpec::to_string(EventAnalogVariation::Group32Var4),
                                    EventAnalogVariationSpec::to_string(EventAnalogVariation::Group32Var5),
                                    EventAnalogVariationSpec::to_string(EventAnalogVariation::Group32Var6),
                                    EventAnalogVariationSpec::to_string(EventAnalogVariation::Group32Var7),
                                    EventAnalogVariationSpec::to_string(EventAnalogVariation::Group32Var8),
                                },
                                Required::yes,
                                "Analog input default event variation",
                                EventAnalogVariationSpec::to_string(EventAnalogVariation::Group32Var1)
                            ),
                            enum_property(
                                keys::counter,
                                {
                                    EventCounterVariationSpec::to_string(EventCounterVariation::Group22Var1),
                                    EventCounterVariationSpec::to_string(EventCounterVariation::Group22Var2),
                                    EventCounterVariationSpec::to_string(EventCounterVariation::Group22Var5),
                                    EventCounterVariationSpec::to_string(EventCounterVariation::Group22Var6),
                                },
                                Required::yes,
                                "Counter default event variation",
                                EventCounterVariationSpec::to_string(EventCounterVariation::Group22Var1)
                            ),
                        })
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

    std::unique_ptr<api::IPlugin>
    PluginFactory::create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
    {
        return std::make_unique<Plugin>(logger, node, bus);
    }

}
}
}