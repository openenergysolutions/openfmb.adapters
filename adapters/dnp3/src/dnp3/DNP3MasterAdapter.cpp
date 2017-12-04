
#include "DNP3MasterAdapter.h"

#include <asiodnp3/PrintingSOEHandler.h>
#include <asiodnp3/DefaultMasterApplication.h>

using namespace openpal;
using namespace opendnp3;
using namespace asiodnp3;

namespace openfmb {

    DNP3MasterAdapter::DNP3MasterAdapter(
            const manager_t& manager,
            const YAML::Node& node,
            IProtoSubscribers& subscribers
    ) :
        point_map(create_point_map(node)),
        channel(create_channel(manager, node["channel"])),
        master(create_master(channel, node))
    {

    }

    void DNP3MasterAdapter::start(IProtoPublishers& publishers)
    {
        // TODO
    }

    DNP3MasterAdapter::point_map_t DNP3MasterAdapter::create_point_map(const YAML::Node& node)
    {
        return std::make_shared<PointMap>(node["breaker-reading-profile"]);
    }

    DNP3MasterAdapter::channel_t DNP3MasterAdapter::create_channel(const manager_t& manager, const YAML::Node& node)
    {
        const auto& config = node["channel"];

        return manager->AddTCPClient(
                node["dnp3-log-id"].as<std::string>(),
                ~0,                                      // TODO - configure levels
                asiopal::ChannelRetry::Default(),
                config["remote-ip"].as<std::string>(),
                config["adapter"].as<std::string>(),
                config["port"].as<std::uint16_t>(),
                nullptr                                  // no channel listener
        );
    }

    DNP3MasterAdapter::master_t DNP3MasterAdapter::create_master(const channel_t& channel, const YAML::Node& node)
    {
        MasterStackConfig config;

        {
            const auto& link = node["link-layer"];
            config.link.LocalAddr = link["master-address"].as<std::uint16_t>();
            config.link.RemoteAddr = link["outstation-address"].as<std::uint16_t>();
        }

        // actively disable unsolicited mode, and don't re-enable it after integrity scan
        config.master.disableUnsolOnStartup = true;
        config.master.unsolClassMask = ClassField::None();

        auto master = channel->AddMaster(
                node["dnp3-log-id"].as<std::string>(),
                PrintingSOEHandler::Create(),               // TODO - use PublishingSOEHandler
                DefaultMasterApplication::Create(),
                config
        );

        // configure the integrity scan
        master->AddClassScan(
                ClassField::AllClasses(),
                TimeDuration::Milliseconds(node["app-layer"]["integrity-poll-ms"].as<uint32_t>())
        );

        return master;
    }

}


