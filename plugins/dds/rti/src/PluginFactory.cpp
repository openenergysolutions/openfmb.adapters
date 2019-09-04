
#include "rti/PluginFactory.h"

#include <adapter-util/ConfigStrings.h>

#include "ConfigKeys.h"
#include "DDSPlugin.h"

namespace adapter {
namespace dds {
namespace rti {

using namespace api;

static void write_profile_keys(YAML::Emitter& out, google::protobuf::Descriptor const* descriptor)
{
    out << YAML::BeginMap;
    out << YAML::Key << util::keys::profile << descriptor->name();
    out << YAML::Key << keys::subject << YAML::Value << "*" << YAML::Comment("* or an mRID");
    out << YAML::EndMap;
}

void PluginFactory::write_default_config(YAML::Emitter& out) const
{
    out << YAML::Key << keys::domain_id << 0;

    out << YAML::Key << keys::publish << YAML::Comment("to the DDS broker");
    out << YAML::BeginSeq;
    write_profile_keys(out, switchmodule::SwitchReadingProfile::descriptor());
    write_profile_keys(out, switchmodule::SwitchStatusProfile::descriptor());
    out << YAML::EndSeq;

    out << YAML::Key << keys::subscribe << YAML::Comment("from the DDS broker");
    out << YAML::BeginSeq;
    write_profile_keys(out, switchmodule::SwitchControlProfile::descriptor());
    out << YAML::EndSeq;
}

std::unique_ptr<IPlugin> PluginFactory::create(const YAML::Node& node, const Logger& logger, message_bus_t bus)
{
    return std::make_unique<DDSPlugin>(logger, node, bus);
}

void PluginFactory::write_session_config(YAML::Emitter& out, const profile_vec_t& profiles) const
{
    throw Exception("dds-rti plugin does not require a separate session configuration file");
}

}
}
}
