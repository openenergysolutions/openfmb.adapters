
#include "Plugin.h"

#include <asiodnp3/PrintingSOEHandler.h>
#include <asiodnp3/DefaultMasterApplication.h>
#include <opendnp3/LogLevels.h>

#include <adapter-api/util/YAMLUtil.h>
#include <adapter-api/util/YAMLTemplate.h>
#include <adapter-api/config/generated/ModelVisitors.h>
#include <adapter-api/ConfigStrings.h>
#include <adapter-api/ProfileHelpers.h>
#include <adapter-api/config/ProfileType.h>

#include "ConfigStrings.h"
#include "PublishingConfigReadVisitor.h"
#include "SubscribingConfigReadVisitor.h"
#include "LogAdapter.h"
#include "CommandSequenceExecutor.h"

#include <stdexcept>

using namespace openpal;
using namespace opendnp3;
using namespace asiodnp3;

namespace adapter
{
    namespace dnp3
    {
        template <class T>
        using visit_fun_t = void (*)(IModelVisitor<T>&);

        template <class T>
        class ProfileLoader
        {

        public:

            static void handle(const YAML::Node& node, const Logger& logger, message_bus_t bus, std::shared_ptr<IPublishConfigBuilder> builder, std::shared_ptr<ICommandSequenceExecutor> executor)
            {
                if(::adapter::get_profile_type<T>() == ProfileType::control)
                {
                    handle_subscribe(node, logger, std::move(bus), std::move(executor));
                }
                else
                {
                    handle_publish(node, std::move(bus), std::move(builder));
                }
            }

        private:

            static void handle_publish(const YAML::Node& node, publisher_t publisher, std::shared_ptr<IPublishConfigBuilder> builder)
            {
                PublishingConfigReadVisitor<T> visitor(node, publisher, builder);
                visit(visitor);
            }

            static void handle_subscribe(const YAML::Node& node, const Logger& logger, message_bus_t bus, std::shared_ptr<ICommandSequenceExecutor> executor)
            {
                SubscribingConfigReadVisitor<T> visitor(node);
                visit(visitor);
                visitor.subscribe(logger, std::move(bus), std::move(executor));
            }
        };


        Plugin::Plugin(
            const Logger& logger,
            const YAML::Node& node,
            message_bus_t bus
        ) :
            logger(logger),
            manager(
                yaml::optionally(node[keys::thread_pool_size], std::thread::hardware_concurrency()),
                std::make_shared<LogAdapter>(logger)
            )
        {
            yaml::load_template_configs(
                yaml::require(node, keys::masters),
                this->logger,
                [&](const YAML::Node & config)
            {
                this->add_master(config, bus);
            }
            );
        }

        void Plugin::add_master(const YAML::Node& node, message_bus_t bus)
        {
            const auto channel = this->create_channel(node);

            MasterStackConfig config;

            const auto protocol = yaml::require(node, keys::protocol);

            config.link.LocalAddr = yaml::require_integer<uint16_t>(protocol, keys::master_address);
            config.link.RemoteAddr = yaml::require_integer<uint16_t>(protocol, keys::outstation_address);

            // actively disable unsolicited mode, and don't re-enable it after integrity scan
            config.master.disableUnsolOnStartup = true;
            config.master.unsolClassMask = ClassField::None();

            const auto handler = std::make_shared<SOEHandler>();
            const auto executor = std::make_shared<CommandSequenceExecutor>(this->logger);

            const auto profiles = yaml::require(node, ::adapter::keys::profiles);

            yaml::foreach(
                profiles,
                [&](const YAML::Node& node)
        {
            profiles::handle_one<ProfileLoader>(
                yaml::require_string(node, ::adapter::keys::name),
                node,
                logger,
                bus,
                handler,
                executor
            );
            }
            );

            this->logger.info(
                "num binary: {} num analog: {} num counter: {}",
                handler->num_binary(),
                handler->num_analog(),
                handler->num_counter()
            );

            auto master = channel->AddMaster(
                              yaml::require(node, ::adapter::keys::name).as<std::string>(),
                              handler,
                              DefaultMasterApplication::Create(),
                              config
                          );

            if(handler->empty())
            {
                logger.info("No measurement handlers: ignoring poll configuration");
            }
            else
            {
                // configure the integrity scan
                master->AddClassScan(
                    ClassField::AllClasses(),
                    TimeDuration::Milliseconds(yaml::require(protocol, keys::integrity_poll_ms).as<uint32_t>())
                );
            }

            // start allowing the executor to dispatch controls
            executor->start(master);

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

