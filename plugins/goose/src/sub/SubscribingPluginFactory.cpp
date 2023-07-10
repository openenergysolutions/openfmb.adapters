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

            props.emplace_back(
                string_property(
                    keys::control_block,
                    Required::yes,
                    "control block name",
                    "OES/LLN0.gcb_name",
                    StringFormat::None
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
        return "IEC61850-server";
    }

    std::string SubscribingPluginFactory::description() const
    {
        return "maps OpenFMB messages to the IEC61850 protocol";
    }

    std::unique_ptr<api::IPlugin> SubscribingPluginFactory::create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
    {
        return std::make_unique<SubscribingPlugin>(node, logger, bus);
    }

    schema::Object SubscribingPluginFactory::get_plugin_schema() const
    {
        return schema::Object({
            schema::array_property(
                keys::cb,
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
                        { "IEC61850-server" },
                        schema::Required::yes,
                        "plugin type",
                        "IEC61850-server"
                    )
                })
            ),
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
