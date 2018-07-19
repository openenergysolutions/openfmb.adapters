
#include "log/PluginFactory.h"

#include "Plugin.h"
#include "ConfigKeys.h"

#include <adapter-api/util/Exception.h>
#include <adapter-api/ConfigStrings.h>

namespace adapter
{
    namespace log
    {
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

            write_tag_item(out, "resourceReading.readingMMXU.W.net.cVal.mag.f.value", "W", 0);
            write_tag_item(out, "resourceReading.readingMMXU.PPV.phsAB.cVal.mag.f.value", "Vab", 1);
            write_tag_item(out, "resourceReading.readingMMXU.PPV.phsBC.cVal.mag.f.value", "Vbc", 1);
            write_tag_item(out, "resourceReading.readingMMXU.PPV.phsCA.cVal.mag.f.value", "Vca", 1);
            write_tag_item(out, "resourceReading.readingMMXU.Hz.mag.f.value", "Hz", 3);

            out << YAML::EndSeq;
        }


        std::unique_ptr<IPlugin> PluginFactory::create(const YAML::Node& node, const Logger& logger, message_bus_t bus)
        {
            return std::make_unique<Plugin>(node, logger, std::move(bus));
        }

        void PluginFactory::write_default_config(YAML::Emitter& out) const
        {
            out << YAML::Key << keys::log_debug_string << YAML::Value << true << YAML::Comment("log the entire protobuf debug string for every profile");

            out << YAML::Key << keys::filters;
            out << YAML::BeginSeq;

            out << YAML::BeginMap;
            out << YAML::Key << ::adapter::keys::profile << YAML::Value << ProfileMeta::to_string(Profile::resource_reading);
            out << YAML::Key << ::adapter::keys::name << YAML::Value << "" << YAML::Comment("conducting equipment name");
            out << YAML::Key << ::adapter::keys::path << YAML::Value << "values.txt" << YAML::Comment("file to which values will be appended");
            out << YAML::Key << keys::print_alias << YAML::Value << true;
            out << YAML::Key << keys::log_all_values << YAML::Value << false;
            out << YAML::Key << keys::values;
            write_default_tag_list(out);
            out << YAML::EndMap;

            out << YAML::EndSeq;
        }

        void PluginFactory::write_session_config(YAML::Emitter& out, const profile_vec_t& profiles) const
        {
            throw Exception("Log adapter does not support writing session configuration");
        }
    }

}


