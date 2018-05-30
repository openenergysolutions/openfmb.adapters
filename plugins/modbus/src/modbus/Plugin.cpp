
#include "Plugin.h"

#include "ConfigReadVisitor.h"
#include "PollHandler.h"
#include "PollManager.h"

#include <adapter-api/config/generated/MessageVisitors.h>
#include <adapter-api/IProfileHandler.h>
#include <adapter-api/util/YAMLTemplate.h>

#include "modbus/logging/LoggerFactory.h"
#include "modbus/channel/IChannel.h"
#include "modbus/channel/Ipv4Endpoint.h"


namespace adapter
{
    namespace modbus
    {

        class ProfileReader : public IProfileHandler
        {
            const std::shared_ptr<PollHandler> handler;
            const YAML::Node node;
            const Logger logger;
            IMessageBus& bus;

        public:

            ProfileReader(std::shared_ptr<PollHandler> handler, const YAML::Node& node, Logger logger, IMessageBus& bus) :
                handler(std::move(handler)),
                node(node),
                logger(std::move(logger)),
                bus(bus)
            {}

        protected:
            void handle_resource_reading() override
            {
                this->handle_any<resourcemodule::ResourceReadingProfile>();
            }

            void handle_switch_reading() override
            {
                this->handle_any<switchmodule::SwitchReadingProfile>();
            }

            void handle_switch_status() override
            {
                this->handle_any<switchmodule::SwitchStatusProfile>();
            }

        private:

            template <class T>
            void handle_any()
            {
                const auto profile = std::make_shared<T>();

                ConfigReadVisitor<T> visitor(this->node, profile, this->handler);
                visit(visitor);

                this->handler->add_end_action(
                    [profile, publisher = bus.get_publisher<T>()] ()
                {
                    publisher->publish(*profile);
                }
                );

            }
        };

        Plugin::Plugin(const YAML::Node& node, const Logger& logger, IMessageBus& bus) : logger(logger)
        {
            // initialize the Modbus manager
            this->manager = ::modbus::IModbusManager::create(
                                ::modbus::LoggerFactory::create_custom_logger(logger.get_impl()) // TODO - configure thread pool
                            );

            yaml::load_template_configs(
                yaml::require(node, keys::sessions),
                this->logger,
                [&](const YAML::Node & config)
            {
                this->configure_session(config, bus);
            }
            );
        }

        void Plugin::configure_session(const YAML::Node& node, IMessageBus& bus)
        {
            const auto name = yaml::require_string(node, keys::name);
            const auto profile_node = yaml::require(node, keys::profile);
            const auto profile_name = yaml::require_string(profile_node, ::adapter::keys::name);

            const auto handler = std::make_shared<PollHandler>();

            ProfileReader reader(handler, profile_node, this->logger, bus);
            reader.handle_one_profile(profile_name);

            this->logger.info("Session {} has {} mapped values", name, handler->num_mapped_values());

            auto poller = PollManager::create(
                              this->logger,
                              handler,
                              std::chrono::milliseconds(yaml::require(node, keys::poll_period_ms).as<int64_t>()),
                              this->get_session(name, node)
                          );

            // Configure polls
            handler->add_necessary_byte_polls(poller, yaml::require(node, keys::allowed_byte_discontinuities).as<int>());
            handler->add_necessary_bit_polls(poller, yaml::require(node, keys::allowed_bit_discontinuities).as<int>());

            this->start_actions.push_back([poller]()
            {
                poller->start();
            });
        }

        std::shared_ptr<::modbus::ISession> Plugin::get_session(const std::string& name, const YAML::Node& node)
        {
            auto channel = this->manager->create_tcp_channel(
                               name,
                               ::modbus::Ipv4Endpoint(
                                   yaml::require_string(node, keys::remote_ip),
                                   yaml::require(node, keys::port).as<uint16_t>()
                               )
                           );

            return channel->create_session(
                       ::modbus::UnitIdentifier(
                           yaml::require(node, keys::unit_identifier).as<int>()
                       ),
                       std::chrono::milliseconds(
                           yaml::require(node, keys::response_timeout_ms).as<int>()
                       )
                   );
        }

        void Plugin::start()
        {
            for(auto& action : start_actions)
            {
                action();
            }
        }
    }
}

