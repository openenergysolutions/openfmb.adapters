// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "goose/SubscribingPluginFactory.h"

#include "ConfigStrings.h"
#include "adapter-util/ConfigStrings.h"
#include "adapter-util/config/generated/ModelVisitors.h"
#include "adapter-util/util/EnumUtil.h"
#include "adapter-util/util/YAMLTemplate.h"
#include "schema-util/Builder.h"
#include "generated/Type.h"
#include "GooseStructureConfigVisitor.h"
#include "sub/SubscribingSchemaWriteVisitor.h"
#include "sub/SubscribingPlugin.h"

#include <iostream>

namespace adapter {
namespace goose {

    template <class T>
    struct SubSchemaWriter {
        static void handle(std::vector<schema::property_ptr_t>& props)
        {
            using namespace adapter::schema;

            // Quality templates
            props.emplace_back(
                array_property(
                    keys::quality_templates,
                    Required::yes,
                    "Quality templates",
                    Object({
                        string_property(
                            keys::quality_id,
                            Required::yes,
                            "unique ID",
                            "default-quality",
                            StringFormat::None
                        ),
                        enum_property(
                            keys::quality_validity,
                            util::SchemaWriteVisitorBase::get_enum_variants_from_proto(commonmodule::ValidityKind_descriptor()),
                            Required::yes,
                            "Quality validity",
                            commonmodule::ValidityKind_Name(commonmodule::ValidityKind_good)
                        ),
                        bool_property(
                            keys::quality_overflow,
                            Required::yes,
                            "Overflow",
                            false
                        ),
                        bool_property(
                            keys::quality_outofrange,
                            Required::yes,
                            "Out of range",
                            false
                        ),
                        bool_property(
                            keys::quality_badreference,
                            Required::yes,
                            "Bad reference",
                            false
                        ),
                        bool_property(
                            keys::quality_oscillatory,
                            Required::yes,
                            "Oscillatory",
                            false
                        ),
                        bool_property(
                            keys::quality_failure,
                            Required::yes,
                            "Failure",
                            false
                        ),
                        bool_property(
                            keys::quality_olddata,
                            Required::yes,
                            "Old data",
                            false
                        ),
                        bool_property(
                            keys::quality_inconsistent,
                            Required::yes,
                            "Inconsistent",
                            false
                        ),
                        bool_property(
                            keys::quality_inaccurate,
                            Required::yes,
                            "Inaccurate",
                            false
                        ),
                        enum_property(
                            keys::quality_source,
                            util::SchemaWriteVisitorBase::get_enum_variants_from_proto(commonmodule::SourceKind_descriptor()),
                            Required::yes,
                            "Source",
                            commonmodule::SourceKind_Name(commonmodule::SourceKind_process)
                        ),
                        bool_property(
                            keys::quality_test,
                            Required::yes,
                            "Test",
                            false
                        ),
                        bool_property(
                            keys::quality_operatorblocked,
                            Required::yes,
                            "Operator blocked",
                            false
                        ),
                    })
                )
            );

            // Timequality templates
            props.emplace_back(
                array_property(
                    keys::timequality_templates,
                    Required::yes,
                    "Timequality templates",
                    Object({
                        string_property(
                            keys::timequality_id,
                            Required::yes,
                            "unique ID",
                            "default-time-quality",
                            StringFormat::None
                        ),
                        bool_property(
                            keys::timequality_clock_failure,
                            Required::yes,
                            "Clock failure",
                            false
                        ),
                        bool_property(
                            keys::timequality_clock_not_synchronized,
                            Required::yes,
                            "Clock not synchronized",
                            false
                        ),
                        bool_property(
                            keys::timequality_leap_seconds_known,
                            Required::yes,
                            "Lead seconds known",
                            false
                        ),
                        enum_property(
                            keys::timequality_time_accuracy,
                            util::SchemaWriteVisitorBase::get_enum_variants_from_proto(commonmodule::TimeAccuracyKind_descriptor()),
                            Required::yes,
                            "Time accuracy",
                            commonmodule::TimeAccuracyKind_Name(commonmodule::TimeAccuracyKind_T0)
                        )
                    })
                )
            );

            // GOOSE structure
            props.emplace_back(
                array_property(
                    keys::goose_struct,
                    Required::yes,
                    "GOOSE message structure",
                    GooseStructureConfigVisitor::get_schema()
                )
            );

            auto visitor = SubscribingSchemaWriteVisitor{};
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
    };

    std::string SubscribingPluginFactory::name() const
    {
        return "goose-sub";
    }

    std::string SubscribingPluginFactory::description() const
    {
        return "maps OpenFMB messages to the GOOSE protocol";
    }

    std::unique_ptr<api::IPlugin> SubscribingPluginFactory::create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
    {
        return std::make_unique<SubscribingPlugin>(node, logger, bus);
    }

    schema::Object SubscribingPluginFactory::get_plugin_schema() const
    {
        return schema::Object({
            schema::array_property(
                keys::goCb,
                schema::Required::yes,
                "GOOSE control blocks",
                util::yaml::get_template_schema("goCb-template.yaml")
            )
        });
    }

    std::vector<schema::property_ptr_t> SubscribingPluginFactory::get_session_schema() const
    {
        using namespace adapter::schema;

        return {
            string_property(
                keys::networkAdapter,
                Required::yes,
                "Network adapter to use",
                "ens1",
                StringFormat::None
            ),
            string_property(
                keys::src_mac,
                Required::yes,
                "Source MAC address",
                "08:42:70:00:00:00",
                StringFormat::MacAddress
            ),
            string_property(
                keys::dest_mac,
                Required::yes,
                "Destination MAC address",
                "01:0C:CD:02:00:01",
                StringFormat::MacAddress
            ),
            numeric_property<uint16_t>(
                keys::appId,
                Required::yes,
                "APPID",
                1000,
                Bound<uint16_t>::from(0),
                Bound<uint16_t>::from(65535)
            ),
            string_property(
                keys::goCbRef,
                Required::yes,
                "GOOSE Control Block Reference",
                "REF615A_204LD0/LLN0$GO$OpenFMBheartbeat",
                StringFormat::None
            ),
            string_property(
                keys::datSet,
                Required::yes,
                "GOOSE datSet",
                "REF615A_204LD0/LLN0$OpenFMBGDS",
                StringFormat::None
            ),
            string_property(
                keys::goID,
                Required::yes,
                "GOOSE goId",
                "REF615A_204LD0/LLN0.OpenFMBheartbeat",
                StringFormat::None
            ),
            numeric_property<int64_t>(
                keys::confRev,
                Required::yes,
                "Configuration revision",
                100,
                Bound<int64_t>::from(0),
                Bound<int64_t>::from(4294967295)
            ),
            numeric_property<int64_t>(
                keys::ttl,
                Required::yes,
                "Retransmission interval (in milliseconds)",
                100,
                Bound<int64_t>::from(0),
                Bound<int64_t>::unused()
            )
        };
    }

    std::vector<schema::property_ptr_t> SubscribingPluginFactory::get_profile_schema(const std::string& profile) const
    {
        auto props = std::vector<schema::property_ptr_t>{};
        api::ProfileRegistry::handle_by_name<SubSchemaWriter>(profile, props);
        return props;
    }

} // namespace goose
} // namespace adapter
