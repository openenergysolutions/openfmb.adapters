#ifndef OPENFMB_ADAPTER_MODBUSPLUGIN_H
#define OPENFMB_ADAPTER_MODBUSPLUGIN_H

#include "adapter-api/IPluginFactory.h"


namespace adapter
{

    class ModbusPlugin final : public IPlugin
    {

    public:

        ModbusPlugin() = delete;

        ModbusPlugin(const YAML::Node& node, const Logger& logger, IMessageBus& bus);

        virtual std::string name() const override
        {
            return "modbus";
        }

        virtual void start() override;

    private:

        Logger logger;

    };

}

#endif
