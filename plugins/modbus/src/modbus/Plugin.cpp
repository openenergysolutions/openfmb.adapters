
#include "Plugin.h"

#include "ConfigReadVisitor.h"
#include "PollSink.h"
#include "PollManager.h"

#include "adapter-api/helpers/generated/MessageVisitors.h"

#include "modbus/logging/LoggerFactory.h"
#include "modbus/Ipv4Endpoint.h"
#include "modbus/channel/IChannel.h"
#include "modbus/session/ISessionResponseHandler.h"
#include "modbus/messages/ReadHoldingRegistersRequest.h"

namespace adapter
{
    namespace modbus
    {
        template<class T>
        std::unique_ptr<IProfileMapping<T>> read_mapping(const YAML::Node& node)
        {

            auto mapping = std::make_unique<ProfileMapping<T>>();
            ConfigReadVisitor<T> visitor(node, *mapping);
            visit(visitor);
            return std::move(mapping);
        }

        template<class T>
        std::unique_ptr<IPollSink> get_poll_sink(const YAML::Node& node, IMessageBus& bus)
        {

            return std::make_unique<PollSink<T>>(
                       bus.get_publisher<T>(),
                       read_mapping<T>(node)
                   );
        }

        Plugin::Plugin(const YAML::Node& node, const Logger& logger, IMessageBus& bus) : logger(logger)
        {
            // initialize the Modbus manager
            this->manager = ::modbus::IModbusManager::create(
                                ::modbus::LoggerFactory::create_custom_logger(logger.get_impl()) // TODO - configure thread pool
                            );

            // loop over each session performing configuration
            yaml::foreach(
                yaml::require(node, keys::sessions),
                [&](const YAML::Node& entry)
        {
            this->configure_session(entry, bus);
            }
            );
        }

        void Plugin::configure_session(const YAML::Node& node, IMessageBus& bus)
        {
            const auto name = yaml::require_string(node, keys::name);

            auto sink = get_poll_sink<resourcemodule::ResourceReadingProfile>(
                            yaml::require(node, keys::mapping),
                            bus
                        );

            this->logger.info("Session {} has {} mapped values", name, sink->num_mapped_values());

            const auto poller = PollManager::create(
                                    this->logger,
                                    std::move(sink),
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

