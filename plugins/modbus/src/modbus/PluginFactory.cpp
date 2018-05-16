
#include "modbus/PluginFactory.h"

#include <adapter-api/util/Exception.h>
#include <adapter-api/IProfileWriter.h>
#include <adapter-api/config/generated/MessageVisitors.h>
#include <adapter-api/util/YAMLTemplate.h>

#include "Plugin.h"
#include "ConfigWriteVisitor.h"



namespace adapter
{
    namespace modbus
    {
        class ProfileWriter final : public IProfileWriter
        {
        protected:
            void write_resource_reading(YAML::Emitter& out) override
            {
                ConfigWriteVisitor<resourcemodule::ResourceReadingProfile> visitor(out);
                visit(visitor);
            }

            void write_switch_reading(YAML::Emitter& out) override
            {
                ConfigWriteVisitor<switchmodule::SwitchReadingProfile> visitor(out);
                visit(visitor);
            }

            void write_switch_status(YAML::Emitter& out) override
            {
                ConfigWriteVisitor<switchmodule::SwitchStatusProfile> visitor(out);
                visit(visitor);
            }
        };

        void write_default_session(const std::string& name, YAML::Emitter& out, Profile profile)
        {
            out << YAML::BeginMap;

            out << YAML::Key << keys::name << YAML::Value << name;
            out << YAML::Comment("name for logging purposes");
            out << YAML::Key << keys::remote_ip << YAML::Value << "127.0.0.1";
            out << YAML::Key << keys::port << YAML::Value << 502;
            out << YAML::Key << keys::unit_identifier << YAML::Value << 1 << YAML::Comment("aka 'slave address'");

            out << YAML::Key << keys::poll_period_ms << YAML::Value << 1000 << YAML::Comment("perform polls once per second");
            out << YAML::Key << keys::response_timeout_ms << YAML::Value << 1000 << YAML::Comment("response timeout");
            out << YAML::Key << keys::allowed_byte_discontinuities << YAML::Value << 0 << YAML::Comment("polls for registers will be made without discontinuity");
            out << YAML::Key << keys::allowed_bit_discontinuities << YAML::Value << 16 << YAML::Comment("polls for coils will be made with discontinuities up to 16 bits");

            out << YAML::Key << keys::profile;
            out << YAML::BeginMap;
            out << YAML::Key << keys::name << YAML::Value << ProfileMeta::to_string(profile);
            ProfileWriter writer;
            writer.write_one_profile(profile, out);
            out << YAML::EndMap;

            out << YAML::EndMap;
        }

        void PluginFactory::write_default_config(YAML::Emitter& out) const
        {
            out << YAML::Key << keys::thread_pool_size << YAML::Value << 1;
            out << YAML::Comment("defaults to std::thread::hardware_concurrency() if <= 0");

            out << YAML::Key << keys::sessions << YAML::Comment("list of session configuration files");
            yaml::write_default_template_config(out, "modbus-master-config.yaml");
        }

        std::unique_ptr<IPlugin> PluginFactory::create(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            return std::make_unique<Plugin>(node, logger, bus);
        }

        void PluginFactory::write_session_config(YAML::Emitter& out, const profile_vec_t& profiles) const
        {
            if(profiles.size() != 1)
            {
                throw Exception("Modbus session generation requires exactly 1 profile argument");
            }

            write_default_session("session1", out, profiles[0]);
        }
    }
}
