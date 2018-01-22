
#include "DNP3Adapter.h"

#include <asiodnp3/PrintingSOEHandler.h>
#include <asiodnp3/DefaultMasterApplication.h>
#include <opendnp3/LogLevels.h>
#include <adapter-api/util/YAMLUtil.h>

#include "LogAdapter.h"

using namespace openpal;
using namespace opendnp3;
using namespace asiodnp3;

#include "ConfigKeys.h"

namespace adapter
{

    DNP3Adapter::DNP3Adapter(
        const Logger& logger,
        const YAML::Node& node,
        IMessageBus& bus
    ) :
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

    void DNP3Adapter::add_master(const YAML::Node& node, IMessageBus& bus)
    {
        const auto channel = this->create_channel(node);

        MasterStackConfig config;


        const auto protocol = yaml::require(node, keys::protocol);

        config.link.LocalAddr = yaml::require(protocol, keys::master_address).as<std::uint16_t>();
        config.link.RemoteAddr = yaml::require(protocol, keys::outstation_address).as<std::uint16_t>();


        // actively disable unsolicited mode, and don't re-enable it after integrity scan
        config.master.disableUnsolOnStartup = true;
        config.master.unsolClassMask = ClassField::None();

        const auto data_handler = std::make_shared<SOEHandler>(
                                      yaml::require(node, resourcemodule::ResourceReadingProfile::descriptor()->name()),
                                      bus.get_resource_reading_publisher()
                                  );

        auto master = channel->AddMaster(
                          yaml::require(node, keys::name).as<std::string>(),
                          data_handler,
                          DefaultMasterApplication::Create(),
                          config
                      );

        // configure the integrity scan
        master->AddClassScan(
            ClassField::AllClasses(),
            TimeDuration::Milliseconds(yaml::require(protocol, keys::integrity_poll_ms).as<uint32_t>())
        );

        this->masters.push_back(MasterRecord { data_handler : data_handler, master : master });
    }

    void DNP3Adapter::start()
    {
        for(auto& record : this->masters)
        {
            record.master->Enable();
        }
    }

    DNP3Adapter::channel_t DNP3Adapter::create_channel(const YAML::Node& node)
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

