#include "modbus/outstation/PluginFactory.h"

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/ProfileInfo.h>
#include <adapter-util/config/generated/ModelVisitors.h>
#include <adapter-util/util/EnumUtil.h>
#include <adapter-util/util/YAMLTemplate.h>

#include "ConfigStrings.h"
#include "outstation/MeasurementConfigWriteVisitor.h"
#include "outstation/Plugin.h"
#include "generated/LogLevel.h"

#include <iostream>

namespace adapter {
namespace modbus {
namespace outstation {

    template <class T>
    struct ProfileWriter {
        static void handle(YAML::Emitter& out)
        {
            std::cout << "Generating: " << T::descriptor()->name() << std::endl;

            if (util::profile_info<T>::type == util::ProfileType::Control) {
                // TODO: implement this
                //util::CommandPriorityMap::write_default_list(out);
                //out << YAML::Key << util::keys::tolerance << YAML::Value << 5000;
            }

            out << YAML::Key << util::keys::mapping << YAML::Comment("profile model starts here");
            out << YAML::BeginMap;

            if (util::profile_info<T>::type == util::ProfileType::Control) {
                // TODO: implement this
                //ControlConfigWriteVisitor visitor(out);
                //util::visit<T>(visitor);
            } else {
                MeasurementConfigWriteVisitor visitor(out);
                util::visit<T>(visitor);
            }

            out << YAML::EndMap;
        }
    };

    void PluginFactory::write_default_config(YAML::Emitter& out) const
    {
        out << YAML::Key << keys::thread_pool_size << YAML::Value << 1;
        out << YAML::Comment("defaults to std::thread::hardware_concurrency() if <= 0");

        out << YAML::Key << keys::sessions << YAML::Comment("list of session configuration files");
        util::yaml::write_default_template_config(out, "modbus-outstation-config.yaml");
    }

    void PluginFactory::write_session_config(YAML::Emitter& out, const api::profile_vec_t& profiles) const
    {
        if (profiles.empty()) {
            throw api::Exception(
                "You must specify at least one profile when generating Modbus outstation session configuration");
        }

        out << YAML::BeginMap;

        out << YAML::Key << util::keys::name << YAML::Value << "device1" << YAML::Comment("This name is pre-pended to each log message");
        out << YAML::Key << keys::log_level << YAML::Value << LogLevel::Info << YAML::Comment(util::enumeration::get_value_set<LogLevel>());
        
        out << YAML::Key << keys::adapter << YAML::Value << "0.0.0.0";
        out << YAML::Key << keys::port << YAML::Value << 502;
        out << YAML::Key << keys::unit_identifier << YAML::Value << 1 << YAML::Comment("aka 'slave address'");
        
        out << YAML::Key << keys::max_num_connections << YAML::Value << 10 << YAML::Comment("Maximum number of concurrent TCP connections to the server");

        out << YAML::Key << util::keys::profiles;
        out << YAML::BeginSeq;
        for (const auto& profile : profiles) {
            out << YAML::BeginMap;
            out << YAML::Key << util::keys::name << YAML::Value << profile;
            api::ProfileRegistry::handle_by_name<ProfileWriter>(profile, out);
            out << YAML::EndMap;
        }
        out << YAML::EndSeq;

        out << YAML::EndMap;
    }

    std::unique_ptr<api::IPlugin> PluginFactory::create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
    {
        return std::make_unique<Plugin>(node, logger, bus);;
    }

}
}
}
