
#include "Plugin.h"

#include "PublishConfigReadVisitor.h"
#include "PollHandler.h"
#include "PollManager.h"

#include <adapter-api/ProfileHelpers.h>
#include <adapter-api/util/YAMLTemplate.h>
#include <adapter-api/config/ProfileType.h>
#include <adapter-api/config/generated/ModelVisitors.h>

#include "modbus/logging/LoggerFactory.h"
#include "modbus/channel/IChannel.h"
#include "modbus/channel/Ipv4Endpoint.h"


namespace adapter
{
    namespace modbus
    {

        template <class T>
        class ProfileReader
        {
        public:
            static void handle(const YAML::Node& node, message_bus_t bus, std::shared_ptr<PollHandler> handler)
            {
                if(adapter::get_profile_type<T>() == ProfileType::control)
                {
                    throw Exception("Modbus plugin doesn't support control profiles");
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

        void Plugin::configure_session(const YAML::Node& node, message_bus_t bus)
        {
            const auto name = yaml::require_string(node, keys::name);
            const auto profiles_seq = yaml::require(node, ::adapter::keys::profiles);
            const auto handler = std::make_shared<PollHandler>();

            const auto add_profile = [&](const YAML::Node & node)
            {
                profiles::handle_one<ProfileReader>(yaml::require_string(node, ::adapter::keys::name), node, bus, handler);
            };

            yaml::foreach(profiles_seq, add_profile);

            this->logger.info("Session {} has {} mapped values", name, handler->num_mapped_values());

            auto poller = PollManager::create(
                              this->logger,
                              handler,
                              std::chrono::milliseconds(yaml::require_integer<int32_t>(node, keys::poll_period_ms)),
                              this->get_session(name, node)
                          );

            // Configure polls
            handler->add_necessary_byte_polls(poller, yaml::require_integer<uint16_t>(node, keys::allowed_byte_discontinuities));
            handler->add_necessary_bit_polls(poller, yaml::require_integer<uint16_t>(node, keys::allowed_bit_discontinuities));

            this->start_actions.emplace_back([poller]()
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

