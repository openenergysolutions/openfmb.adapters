
#include "Plugin.h"

#include "PublishConfigReadVisitor.h"
#include "PollHandler.h"
#include "PollManager.h"

#include <adapter-api/config/generated/ModelVisitors.h>
#include <adapter-api/ProfileHelpers.h>
#include <adapter-api/util/YAMLTemplate.h>

#include "modbus/logging/LoggerFactory.h"
#include "modbus/channel/IChannel.h"
#include "modbus/channel/Ipv4Endpoint.h"


namespace adapter
{
    namespace modbus
    {

        template <class T>
        struct ProfileReader
        {
            static void handle(std::shared_ptr<PollHandler> handler, const YAML::Node& node, publisher_t publisher)
            {
                PublishConfigReadVisitor<T> visitor(node, std::move(publisher), std::move(handler));
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

            const auto add_profile = [&](const YAML::Node& node)
            {
                const auto profile_name = yaml::require_string(node, ::adapter::keys::name);
                profiles::handle_one<ProfileReader>(profile_name, handler, node, bus);
            };

            yaml::foreach(profiles_seq, add_profile);

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

