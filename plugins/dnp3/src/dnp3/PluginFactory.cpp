
#include "dnp3/PluginFactory.h"

#include <adapter-api/ConfigStrings.h>
#include <adapter-api/ProfileInfo.h>

#include <adapter-api/config/generated/ModelVisitors.h>
#include <adapter-api/util/YAMLTemplate.h>

#include "ControlConfigWriteVisitor.h"
#include "MeasurementConfigWriteVisitor.h"

#include "CommandOrdering.h"
#include "ConfigStrings.h"
#include "Plugin.h"

namespace adapter {
namespace dnp3 {

    template <class T>
    struct WriterHandler {
        static void handle(YAML::Emitter& out)
        {
            std::cout << "Generating: " << T::descriptor()->name() << std::endl;

            if (profile_info<T>::is_control) {
                out << YAML::Key << ::adapter::keys::command_order << YAML::Comment("order of commands - first == highest priority, last == lowest priority");

                // provide an example of the two types
                CommandOrdering::write_sequence(
                    {
                        { 0, CommandType::Value::crob },
                        { 1, CommandType::Value::analog_output },
                    },
                    out);
            }

            out << YAML::Key << ::adapter::keys::mapping << YAML::Comment("profile model starts here");
            out << YAML::BeginMap;

            if (profile_info<T>::is_control) {
                ControlConfigWriteVisitor visitor(out);
                visit<T>(visitor);

            } else {
                MeasurementConfigWriteVisitor visitor(out);
                visit<T>(visitor);
            }

            out << YAML::EndMap;
        }
    };

    void write_profile_configs(YAML::Emitter& out, const profile_vec_t& profiles)
    {
        for (const auto& profile : profiles) {

            out << YAML::BeginMap;
            out << YAML::Key << ::adapter::keys::name << YAML::Value << profile;

            ProfileRegistry::handle_by_name<WriterHandler>(profile, out);
        }
    }

    void PluginFactory::write_default_config(YAML::Emitter& out) const
    {
        out << YAML::Key << keys::thread_pool_size << YAML::Value << 1;
        out << YAML::Comment("defaults to std::thread::hardware_concurrency() if <= 0");
        out << YAML::Key << keys::masters;
        yaml::write_default_template_config(out, "dnp3-master-template.yaml");
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
        if (profiles.empty()) {
            throw Exception("You must specify at least one profile when generating DNP3 session configuration");
        }

        out << YAML::BeginMap;
        out << YAML::Key << ::adapter::keys::name << YAML::Value << "device1";
        out << YAML::Comment("This name is pre-pended to each log message");

        out << YAML::Key << keys::channel;
        out << YAML::BeginMap;
        out << YAML::Key << keys::adapter << YAML::Value << "0.0.0.0";
        out << YAML::Comment("Override to use a specific adapter");
        out << YAML::Key << keys::outstation_ip << YAML::Value << "127.0.0.1";
        out << YAML::Key << keys::port << YAML::Value << 20000;
        out << YAML::EndMap;

        out << YAML::Key << "protocol";
        out << YAML::BeginMap;
        out << YAML::Key << keys::master_address << YAML::Value << 1;
        out << YAML::Key << keys::outstation_address << YAML::Value << 10;
        out << YAML::Key << keys::integrity_poll_ms << YAML::Value << 5000;
        out << YAML::EndMap;

        out << YAML::Key << "profiles";
        out << YAML::BeginSeq;
        write_profile_configs(out, profiles);
        out << YAML::EndSeq;

        out << YAML::EndMap;
    }
}
}
