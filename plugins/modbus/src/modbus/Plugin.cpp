
#include "Plugin.h"

#include "MappingLoader.h"
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
            MappingLoader<T> visitor(node, *mapping);
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

            // TODO - configure the host, IP, unit identifier, and default timeout
            auto channel = this->manager->create_tcp_channel(name, ::modbus::Ipv4Endpoint("127.0.0.1", 502));
            auto session = channel->create_session(
                               ::modbus::UnitIdentifier(1),
                               std::chrono::seconds(1),
                               std::make_shared<::modbus::ISessionResponseHandler>()
                           );

            // TODO - configure the period
            auto poll_manager = PollManager::create(this->logger, std::move(sink), std::chrono::milliseconds(1000), session);

            // TODO configure the poll manager
            poll_manager->add(
                ::modbus::ReadHoldingRegistersRequest(::modbus::Address(0), 5)
            );

            poll_manager->add(
                ::modbus::ReadHoldingRegistersRequest(::modbus::Address(20), 6)
            );

            this->start_actions.push_back([poll_manager]()
            {
                poll_manager->start();
            });
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

