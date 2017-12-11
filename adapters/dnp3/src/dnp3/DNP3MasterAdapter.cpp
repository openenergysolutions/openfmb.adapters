
#include "DNP3MasterAdapter.h"

#include <asiodnp3/PrintingSOEHandler.h>
#include <asiodnp3/DefaultMasterApplication.h>
#include <opendnp3/LogLevels.h>
#include <adapter-api/util/YAMLUtil.h>

#include "adapter-api/ProfileNames.h"

using namespace openpal;
using namespace opendnp3;
using namespace asiodnp3;

namespace openfmb
{

    DNP3MasterAdapter::DNP3MasterAdapter(
        const manager_t& manager,
        const YAML::Node& node,
        IProtoSubscribers& subscribers
    ) :
        data_handler(
            std::make_shared<SOEHandler>(
                yaml::require(node, profiles::resource_reading)
            )
        ),
        channel(create_channel(manager, node)),
        master(create_master(channel, data_handler, node))
    {

    }

    void DNP3MasterAdapter::start(const std::shared_ptr<IProtoPublishers>& publisher)
    {
        this->data_handler->set_publisher(publisher);
        this->master->Enable();
    }

    DNP3MasterAdapter::channel_t DNP3MasterAdapter::create_channel(const manager_t& manager, const YAML::Node& node)
    {
        const auto config = yaml::require(node, "channel");

        return manager->AddTCPClient(
                   yaml::require(node, "dnp3-log-id").as<std::string>(),
                   opendnp3::levels::NORMAL,
                   asiopal::ChannelRetry::Default(),
                   yaml::require(config, "remote-ip").as<std::string>(),
                   yaml::require(config, "adapter").as<std::string>(),
                   yaml::require(config, "port").as<std::uint16_t>(),
                   nullptr                                  // no channel listener
               );
    }

    DNP3MasterAdapter::master_t DNP3MasterAdapter::create_master(const channel_t& channel, const data_handler_t& data_handler, const YAML::Node& node)
    {
        MasterStackConfig config;

        {
            const auto link = yaml::require(node, "link-layer");
            config.link.LocalAddr = yaml::require(link, "master-address").as<std::uint16_t>();
            config.link.RemoteAddr = yaml::require(link, "outstation-address").as<std::uint16_t>();
        }

        // actively disable unsolicited mode, and don't re-enable it after integrity scan
        config.master.disableUnsolOnStartup = true;
        config.master.unsolClassMask = ClassField::None();

        auto master = channel->AddMaster(
                          yaml::require(node, "dnp3-log-id").as<std::string>(),
                          data_handler,
                          DefaultMasterApplication::Create(),
                          config
                      );

        const auto app = yaml::require(node, "app-layer");

        // configure the integrity scan
        master->AddClassScan(
            ClassField::AllClasses(),
            TimeDuration::Milliseconds(yaml::require(app, "integrity-poll-ms").as<uint32_t>())
        );

        return master;
    }

}


