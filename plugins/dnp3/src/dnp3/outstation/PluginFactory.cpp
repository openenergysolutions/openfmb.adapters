
#include "dnp3/outstation/PluginFactory.h"

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/ProfileInfo.h>

#include <adapter-util/config/CommandPriorityMap.h>
#include <adapter-util/config/generated/ModelVisitors.h>
#include <adapter-util/util/YAMLTemplate.h>

#include "../ConfigStrings.h"

#include <iostream>

namespace adapter {
namespace dnp3 {
    namespace outstation {

        template <class T>
        struct WriterHandler {
            static void handle(YAML::Emitter& out)
            {
            }
        };

        void write_profile_configs(YAML::Emitter& out, const api::profile_vec_t& profiles)
        {
            for (const auto& profile : profiles) {

                out << YAML::BeginMap;
                out << YAML::Key << util::keys::name << YAML::Value << profile;

                api::ProfileRegistry::handle_by_name<WriterHandler>(profile, out);
            }
        }

        void PluginFactory::write_default_config(YAML::Emitter& out) const
        {
            out << YAML::Key << keys::thread_pool_size << YAML::Value << 1;
            out << YAML::Comment("defaults to std::thread::hardware_concurrency() if <= 0");
            out << YAML::Key << keys::masters;
            util::yaml::write_default_template_config(out, "dnp3-outstation-template.yaml");
        }

        std::unique_ptr<api::IPlugin>
        PluginFactory::create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
        {
            throw api::Exception("not implemented");
        }

        void PluginFactory::write_session_config(YAML::Emitter& out, const api::profile_vec_t& profiles) const
        {
            if (profiles.empty()) {
                throw api::Exception(
                    "You must specify at least one profile when generating DNP3 session configuration");
            }

            out << YAML::BeginMap;
            out << YAML::Key << util::keys::name << YAML::Value << "device1";
            out << YAML::Comment("This name is pre-pended to each log message");

            out << YAML::Key << keys::channel;
            out << YAML::BeginMap;
            out << YAML::Key << keys::listen_adapter << YAML::Value << "127.0.0.1";
            out << YAML::Key << keys::port << YAML::Value << 20000;
            out << YAML::EndMap;

            out << YAML::Key << "protocol";
            out << YAML::BeginMap;
            out << YAML::Key << keys::master_address << YAML::Value << 1;
            out << YAML::Key << keys::outstation_address << YAML::Value << 10;
            out << YAML::EndMap;

            out << YAML::Key << "profiles";
            out << YAML::BeginSeq;
            write_profile_configs(out, profiles);
            out << YAML::EndSeq;

            out << YAML::EndMap;
        }
    }
}
}