
#include <adapter-api/IProfileWriter.h>
#include "dnp3/PluginFactory.h"

#include "adapter-api/helpers/generated/MessageVisitors.h"

#include "ConfigWriteVisitor.h"
#include "Plugin.h"


namespace adapter
{
    namespace dnp3
    {
        struct ProfileWriter : public IProfileWriter
        {
        protected:
            void write_resource_reading(const std::string& name, YAML::Emitter& out) override
            {
                this->write_any<resourcemodule::ResourceReadingProfile>(out);
            }

            void write_switch_reading(const std::string& name, YAML::Emitter& out) override
            {
                this->write_any<switchmodule::SwitchReadingProfile>(out);
            }

            void write_switch_status(const std::string& name, YAML::Emitter& out) override
            {
                this->write_any<switchmodule::SwitchStatusProfile>(out);
            }

        private:

            template <class T>
            void write_any(YAML::Emitter& out)
            {
                ConfigWriteVisitor<T> visitor(out);
                visit(visitor);
            }
        };

        void PluginFactory::write_default_config(YAML::Emitter& out, const profile_vec_t& profiles) const
        {
            if(profiles.empty())
            {
                throw Exception("DNP3 plugin generation requires at least one profile argument");
            }

            out << YAML::Key << keys::thread_pool_size << YAML::Value << 1;
            out << YAML::Comment("defaults to std::thread::hardware_concurrency() if <= 0");
            out << YAML::Key << keys::masters;
            out << YAML::BeginSeq;

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

            ProfileWriter writer;

            for(auto profile : profiles)
            {
                out << YAML::BeginMap;
                out << YAML::Key << "name" << YAML::Value << ProfileMeta::to_string(profile);
                writer.write_one_profile(profile, out);
                out << YAML::EndMap;
            }

            out << YAML::EndSeq;
            out << YAML::EndMap;

            out << YAML::EndSeq;
        }

        std::unique_ptr<IPlugin> PluginFactory::create(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            return std::make_unique<Plugin>(
                       logger,
                       node,
                       bus
                   );
        }
    }
}
