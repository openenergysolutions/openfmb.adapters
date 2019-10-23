
#include "dnp3/master/PluginFactory.h"

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/ProfileInfo.h>

#include <adapter-util/config/CommandPriorityMap.h>
#include <adapter-util/config/generated/ModelVisitors.h>
#include <adapter-util/util/YAMLTemplate.h>

#include "ControlConfigWriteVisitor.h"
#include "MeasurementConfigWriteVisitor.h"

#include "../ConfigStrings.h"
#include "Plugin.h"

#include <iostream>

namespace adapter {
namespace dnp3 {
    namespace master {

        template <class T>
        struct WriterHandler {
            static void handle(YAML::Emitter& out)
            {
                std::cout << "Generating: " << T::descriptor()->name() << std::endl;

                if (util::profile_info<T>::type == util::ProfileType::Control) {
                    util::CommandPriorityMap::write_default_list(out);
                    out << YAML::Key << util::keys::tolerance << YAML::Value << 5000;
                }
                else {
                    out << YAML::Key << keys::poll_name << YAML::Value << "integrity_poll";
                }

                out << YAML::Key << util::keys::mapping << YAML::Comment("profile model starts here");
                out << YAML::BeginMap;

                if (util::profile_info<T>::type == util::ProfileType::Control) {
                    ControlConfigWriteVisitor visitor(out);
                    util::visit<T>(visitor);

                } else {
                    MeasurementConfigWriteVisitor visitor(out);
                    util::visit<T>(visitor);
                }

                out << YAML::EndMap;
            }
        };

        void write_profile_configs(YAML::Emitter& out, const api::profile_vec_t& profiles)
        {
            for (const auto& profile : profiles) {

                out << YAML::BeginMap;
                out << YAML::Key << util::keys::name << YAML::Value << profile;

                api::ProfileRegistry::handle_by_name<WriterHandler>(profile, out);
                out << YAML::EndMap;
            }
        }

        void PluginFactory::write_default_config(YAML::Emitter& out) const
        {
            out << YAML::Key << keys::thread_pool_size << YAML::Value << 1;
            out << YAML::Comment("defaults to std::thread::hardware_concurrency() if <= 0");
            out << YAML::Key << keys::masters;
            util::yaml::write_default_template_config(out, "dnp3-master-template.yaml");
        }

        std::unique_ptr<api::IPlugin>
        PluginFactory::create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
        {
            return std::make_unique<Plugin>(
                logger,
                node,
                std::move(bus));
        }

        void PluginFactory::write_session_config(YAML::Emitter& out, const api::profile_vec_t& profiles) const
        {
            if (profiles.empty()) {
                throw api::Exception(
                    "You must specify at least one profile when generating DNP3 master session configuration");
            }

            out << YAML::BeginMap;
            out << YAML::Key << util::keys::name << YAML::Value << "device1";
            out << YAML::Comment("This name is pre-pended to each log message");

            out << YAML::Key << keys::channel;
            out << YAML::BeginMap;
            out << YAML::Key << keys::adapter << YAML::Value << "0.0.0.0" << YAML::Comment("Override to use a specific adapter");
            out << YAML::Key << keys::outstation_ip << YAML::Value << "127.0.0.1";
            out << YAML::Key << keys::port << YAML::Value << 20000;
            out << YAML::EndMap;

            out << YAML::Key << keys::protocol;
            out << YAML::BeginMap;
            out << YAML::Key << keys::master_address << YAML::Value << 1;
            out << YAML::Key << keys::outstation_address << YAML::Value << 10;
            out << YAML::Key << keys::unsolicited_class_1 << YAML::Value << false;
            out << YAML::Key << keys::unsolicited_class_2 << YAML::Value << false;
            out << YAML::Key << keys::unsolicited_class_3 << YAML::Value << false;
            out << YAML::EndMap;

            out << YAML::Key << keys::polls;
            out << YAML::BeginSeq;
            out << YAML::BeginMap;
            out << YAML::Key << util::keys::name << YAML::Value << "integrity_poll";
            out << YAML::Key << keys::poll_type << YAML::Value << keys::poll_type_integrity;
            out << YAML::Key << keys::poll_interval << YAML::Value << "5000";
            out << YAML::EndMap;
            out << YAML::BeginMap;
            out << YAML::Key << util::keys::name << YAML::Value << "event_poll";
            out << YAML::Key << keys::poll_type << YAML::Value << keys::poll_type_event;
            out << YAML::Key << keys::poll_interval << YAML::Value << "2000";
            out << YAML::Key << keys::poll_class1 << YAML::Value << true;
            out << YAML::Key << keys::poll_class2 << YAML::Value << true;
            out << YAML::Key << keys::poll_class3 << YAML::Value << true;
            out << YAML::EndMap;
            out << YAML::EndSeq;

            out << YAML::Key << util::keys::profiles;
            out << YAML::BeginSeq;
            write_profile_configs(out, profiles);
            out << YAML::EndSeq;

            out << YAML::EndMap;
        }
    }
}
}