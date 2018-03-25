
#include "Plugin.h"

#include "MappingLoader.h"
#include "PollSink.h"

#include "adapter-api/helpers/generated/MessageVisitors.h"

#include "modbus/logging/LoggerFactory.h"

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

            auto sink = get_poll_sink<resourcemodule::ResourceReadingProfile>(node, bus);

            this->logger.info("Session {} has {} mapped values", name, sink->num_mapped_values());
        }

        void Plugin::start()
        {
            // TODO - start the polling
        }
    }
}

