
#include "log/PluginFactory.h"

#include "Plugin.h"
#include "ConfigKeys.h"

#include <adapter-api/util/Exception.h>
#include <adapter-api/ConfigStrings.h>

namespace adapter
{
    namespace log
    {
        std::unique_ptr<IPlugin> PluginFactory::create(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            return std::make_unique<Plugin>(node, logger, bus);
        }

        void PluginFactory::write_default_config(YAML::Emitter& out) const
        {
            out << YAML::Key << keys::log_debug_string << YAML::Value << true << YAML::Comment("log the entire protobuf debug string for every profile");

            out << YAML::Key << keys::filters;
            out << YAML::BeginSeq;

            out << YAML::BeginMap;
            out << YAML::Key << ::adapter::keys::mRID << YAML::Value << "" << YAML::Comment("conducting equipment mRID filter");
            out << YAML::Key << keys::tag << YAML::Value << "" << YAML::Comment("tag name. formed by walking the names down from the profile name.");
            out << YAML::EndMap;

            out << YAML::EndSeq;
        }

        void PluginFactory::write_session_config(YAML::Emitter& out, const profile_vec_t& profiles) const
        {
            throw Exception("Log adapter does not support writing session configuration");
        }
    }

}


