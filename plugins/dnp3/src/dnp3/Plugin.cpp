
#include "Plugin.h"

#include <asiodnp3/PrintingSOEHandler.h>
#include <asiodnp3/DefaultMasterApplication.h>
#include <opendnp3/LogLevels.h>

#include <adapter-api/util/YAMLUtil.h>
#include <adapter-api/helpers/generated/MessageVisitors.h>
#include <adapter-api/ConfigStrings.h>

#include "ConfigStrings.h"
#include "ConfigReadVisitor.h"
#include "LogAdapter.h"

using namespace openpal;
using namespace opendnp3;
using namespace asiodnp3;

namespace adapter
{
    namespace dnp3
    {
        template <class T>
        using visit_fun_t = void (*)(IProtoVisitor<T>&);

        template <class T>
        void load_mapping(const YAML::Node& node, IMessageBus& bus, const std::shared_ptr<IConfigurationBuilder>& builder)
        {
            const auto profile = std::make_shared<T>();

            // clear the profile before processing measurements
            builder->add_start_action([profile]()
            {
                profile->Clear();
            });

            ConfigReadVisitor<T> reader(node, profile, builder);
            visit(reader);

            // publish the profile when the response completes
            builder->add_end_action([profile, publisher = bus.get_publisher<T>()]()
            {
                publisher->publish(*profile);
            });
        }

        Plugin::Plugin(
            const Logger& logger,
            const YAML::Node& node,
            IMessageBus& bus
        ) :
            logger(logger),
            manager(
                yaml::with_default(node[keys::thread_pool_size], std::thread::hardware_concurrency()),
                std::make_shared<LogAdapter>(logger)
            )
        {
            yaml::foreach(node[keys::masters], [&](const YAML::Node& n)
        {
            this->add_master(n, bus);
            });
        }

        void Plugin::add_master(const YAML::Node& node, IMessageBus& bus)
        {
            const auto channel = this->create_channel(node);

            MasterStackConfig config;


            const auto protocol = yaml::require(node, keys::protocol);

            config.link.LocalAddr = yaml::require(protocol, keys::master_address).as<std::uint16_t>();
            config.link.RemoteAddr = yaml::require(protocol, keys::outstation_address).as<std::uint16_t>();


            // actively disable unsolicited mode, and don't re-enable it after integrity scan
            config.master.disableUnsolOnStartup = true;
            config.master.unsolClassMask = ClassField::None();

            const auto profile_node = yaml::require(node, keys::profile);

            const auto handler = std::make_shared<SOEHandler>();

            // TODO - load a sequence of these
            load_mapping<resourcemodule::ResourceReadingProfile>(profile_node, bus, handler);

            auto master = channel->AddMaster(
                              yaml::require(node, ::adapter::keys::name).as<std::string>(),
                              handler,
                              DefaultMasterApplication::Create(),
                              config
                          );

            // configure the integrity scan
            master->AddClassScan(
                ClassField::AllClasses(),
                TimeDuration::Milliseconds(yaml::require(protocol, keys::integrity_poll_ms).as<uint32_t>())
            );

            this->masters.push_back(master);
        }

        void Plugin::start()
        {
            for (auto& master : this->masters)
            {
                master->Enable();
            }
        }

        Plugin::channel_t Plugin::create_channel(const YAML::Node& node)
        {
            const auto channel = yaml::require(node, keys::channel);

            return this->manager.AddTCPClient(
                       yaml::require_string(node, ::adapter::keys::name),
                       opendnp3::levels::NORMAL,
                       asiopal::ChannelRetry::Default(),
                       yaml::require_string(channel, keys::outstation_ip),
                       yaml::require_string(channel, keys::adapter),
                       yaml::require(channel, keys::port).as<std::uint16_t>(),
                       nullptr // no channel listener
                   );
        }


    }
}

