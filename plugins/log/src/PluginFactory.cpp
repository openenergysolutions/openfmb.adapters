
#include "log/PluginFactory.h"

#include "ConfigKeys.h"
#include "Plugin.h"

#include <adapter-api/Exception.h>
#include <adapter-util/ConfigStrings.h>

namespace adapter {
namespace log {
    void write_tag_item(YAML::Emitter& out, const char* tag, const char* alias, int digits)
    {
        out << YAML::BeginMap;
        out << YAML::Key << keys::tag << YAML::Value << tag;
        out << YAML::Key << keys::alias << YAML::Value << alias;
        out << YAML::Key << keys::digits << YAML::Value << digits;
        out << YAML::EndMap;
    }

    void write_default_tag_list(YAML::Emitter& out)
    {
        out << YAML::BeginSeq;

        write_tag_item(out, "meterReading.readingMMXU.W.net.cVal.mag.f.value", "W", 0);
        write_tag_item(out, "meterReading.readingMMXU.PPV.phsAB.cVal.mag.f.value", "Vab", 1);
        write_tag_item(out, "meterReading.readingMMXU.PPV.phsBC.cVal.mag.f.value", "Vbc", 1);
        write_tag_item(out, "meterReading.readingMMXU.PPV.phsCA.cVal.mag.f.value", "Vca", 1);
        write_tag_item(out, "meterReading.readingMMXU.Hz.mag.f.value", "Hz", 3);

        out << YAML::EndSeq;
    }

    std::unique_ptr<api::IPlugin> PluginFactory::create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
    {
        return std::make_unique<Plugin>(node, logger, std::move(bus));
    }

    void PluginFactory::write_default_config(YAML::Emitter& out) const
    {
        out << YAML::Key << keys::log_debug_string << YAML::Value << true << YAML::Comment("log the entire protobuf debug string for every profile");

        out << YAML::Key << keys::filters;
        out << YAML::BeginSeq;

        out << YAML::BeginMap;
        out << YAML::Key << util::keys::profile << YAML::Value << metermodule::MeterReadingProfile::descriptor()->name();
        out << YAML::Key << util::keys::name << YAML::Value << "" << YAML::Comment("conducting equipment name");
        out << YAML::Key << util::keys::path << YAML::Value << "values.txt" << YAML::Comment("file to which values will be appended");
        out << YAML::Key << keys::print_alias << YAML::Value << true;
        out << YAML::Key << keys::log_all_values << YAML::Value << false;
        out << YAML::Key << keys::values;
        write_default_tag_list(out);
        out << YAML::EndMap;

        out << YAML::EndSeq;
    }

    void PluginFactory::write_session_config(YAML::Emitter& out, const api::profile_vec_t& profiles) const
    {
        throw api::Exception("Log adapter does not support writing session configuration");
    }
}
}
