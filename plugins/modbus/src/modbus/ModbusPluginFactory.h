
#ifndef OPENFMB_ADAPTER_MODBUSPLUGINFACTORY_H
#define OPENFMB_ADAPTER_MODBUSPLUGINFACTORY_H

#include "adapter-api/IPluginFactory.h"

namespace adapter
{

    class ModbusPluginFactory final : public IPluginFactory
    {

    public:

        ModbusPluginFactory() = default;

        virtual std::string name() const override
        {
            return "modbus";
        }

        virtual std::string description() const override
        {
            return "maps openFMB to the Modbus protocol";
        };

        virtual void write_default_config(YAML::Emitter& emitter) const override;

        virtual std::unique_ptr<IPlugin> create(const YAML::Node& node, const Logger& logger, IMessageBus& bus) override;

    private:

        static void write_default_session(const std::string& name, YAML::Emitter& emitter);
        static void write_default_poll(YAML::Emitter& emitter, uint16_t start, uint16_t count);
    };

}

#endif //OPENFMB_ADAPTER_MODBUSPLUGINFACTORY_H
