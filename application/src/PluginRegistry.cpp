
#include "PluginRegistry.h"

#include "log/LogPluginFactory.h"

#ifdef OPENFMB_USE_DNP3
#include "dnp3/PluginFactory.h"
#endif

#ifdef OPENFMB_USE_MODBUS
#include "modbus/PluginFactory.h"
#endif

#ifdef OPENFMB_USE_NATS
#include "nats/PluginFactory.h"
#endif

#ifdef OPENFMB_USE_TWINOAKS_DDS
#include "twinoaks/DDSPluginFactory.h"
#endif

namespace adapter
{

    PluginRegistry::PluginRegistry()
    {
        this->add<adapter::LogPluginFactory>();

#ifdef OPENFMB_USE_DNP3
        this->add<dnp3::PluginFactory>();
#endif

#ifdef OPENFMB_USE_MODBUS
        this->add<modbus::PluginFactory>();
#endif

#ifdef OPENFMB_USE_NATS
        this->add<nats::PluginFactory>();
#endif

#ifdef OPENFMB_USE_TWINOAKS_DDS
        this->add<adapter::DDSPluginFactory>();
#endif

    }

    template<class T>
    void PluginRegistry::add()
    {
        auto factory = std::make_shared<T>();
        this->lookup[factory->name()] = factory;
    }

}
