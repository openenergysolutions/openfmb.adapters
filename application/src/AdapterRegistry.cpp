
#include "AdapterRegistry.h"

#include "console/ConsoleAdapterFactory.h"

#ifdef OPENFMB_USE_DNP3
#include "dnp3/DNP3Factory.h"
#endif

#ifdef OPENFMB_USE_NATS
#include "nats/NatsFactory.h"
#endif

#ifdef OPENFMB_USE_TWINOAKS_DDS
#include "twinoaks/DDSAdapterFactory.h"
#endif

AdapterRegistry::AdapterRegistry()
{
    this->add<openfmb::ConsoleAdapterFactory>();

#ifdef OPENFMB_USE_DNP3
    this->add<openfmb::DNP3Factory>();
#endif

#ifdef OPENFMB_USE_NATS
    this->add<openfmb::NatsFactory>();
#endif

#ifdef OPENFMB_USE_TWINOAKS_DDS
    this->add<openfmb::DDSAdapterFactory>();
#endif

}

std::shared_ptr<openfmb::IAdapterFactory> AdapterRegistry::find(const std::string& id)
{
    auto adapter = this->lookup.find(id);
    return (adapter == this->lookup.end()) ? nullptr : adapter->second;
}

template <class T>
void AdapterRegistry::add()
{
    auto factory = std::make_shared<T>();
    this->lookup[factory->name()] = factory;
}

