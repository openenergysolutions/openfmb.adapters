
#include "AdapterRegistry.h"

#include "log/LogAdapterFactory.h"

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
    this->add<openfmb::LogAdapterFactory>();

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

template <class T>
void AdapterRegistry::add()
{
    auto factory = std::make_shared<T>();
    this->lookup[factory->name()] = factory;
}

