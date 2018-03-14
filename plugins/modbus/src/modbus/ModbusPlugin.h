#ifndef OPENFMB_ADAPTER_MODBUSPLUGIN_H
#define OPENFMB_ADAPTER_MODBUSPLUGIN_H

#include "adapter-api/IPluginFactory.h"


namespace adapter
{

    class ModbusPlugin final : public IPlugin
    {      

    public:

        ModbusPlugin() = delete;

        virtual std::string name() const override
        {
            return "dnp3";
        }

        virtual void start() override;

    private:

    };

}

#endif
