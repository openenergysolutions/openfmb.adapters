
#include "Plugin.h"

#include <asiodnp3/PrintingSOEHandler.h>
#include <asiodnp3/DefaultMasterApplication.h>
#include <opendnp3/LogLevels.h>

#include <adapter-api/util/YAMLUtil.h>
#include <adapter-api/util/YAMLTemplate.h>
#include <adapter-api/config/generated/MessageVisitors.h>
#include <adapter-api/ConfigStrings.h>
#include <adapter-api/IProfileHandler.h>

#include "ConfigStrings.h"
#include "ConfigReadVisitor.h"
#include "LogAdapter.h"

#include <stdexcept>


using namespace openpal;
using namespace opendnp3;
using namespace asiodnp3;

namespace adapter
{
    namespace dnp3
    {
        template <class T>
        using visit_fun_t = void (*)(IProtoVisitor<T>&);

        class ProfileLoader : public IProfileHandler
        {
            const YAML::Node node;
            const Logger logger;
            IMessageBus& bus;
            const std::shared_ptr<IConfigurationBuilder> builder;

        public:
            ProfileLoader(const YAML::Node& node, const Logger& logger, IMessageBus& bus, std::shared_ptr<IConfigurationBuilder> builder) :
                node(node),
                logger(logger),
                bus(bus),
                builder(std::move(builder))
            {}


        protected:

            void handle_resource_reading() override
            {
                load_any<resourcemodule::ResourceReadingProfile>();
            }

            void handle_switch_reading() override
            {
                load_any<switchmodule::SwitchReadingProfile>();
            }

            void handle_switch_status() override
            {
                load_any<switchmodule::SwitchStatusProfile>();
            }

        private:

            template <class T>
            void load_any()
            {
                const auto profile = std::make_shared<T>();

                // clear the profile before processing measurements
                builder->add_start_action([profile]()
                {
                    profile->Clear();
                });

                ConfigReadVisitor<T> reader(this->node, profile, this->builder);
                visit(reader);

                // publish the profile when the response completes
                this->builder->add_end_action([profile, publisher = this->bus.get_publisher<T>()]()
                {
                    publisher->publish(*profile);
                });
            }
        };

        Plugin::Plugin(
            const Logger& logger,
            const YAML::Node& node,
            IMessageBus& bus
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

            const auto handler = std::make_shared<SOEHandler>();

            const auto profiles = yaml::require(node, ::adapter::keys::profiles);

            yaml::foreach(
                profiles,
                [&](const YAML::Node& node)
        {
            ProfileLoader loader(node, logger, bus, handler);
                loader.handle_one_profile(yaml::require_string(node, ::adapter::keys::name));
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

