#include "goose/PublishingPluginFactory.h"

#include "ConfigStrings.h"
#include "adapter-util/ConfigStrings.h"
#include "adapter-util/config/generated/ModelVisitors.h"
#include "adapter-util/util/YAMLTemplate.h"
#include "schema-util/Builder.h"
#include "generated/Type.h"
#include "pub/PublishingSchemaWriteVisitor.h"
#include "pub/PublishingPlugin.h"

#include <iostream>

namespace adapter {
namespace goose {

    template <class T>
    struct SchemaWriter {
        static void handle(std::vector<schema::property_ptr_t>& props)
        {
            using namespace adapter::schema;

            auto visitor = PublishingSchemaWriteVisitor{};
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

    std::string PublishingPluginFactory::name() const
    {
        return "goose-pub";
    }

    std::string PublishingPluginFactory::description() const
    {
        return "maps GOOSE protocol messages to OpenFMB";
    }

    std::unique_ptr<api::IPlugin> PublishingPluginFactory::create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
    {
        return std::make_unique<PublishingPlugin>(node, logger, bus);
    }

    schema::Object PublishingPluginFactory::get_plugin_schema() const
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

    std::vector<schema::property_ptr_t> PublishingPluginFactory::get_session_schema() const
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
            // TODO: add GOOSE structure
        };
    }

    std::vector<schema::property_ptr_t> PublishingPluginFactory::get_profile_schema(const std::string& profile) const
    {
        auto props = std::vector<schema::property_ptr_t>{};
        api::ProfileRegistry::handle_by_name<SchemaWriter>(profile, props);
        return props;
    }

} // namespace goose
} // namespace adapter
