
#include "modbus/PluginFactory.h"

#include <adapter-api/Exception.h>

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/ProfileInfo.h>
#include <adapter-util/config/CommandPriorityMap.h>
#include <adapter-util/config/generated/ModelVisitors.h>
#include <adapter-util/util/EnumUtil.h>
#include <adapter-util/util/YAMLTemplate.h>

#include "ControlConfigWriteVisitor.h"
#include "MeasurementConfigWriteVisitor.h"

#include "ConfigStrings.h"
#include "Plugin.h"

#include <iostream>

namespace adapter {
namespace modbus {

    template <class T>
    struct ProfileWriter {
        static void handle(YAML::Emitter& out)
        {
            std::cout << "Generating: " << T::descriptor()->name() << std::endl;

            if (util::profile_info<T>::type == util::ProfileType::Control) {
                util::CommandPriorityMap::write_default_list(out);
                out << YAML::Key << util::keys::tolerance << YAML::Value << 5000;
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

    void PluginFactory::write_default_config(YAML::Emitter& out) const
    {
        out << YAML::Key << keys::thread_pool_size << YAML::Value << 1;
        out << YAML::Comment("defaults to std::thread::hardware_concurrency() if <= 0");

        out << YAML::Key << keys::sessions << YAML::Comment("list of session configuration files");
        util::yaml::write_default_template_config(out, "modbus-master-config.yaml");
    }

    std::unique_ptr<api::IPlugin> PluginFactory::create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
    {
        return std::make_unique<Plugin>(node, logger, std::move(bus));
    }

    void PluginFactory::write_session_config(YAML::Emitter& out, const api::profile_vec_t& profiles) const
    {
        out << YAML::BeginMap;

        out << YAML::Key << util::keys::name << YAML::Value << "session1";
        out << YAML::Comment("name for logging purposes");
        out << YAML::Key << keys::log_level << YAML::Value << "Info" << YAML::Comment(util::enumeration::get_value_set<LogLevel>());
        out << YAML::Key << keys::remote_ip << YAML::Value << "127.0.0.1";
        out << YAML::Key << keys::port << YAML::Value << 502;
        out << YAML::Key << keys::adapter << YAML::Value << "0.0.0.0";
        out << YAML::Key << keys::unit_identifier << YAML::Value << 1 << YAML::Comment("aka 'slave address'");

        out << YAML::Key << keys::response_timeout_ms << YAML::Value << 1000 << YAML::Comment("response timeout");
        out << YAML::Key << keys::always_write_multiple_registers << YAML::Value << false << YAML::Comment("if true, translate single register writes to multiple register write w/ single value ");

        out << YAML::Key << keys::auto_polling << YAML::Comment("configuration parameters for auto-polling");
        out << YAML::BeginMap;
        out << YAML::Key << keys::max_register_gaps << YAML::Value << 0 << YAML::Comment("0 == no gaps allowed when polling for registers");
        out << YAML::EndMap;

        out << YAML::Key << keys::heartbeats;
        out << YAML::BeginSeq;
        out << YAML::BeginMap;
        out << YAML::Key << util::keys::index << YAML::Value << 7 << YAML::Comment("Read the specified register, invert the masked bits, and write it back");
        out << YAML::Key << keys::period_ms << YAML::Value << 1000 << YAML::Comment("Heartbeat period in milliseconds");
        out << YAML::Key << keys::mask << YAML::Value << YAML::Hex << 0x01 << YAML::Comment("Mask specifying the bits to invert");
        out << YAML::EndMap;
        out << YAML::EndSeq;

        out << YAML::Key << util::keys::profiles;
        out << YAML::BeginSeq;
        for (const auto& profile : profiles) {
            out << YAML::BeginMap;
            out << YAML::Key << util::keys::name << YAML::Value << profile;
            out << YAML::Key << keys::poll_period_ms << YAML::Value << 1000 << YAML::Comment("perform polls once per second");
            api::ProfileRegistry::handle_by_name<ProfileWriter>(profile, out);
            out << YAML::EndMap;
        }
        out << YAML::EndSeq;

        out << YAML::EndMap;
    }
}
}
