
#include "Plugin.h"

#include "ConfigReadVisitor.h"
#include "PollHandler.h"
#include "PollManager.h"

#include <adapter-api/config/generated/MessageVisitors.h>
#include <adapter-api/IProfileReader.h>
#include <adapter-api/util/YAMLTemplate.h>

#include "modbus/logging/LoggerFactory.h"
#include "modbus/Ipv4Endpoint.h"
#include "modbus/channel/IChannel.h"
#include "modbus/session/ISessionResponseHandler.h"


namespace adapter
{
    namespace modbus
    {

        class ProfileReader : public IProfileReader
        {
            const std::shared_ptr<PollHandler> handler;

        public:
            ProfileReader(const std::shared_ptr<PollHandler>& handler) : handler(handler) {}

        protected:
            void read_resource_reading(const YAML::Node& node, const Logger& logger, IMessageBus& bus) override
            {
                this->read_any<resourcemodule::ResourceReadingProfile>(node, bus);
            }

            void read_switch_reading(const YAML::Node& node, const Logger& logger, IMessageBus& bus) override
            {
                this->read_any<switchmodule::SwitchReadingProfile>(node, bus);
            }

            void read_switch_status(const YAML::Node& node, const Logger& logger, IMessageBus& bus) override
            {
                this->read_any<switchmodule::SwitchStatusProfile>(node, bus);
            }

        private:

            template <class T>
            void read_any(const YAML::Node& node, IMessageBus& bus)
            {
                const auto profile = std::make_shared<T>();

                ConfigReadVisitor<T> visitor(node, profile, this->handler);
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

            ProfileReader reader(handler);
            reader.read_one_profile(
                profile_name,
                profile_node,
                this->logger,
                bus
            );


            this->logger.info("Session {} has {} mapped values", name, handler->num_mapped_values());

            const auto poller = PollManager::create(
                                    this->logger,
                                    handler,
                                    std::chrono::milliseconds(yaml::require(node, keys::poll_period_ms).as<int64_t>()),
                                    this->get_session(name, node)
                                );

            // configure polls
            yaml::foreach(
                yaml::require(node, keys::polls),
                [poller](const YAML::Node& node)
        {
            // TODO - switch based on poll type
            const auto start = yaml::require(node, keys::start).as<uint16_t>();
                const auto count = yaml::require(node, keys::count).as<uint16_t>();

                poller->add(
                    ::modbus::ReadHoldingRegistersRequest(::modbus::Address(start), count)
                );

            });

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
                           yaml::require(node, keys::unit_identifier).as<uint8_t>()
                       ),
                       std::chrono::seconds(
                           yaml::require(node, keys::response_timeout_ms).as<int32_t>()
                       ),
                       std::make_shared<::modbus::ISessionResponseHandler>()
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

