
#include "modbus/PluginFactory.h"

#include <adapter-api/util/Exception.h>
#include <adapter-api/util/YAMLTemplate.h>

#include <adapter-api/ConfigStrings.h>
#include <adapter-api/ProfileInfo.h>
#include <adapter-api/config/generated/ModelVisitors.h>

#include "ControlConfigWriteVisitor.h"
#include "MeasurementConfigWriteVisitor.h"

#include "CommandOrdering.h"
#include "ConfigStrings.h"
#include "Plugin.h"

namespace adapter {
namespace modbus {

    template <class T>
    struct ProfileWriter {
        static void handle(YAML::Emitter& out)
        {
            std::cout << "Generating: " << T::descriptor()->name() << std::endl;

            if (profile_info<T>::is_control) {
                out << YAML::Key << "command-order" << YAML::Comment("order of commands - first == highest priority, last == lowest priority");

                // provide an example of the two types
                command_ordering_t::write_sequence(
                    {
                        { 0, CommandType::Value::write_single_register },
                        { 1, CommandType::Value::write_multiple_register },
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

    void PluginFactory::write_default_config(YAML::Emitter& out) const
    {
        out << YAML::Key << keys::thread_pool_size << YAML::Value << 1;
        out << YAML::Comment("defaults to std::thread::hardware_concurrency() if <= 0");

        out << YAML::Key << keys::sessions << YAML::Comment("list of session configuration files");
        yaml::write_default_template_config(out, "modbus-master-config.yaml");
    }

    std::unique_ptr<IPlugin> PluginFactory::create(const YAML::Node& node, const Logger& logger, message_bus_t bus)
    {
        return std::make_unique<Plugin>(node, logger, std::move(bus));
    }

    void PluginFactory::write_session_config(YAML::Emitter& out, const profile_vec_t& profiles) const
    {
        out << YAML::BeginMap;

        out << YAML::Key << ::adapter::keys::name << YAML::Value << "session1";
        out << YAML::Comment("name for logging purposes");
        out << YAML::Key << keys::remote_ip << YAML::Value << "127.0.0.1";
        out << YAML::Key << keys::port << YAML::Value << 502;
        out << YAML::Key << keys::unit_identifier << YAML::Value << 1 << YAML::Comment("aka 'slave address'");

        out << YAML::Key << keys::poll_period_ms << YAML::Value << 1000 << YAML::Comment("perform polls once per second");
        out << YAML::Key << keys::response_timeout_ms << YAML::Value << 1000 << YAML::Comment("response timeout");
        out << YAML::Key << keys::always_write_multiple_registers << YAML::Value << false << YAML::Comment("if true, translate single register writes to multiple register write w/ single value ");

        out << YAML::Key << keys::auto_polling << YAML::Comment("configuration parameters for auto-polling");
        out << YAML::BeginMap;
        out << YAML::Key << keys::max_register_gaps << YAML::Value << 0 << YAML::Comment("0 == no gaps allowed when polling for registers");
        out << YAML::EndMap;

        out << YAML::Key << keys::heartbeats;
        out << YAML::BeginSeq;
        out << YAML::BeginMap;
        out << YAML::Key << ::adapter::keys::index << YAML::Value << 7 << YAML::Comment("Read the specified register, invert the masked bits, and write it back");
        out << YAML::Key << keys::period_ms << YAML::Value << 1000 << YAML::Comment("Heartbeat period in milliseconds");
        out << YAML::Key << keys::mask << YAML::Value << YAML::Hex << 0x01 << YAML::Comment("Mask specifying the bits to invert");
        out << YAML::EndMap;
        out << YAML::EndSeq;

        out << YAML::Key << ::adapter::keys::profiles;
        out << YAML::BeginSeq;
        for (const auto& profile : profiles) {
            out << YAML::BeginMap;
            out << YAML::Key << ::adapter::keys::name << YAML::Value << profile;
            ProfileRegistry::handle_by_name<ProfileWriter>(profile, out);
            out << YAML::EndMap;
        }
        out << YAML::EndSeq;

        out << YAML::EndMap;
    }
}
}
