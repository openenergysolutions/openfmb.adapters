
#include "Plugin.h"

#include <asiodnp3/PrintingSOEHandler.h>
#include <asiodnp3/DefaultMasterApplication.h>
#include <asiodnp3/ConsoleLogger.h>
#include <opendnp3/LogLevels.h>
#include <adapter-api/util/YAMLUtil.h>
#include <adapter-api/helpers/generated/MessageVisitors.h>

#include "LogAdapter.h"
#include "ConfigKeys.h"
#include "ProfileMappingReader.h"

using namespace openpal;
using namespace opendnp3;
using namespace asiodnp3;

namespace adapter
{
    namespace dnp3
    {

        Plugin::Plugin(
            const Logger& logger,
            const YAML::Node& node,
            IMessageBus& bus
        ) :
            logger(logger),
            manager(
                yaml::with_default(node[keys::thread_pool_size], std::thread::hardware_concurrency()),
                ConsoleLogger::Create()
                //std::make_shared<LogPlugin>(logger)
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

            auto mapping = read_mapping<resourcemodule::ResourceReadingProfile>(profile_node, visit);

            if (mapping->is_empty())
            {
                throw Exception("DNP3 adapter has no point mappings");
            }

            logger.info("{} point(s) are mapped to {}", mapping->get_num_mappings(),
                        resourcemodule::ResourceReadingProfile::descriptor()->name());

            auto master = channel->AddMaster(
                              yaml::require(node, keys::name).as<std::string>(),
                              std::make_shared<SOEHandler<resourcemodule::ResourceReadingProfile>>(
                                  std::move(mapping),
                                  bus.get_publisher<resourcemodule::ResourceReadingProfile>()
                              ),
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
                       yaml::require(node, keys::name).as<std::string>(),
                       opendnp3::levels::NORMAL,
                       asiopal::ChannelRetry::Default(),
                       yaml::require(channel, keys::outstation_ip).as<std::string>(),
                       yaml::require(channel, keys::adapter).as<std::string>(),
                       yaml::require(channel, keys::port).as<std::uint16_t>(),
                       nullptr // no channel listener
                   );
        }


    }
}

