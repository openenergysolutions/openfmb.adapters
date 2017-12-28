
#include "DNP3MasterAdapter.h"

#include <asiodnp3/PrintingSOEHandler.h>
#include <asiodnp3/DefaultMasterApplication.h>
#include <opendnp3/LogLevels.h>
#include <adapter-api/util/YAMLUtil.h>

#include "LogAdapter.h"

using namespace openpal;
using namespace opendnp3;
using namespace asiodnp3;

namespace openfmb
{

    DNP3MasterAdapter::DNP3MasterAdapter(
        const Logger& logger,
        const YAML::Node& node,
        IProtoSubscribers& subscribers
    ) :
        manager(
            yaml::with_default(node["thread-pool-size"], std::thread::hardware_concurrency()),
            std::make_shared<LogAdapter>(logger)
        )
    {
        yaml::foreach(node["masters"], [this](const YAML::Node& n)
    {
        this->add_master(n);
        });
    }

    void DNP3MasterAdapter::add_master(const YAML::Node& node)
    {
        const auto channel = this->create_channel(node);

        MasterStackConfig config;

        {
            const auto link = yaml::require(node, "link-layer");
            config.link.LocalAddr = yaml::require(link, "master-address").as<std::uint16_t>();
            config.link.RemoteAddr = yaml::require(link, "outstation-address").as<std::uint16_t>();
        }

        // actively disable unsolicited mode, and don't re-enable it after integrity scan
        config.master.disableUnsolOnStartup = true;
        config.master.unsolClassMask = ClassField::None();

        const auto data_handler = std::make_shared<SOEHandler>(yaml::require(node, ResourceReadingProfile::descriptor()->name()));

        auto master = channel->AddMaster(
                          yaml::require(node, "logger").as<std::string>(),
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

        this->masters.push_back(MasterRecord { data_handler : data_handler, master : master });
    }

    void DNP3MasterAdapter::start(const std::shared_ptr<IProtoPublishers>& publisher)
    {
        for(auto& record : this->masters)
        {
            record.data_handler->set_publisher(publisher);
            record.master->Enable();
        }
    }

    DNP3MasterAdapter::channel_t DNP3MasterAdapter::create_channel(const YAML::Node& node)
    {
        const auto channel = yaml::require(node, "channel");

        return this->manager.AddTCPClient(
                   yaml::require(node, "logger").as<std::string>(),
                   opendnp3::levels::NORMAL,
                   asiopal::ChannelRetry::Default(),
                   yaml::require(channel, "remote-ip").as<std::string>(),
                   yaml::require(channel, "adapter").as<std::string>(),
                   yaml::require(channel, "port").as<std::uint16_t>(),
                   nullptr // no channel listener
               );
    }



}

