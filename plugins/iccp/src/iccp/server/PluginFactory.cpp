// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "iccp/server/PluginFactory.h"

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/ProfileInfo.h>

#include <adapter-util/config/CommandPriorityMap.h>
#include <adapter-util/config/generated/ModelVisitors.h>
#include <adapter-util/util/YAMLTemplate.h>
#include <schema-util/Builder.h>

#include "../ConfigStrings.h"

#include "ControlSchemaWriteVisitor.h"
#include "Plugin.h"
#include "ServerSchemaWriteVisitor.h"
#include "iccp/generated/AuthenticationType.h"

#include <iostream>

namespace adapter {
namespace iccp {
    namespace server {

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
                            visitor.get_schema()));
                } else {
                    auto visitor = ServerSchemaWriteVisitor{};
                    util::visit<T>(visitor);
                    props.emplace_back(
                        object_property(
                            util::keys::mapping,
                            Required::yes,
                            "profile mapping",
                            visitor.get_schema()));
                }
            }
        };

        schema::Object PluginFactory::get_plugin_schema() const
        {
            return schema::Object({ schema::numeric_property<int64_t>(
                                        keys::thread_pool_size,
                                        schema::Required::yes,
                                        "number of threads in the pool (defaults to std::thread::hardware_concurrency() if <= 0",
                                        1,
                                        schema::Bound<int64_t>::from(0),
                                        schema::Bound<int64_t>::unused()),
                                    schema::array_property(
                                        keys::servers,
                                        schema::Required::yes,
                                        "list of server configuration files",
                                        util::yaml::get_template_schema("iccp-server-template.yaml")) });
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
                    StringFormat::None),
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
                            { "iccp-server" },
                            schema::Required::yes,
                            "plugin type",
                            "iccp-server"
                        )
                    })
                ),
                string_property(
                    keys::iccp_version,
                    Required::yes,
                    "ICCP/TASE2 version",
                    "V2000_8",
                    StringFormat::None),
                string_property(
                    keys::server_ip,
                    Required::yes,
                    "Local IP address",
                    "0.0.0.0",
                    StringFormat::IPv4),
                numeric_property<uint16_t>(
                    keys::server_port,
                    Required::yes,
                    "TCP port on which the server will be listening",
                    102,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)),
                object_property(
                    keys::server_specific,
                    Required::no,
                    "Server specific addressing",
                    Object({
                        numeric_property<uint16_t>(
                            keys::ae_invoke_id,
                            Required::yes,
                            "AE Invoke ID",
                            10,
                            Bound<uint16_t>::from(0),
                            Bound<uint16_t>::from(65535)),
                        numeric_property<uint16_t>(
                            keys::ae_qualifier,
                            Required::yes,
                            "AE Qualitifer",
                            12,
                            Bound<uint16_t>::from(0),
                            Bound<uint16_t>::from(65535)),
                        numeric_property<uint16_t>(
                            keys::ap_invoke_id,
                            Required::yes,
                            "AP Invoke ID",
                            10,
                            Bound<uint16_t>::from(0),
                            Bound<uint16_t>::from(65535)),
                        string_property(
                            keys::ap_title,
                            Required::yes,
                            "AP Title",
                            "1.1.999.1",
                            StringFormat::None),
                        string_property(
                            keys::presentation_selector,
                            Required::yes,
                            "Presentation Selector",
                            "00 00 00 01",
                            StringFormat::None),
                        string_property(
                            keys::session_selector,
                            Required::yes,
                            "Session Selector",
                            "00 01",
                            StringFormat::None),
                        string_property(
                            keys::transport_selector,
                            Required::yes,
                            "Transport Selector",
                            "00 01",
                            StringFormat::None),
                    })),
                object_property(
                    keys::authentication_mechanism,
                    Required::no,
                    "Authentication mechanism",
                    Object({},
                        schema::OneOf({
                            schema::Variant({schema::ConstantProperty::from_enum<AuthenticationType>(AuthenticationType::Value::none)}, {}),
                            schema::Variant({schema::ConstantProperty::from_enum<AuthenticationType>(AuthenticationType::Value::password)}, {
                                schema::string_property(
                                    keys::password,
                                    schema::Required::yes,
                                    "weak password",
                                    "",
                                    schema::StringFormat::None
                                )
                            }),
                            schema::Variant({schema::ConstantProperty::from_enum<AuthenticationType>(AuthenticationType::Value::certificate)}, {
                                schema::string_property(
                                    util::keys::ca_trusted_cert_file,
                                    schema::Required::yes,
                                    "trusted public certificate of the server",
                                    "server_cert.pem",
                                    schema::StringFormat::None
                                ),
                                schema::string_property(
                                    util::keys::client_private_key_file,
                                    schema::Required::yes,
                                    "private key to use for authentication",
                                    "client_key.pem",
                                    schema::StringFormat::None
                                ),
                                schema::string_property(
                                    util::keys::client_cert_chain_file,
                                    schema::Required::yes,
                                    "public key to use for authentication",
                                    "client_cert.pem",
                                    schema::StringFormat::None
                                )
                            }),
                        })
                    )
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