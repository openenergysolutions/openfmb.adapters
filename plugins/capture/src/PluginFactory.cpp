
#include "capture/PluginFactory.h"

#include "ConfigStrings.h"
#include "Plugin.h"

#include <adapter-api/Exception.h>
#include <adapter-util/ConfigStrings.h>
#include <schema-util/Builder.h>

namespace adapter {
namespace capture {
    schema::Object PluginFactory::get_plugin_schema() const
    {
        return schema::Object({
            schema::string_property(
                keys::file,
                schema::Required::yes,
                "file to write to",
                "capture.txt",
                schema::StringFormat::None
            )
        });
    }

    void PluginFactory::write_default_config(YAML::Emitter& emitter) const
    {
        emitter << YAML::Key << keys::file << YAML::Value << "capture.txt";
    }

    std::unique_ptr<api::IPlugin> PluginFactory::create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
    {
        return std::make_unique<Plugin>(node, logger, std::move(bus));
    }

    void PluginFactory::write_session_config(YAML::Emitter& out, const api::profile_vec_t& profiles) const
    {
        throw api::Exception("Capture plugin does not support writing session configuration");
    }
}
}
