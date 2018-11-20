#include "DDSPluginFactory.h"
#include <adapter-util/ConfigStrings.h>

#include "ConfigKeys.h"
#include "DDSPlugin.h"
#include "adapter-api/ProfileMode.h"

namespace adapter {

void DDSPluginFactory::write_default_config(YAML::Emitter& out) const
{
    out << YAML::Key << keys::domain_id << 0;

    out << YAML::Newline << YAML::Comment("profiles that can be read (subscribe) or written (publish) to the DDS bus - values can 'publish', 'subscribe', or 'none'");
    out << YAML::Key << keys::profiles;
    out << YAML::BeginMap;

    ProfileRegistry::foreach_descriptor(
        [&out](const google::protobuf::Descriptor* descriptor) {
            out << YAML::Key << descriptor->name() << YAML::Value << ProfileModeMeta::none;
        });

    out << YAML::EndMap;
}

std::unique_ptr<IPlugin> DDSPluginFactory::create(const YAML::Node& node, const Logger& logger, message_bus_t bus)
{
    return std::make_unique<DDSPlugin>(node, logger, bus);
}

void DDSPluginFactory::write_session_config(YAML::Emitter& out, const profile_vec_t& profiles) const
{
    throw Exception("twinoaks-dds plugin does not require a separate session configuration file");
}
}
