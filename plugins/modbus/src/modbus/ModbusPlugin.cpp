
#include "ModbusPlugin.h"

#include "MappingLoader.h"
#include "adapter-api/helpers/generated/MessageVisitors.h"

#include "modbus/logging/LoggerFactory.h"

using namespace modbus;

namespace adapter
{
    template <class T>
    std::unique_ptr<IProfileMapping<T>> read_mapping(const YAML::Node& node)
    {

        auto mapping = std::make_unique<ProfileMapping<T>>();
        MappingLoader<T> visitor(node, *mapping);
        visit(visitor);
        return std::move(mapping);
    }

    ModbusPlugin::ModbusPlugin(const YAML::Node& node, const Logger& logger, IMessageBus& bus) : logger(logger)
    {
        // initialize the Modbus manager
        this->manager = IModbusManager::create(
                            LoggerFactory::create_custom_logger(logger.get_impl()) // TODO - configure thread pool
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

    void ModbusPlugin::configure_session(const YAML::Node& node, IMessageBus& bus)
    {
        const auto name = yaml::require_string(node, keys::name);

        auto mapping = read_mapping<resourcemodule::ResourceReadingProfile>(
                           yaml::require(node, keys::mapping)
                       );

        this->logger.info("Session {} - {} holding registers", name, mapping->num_holding_registers());
    }

    void ModbusPlugin::start()
    {
        // TODO - start the polling
    }

}

