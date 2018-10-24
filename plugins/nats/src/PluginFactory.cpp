
#include "nats/PluginFactory.h"

#include "Plugin.h"

#include "ConfigStrings.h"

#include "adapter-api/ConfigStrings.h"
#include "adapter-api/ProfileMode.h"

#include <google/protobuf/descriptor.h>
#include <proto-api/switchmodule/switchmodule.pb.h>

namespace adapter {
namespace nats {

    void write_profile_keys(YAML::Emitter& out, google::protobuf::Descriptor const* descriptor)
    {
        out << YAML::BeginMap;
        out << YAML::Key << ::adapter::keys::profile << descriptor->name();
        out << YAML::Key << keys::subject << YAML::Value << "*" << YAML::Comment("* or an mRID");
        out << YAML::EndMap;
    }

    void PluginFactory::write_default_config(YAML::Emitter& out) const
    {
        out << YAML::Key << keys::max_queued_messages << 100;
        out << YAML::Comment("how many messages to buffer before discarding the oldest");
        out << YAML::Key << keys::connect_url << "nats://localhost:4222";
        out << YAML::Key << keys::connect_retry_seconds << 5;

        out << YAML::Key << keys::publish << YAML::Comment("to the NATs broker");
        out << YAML::BeginSeq;
        write_profile_keys(out, switchmodule::SwitchReadingProfile::descriptor());
        write_profile_keys(out, switchmodule::SwitchStatusProfile::descriptor());
        out << YAML::EndSeq;

        out << YAML::Key << keys::subscribe << YAML::Comment("from the NATs broker");
        out << YAML::BeginSeq;
        write_profile_keys(out, switchmodule::SwitchControlProfile::descriptor());
        out << YAML::EndSeq;
    }

    std::unique_ptr<IPlugin> PluginFactory::create(const YAML::Node& node, const Logger& logger, message_bus_t bus)
    {
        return std::make_unique<Plugin>(
            logger,
            node,
            std::move(bus));
    }

    void PluginFactory::write_session_config(YAML::Emitter& out, const profile_vec_t& profiles) const
    {
        throw Exception("NATS does not support writing session configuration");
    }
}
}
