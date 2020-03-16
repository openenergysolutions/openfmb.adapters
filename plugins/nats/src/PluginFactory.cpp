
#include "nats/PluginFactory.h"

#include "Plugin.h"

#include "ConfigStrings.h"

#include "adapter-util/ConfigStrings.h"
#include "adapter-util/config/generated/Profile.h"
#include "schema-util/Builder.h"

#include "generated/SecurityType.h"

#include <google/protobuf/descriptor.h>
#include <proto-api/switchmodule/switchmodule.pb.h>

namespace adapter {
namespace nats {

    schema::Object PluginFactory::get_plugin_schema() const
    {
        return schema::Object({
            schema::numeric_property<int64_t>(
                keys::max_queued_messages,
                schema::Required::yes,
                "how many messages to buffer before discarding the oldest",
                100,
                schema::Bound<int64_t>::from(0),
                schema::Bound<int64_t>::unused()
            ),
            schema::string_property(
                keys::connect_url,
                schema::Required::yes,
                "URL to the NATS server",
                "nats://localhost:4222",
                schema::StringFormat::None
            ),
            schema::numeric_property<int64_t>(
                keys::connect_retry_seconds,
                schema::Required::yes,
                "number of seconds to wait before trying to re-establish a connection to the server",
                5,
                schema::Bound<int64_t>::from(0),
                schema::Bound<int64_t>::unused()
            ),
            schema::object_property(
                util::keys::security,
                schema::Required::yes,
                "security configuration",
                schema::Object({
                    schema::string_property(
                        keys::jwt_creds_file,
                        schema::Required::no,
                        "JSON Web Token credential file to use",
                        "user.creds",
                        schema::StringFormat::None
                    )
                },
                    schema::OneOf({
                        schema::Variant({schema::ConstantProperty::from_enum<SecurityType>(SecurityType::Value::none)}, {}),
                        schema::Variant({schema::ConstantProperty::from_enum<SecurityType>(SecurityType::Value::tls_server_auth)}, {
                            schema::string_property(
                                util::keys::ca_trusted_cert_file,
                                schema::Required::yes,
                                "trusted public certificate of the server",
                                "server_cert.pem",
                                schema::StringFormat::None
                            )
                        }),
                        schema::Variant({schema::ConstantProperty::from_enum<SecurityType>(SecurityType::Value::tls_mutual_auth)}, {
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
            ),
            schema::array_property(
                util::keys::publish,
                schema::Required::yes,
                "profile to send to the NATS broker",
                schema::Object({
                    schema::enum_property<util::Profile>(
                        schema::Required::yes,
                        "name of the profile to send",
                        util::Profile::Value::SwitchReadingProfile
                    ),
                    schema::string_property(
                        keys::subject,
                        schema::Required::yes,
                        "mRID of the profile to send to, or * for all",
                        "*",
                        schema::StringFormat::Subject
                    )
                })
            ),
            schema::array_property(
                util::keys::subscribe,
                schema::Required::yes,
                "profile to receive from the NATS broker",
                schema::Object({
                    schema::enum_property<util::Profile>(
                        schema::Required::yes,
                        "name of the profile to subscribe to",
                        util::Profile::Value::SwitchControlProfile
                    ),
                    schema::string_property(
                        keys::subject,
                        schema::Required::yes,
                        "mRID of the profile to subscribe to, or * for all",
                        "*",
                        schema::StringFormat::Subject
                    )
                })
            )
        });
    }

    std::unique_ptr<api::IPlugin> PluginFactory::create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
    {
        return std::make_unique<Plugin>(
            logger,
            node,
            std::move(bus));
    }

}
}
