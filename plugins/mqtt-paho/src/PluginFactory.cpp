
#include "mqtt-paho/PluginFactory.h"

#include <adapter-util/ConfigStrings.h>

#include "ConfigStrings.h"
#include "Plugin.h"

#include "generated/SecurityType.h"

namespace adapter {
namespace mqtt {

    void write_profile_keys(YAML::Emitter& out, google::protobuf::Descriptor const* descriptor)
    {
        out << YAML::BeginMap;
        out << YAML::Key << util::keys::profile << descriptor->name();
        out << YAML::Key << keys::topic_suffix << YAML::Value << "#" << YAML::Comment("# or an mRID");
        out << YAML::EndMap;
    }

    void PluginFactory::write_default_config(YAML::Emitter& out) const
    {
        out << YAML::Key << keys::max_queued_messages << 100;
        out << YAML::Comment("how many messages to buffer before discarding the oldest");
        out << YAML::Key << keys::server_address << "tcp://localhost:1883";
        out << YAML::Key << keys::client_id << "client1";
        out << YAML::Key << keys::connect_retry_delay_ms << 5000;

        out << YAML::Key << util::keys::security;
        out << YAML::BeginMap;
        out << YAML::Key << SecurityType::label << YAML::Value << SecurityType::to_string(SecurityType::Value::none);
        out << YAML::EndMap;

        out << YAML::Key << util::keys::publish << YAML::Comment("to the MQTT broker");
        out << YAML::BeginSeq;
        write_profile_keys(out, switchmodule::SwitchReadingProfile::descriptor());
        write_profile_keys(out, switchmodule::SwitchStatusProfile::descriptor());
        out << YAML::EndSeq;

        out << YAML::Key << util::keys::subscribe << YAML::Comment("from the MQTT broker");
        out << YAML::BeginSeq;
        write_profile_keys(out, switchmodule::SwitchControlProfile::descriptor());
        out << YAML::EndSeq;
    }

    std::unique_ptr<api::IPlugin> PluginFactory::create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
    {
        return std::make_unique<Plugin>(logger, node, std::move(bus));
    }

    void PluginFactory::write_session_config(YAML::Emitter& out, const api::profile_vec_t& profiles) const
    {
        throw api::Exception("MQTT does not support writing session configuration");
    }
}
}
