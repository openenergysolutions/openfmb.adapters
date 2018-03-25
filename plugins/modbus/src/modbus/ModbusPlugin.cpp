
#include "ModbusPlugin.h"

#include "ConfigReadVisitor.h"
#include "adapter-api/helpers/generated/MessageVisitors.h"

#include "modbus/IModbusManager.h"
#include "modbus/logging/LoggerFactory.h"

using namespace modbus;

namespace adapter
{
    template <class T>
    std::unique_ptr<IProfileMapping<T>> read_mapping(const YAML::Node& node)
    {
        auto mapping = std::make_unique<ProfileMapping<T>>();
        ConfigReadVisitor<T> visitor(node, *mapping);
        visit(visitor);
        return std::move(mapping);
    }

    ModbusPlugin::ModbusPlugin(const YAML::Node& node, const Logger& logger, IMessageBus& bus) : logger(logger)
    {
        // initialize the Modbus manager
        this->manager = IModbusManager::create(
                LoggerFactory::create_custom_logger(logger.get_impl())
        );

        // perform configuration
        auto mapping = read_mapping<resourcemodule::ResourceReadingProfile>(
                yaml::require(node, keys::mapping)
        );
    }

    void ModbusPlugin::start()
    {

    }

}

