
#include "Plugin.h"

#include <adapter-api/ProfileHelpers.h>
#include <adapter-api/util/YAMLTemplate.h>
#include <adapter-api/config/ProfileType.h>
#include <adapter-api/config/generated/ModelVisitors.h>

#include "modbus/logging/LoggerFactory.h"
#include "modbus/channel/IChannel.h"
#include "modbus/channel/Ipv4Endpoint.h"

#include "PublishConfigReadVisitor.h"
#include "PollHandler.h"
#include "TransactionProcessor.h"
#include "PollTransaction.h"
#include "HeartbeatTransaction.h"

namespace adapter
{
    namespace modbus
    {

        template <class T>
        class ProfileReader
        {
        public:
            static void handle(const YAML::Node& node, message_bus_t bus, std::shared_ptr<PollHandler> handler, std::shared_ptr<ITransactionProcessor> processor)
            {
                if(adapter::get_profile_type<T>() == ProfileType::control)
                {
                    handle_subscribe(node, std::move(bus), std::move(processor));
                }
                else
                {
                    handle_publish(node, std::move(bus), std::move(handler));
                }
            }

        private:

            static void handle_publish(const YAML::Node& node, message_bus_t bus, std::shared_ptr<PollHandler> handler)
            {
                PublishConfigReadVisitor<T> visitor(node, std::move(bus), std::move(handler));
                visit(visitor);
            }

            static void handle_subscribe(const YAML::Node& node, message_bus_t bus, std::shared_ptr<ITransactionProcessor> processor)
            {
                throw Exception("Modbus plugin doesn't support control profiles");
            }
        };

        Plugin::Plugin(const YAML::Node& node, const Logger& logger, message_bus_t bus) : logger(logger)
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

        AutoPollConfig read_auto_poll_config(const YAML::Node& node)
        {
            const auto config_node = yaml::require(node, keys::auto_polling);
            return AutoPollConfig(
                       yaml::require_integer<uint16_t>(config_node, keys::max_register_gaps)
                   );
        }

        void Plugin::configure_session(const YAML::Node& node, message_bus_t bus)
        {
            const auto name = yaml::require_string(node, keys::name);

            const auto poll_handler = std::make_shared<PollHandler>();
            const auto tx_handler = std::make_shared<TransactionProcessor>(this->logger);

            const auto add_heartbeat = [&](const YAML::Node & node)
            {
                tx_handler->add(
                    std::make_shared<HeartbeatTransaction>(
                        this->logger,
                        yaml::require_integer<uint16_t>(node, keys::index),
                        std::chrono::milliseconds(yaml::require_integer<uint32_t>(node, keys::period_ms)),
                        yaml::require_integer<uint16_t>(node, keys::mask)
                    )
                );
            };

            yaml::foreach(yaml::require(node, keys::heartbeats), add_heartbeat);

            const auto add_profile = [&](const YAML::Node & node)
            {
                profiles::handle_one<ProfileReader>(
                    yaml::require_string(node, ::adapter::keys::name),
                    node,
                    bus,
                    poll_handler,
                    tx_handler
                );
            };

            yaml::foreach(yaml::require(node, ::adapter::keys::profiles), add_profile);

            this->logger.info("Session {} has {} mapped values", name, poll_handler->num_mapped_values());

            if(poll_handler->num_mapped_values() > 0)
            {
                tx_handler->add(
                    std::make_shared<PollTransaction>(
                        this->logger,
                        read_auto_poll_config(node),
                        std::chrono::milliseconds(yaml::require_integer<uint32_t>(node, keys::poll_period_ms)),
                        poll_handler
                    )
                );
            }

            const auto session = this->get_session(name, node);

            this->start_actions.emplace_back([tx_handler, session]()
            {
                tx_handler->start(session);
            });
        }

        std::shared_ptr<::modbus::ISession> Plugin::get_session(const std::string& name, const YAML::Node& node)
        {
            auto channel = this->manager->create_tcp_channel(
                               name,
                               ::modbus::Ipv4Endpoint(
                                   yaml::require_string(node, keys::remote_ip),
                                   yaml::require_integer<uint16_t>(node, keys::port)
                               )
                           );

            return channel->create_session(
                       ::modbus::UnitIdentifier(
                           yaml::require_integer<uint8_t>(node, keys::unit_identifier)
                       ),
                       std::chrono::milliseconds(
                           yaml::require_integer<int32_t>(node, keys::response_timeout_ms)
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

