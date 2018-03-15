
#include "ModbusPluginFactory.h"

#include "ModbusPlugin.h"


namespace adapter
{

    void ModbusPluginFactory::write_default_config(YAML::Emitter& out) const
    {

    }

    std::unique_ptr<IPlugin> ModbusPluginFactory::create(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
    {
        return std::make_unique<ModbusPlugin>(node, logger, bus);
    }

}
