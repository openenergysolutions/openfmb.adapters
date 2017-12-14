
#include "AdapterRegistry.h"

#include "console/ConsoleAdapterFactory.h"

#ifdef OPENFMB_USE_DNP3
#include "dnp3/DNP3MasterFactory.h"
#endif

#ifdef OPENFMB_USE_TWINOAKS_DDS
#include "twinoaks/DDSAdapterFactory.h"
#endif

#include "adapter-api/util/Exception.h"

AdapterRegistry::AdapterRegistry()
{
    this->add<openfmb::ConsoleAdapterFactory>();


#ifdef OPENFMB_USE_DNP3
    this->add<openfmb::DNP3MasterFactory>();
#endif

#ifdef OPENFMB_USE_TWINOAKS_DDS
    this->add<openfmb::DDSAdapterFactory>();
#endif

}

openfmb::IAdapterFactory& AdapterRegistry::find(const std::string& id)
{
    auto adapter = this->lookup.find(id);
    if(adapter == this->lookup.end())
    {
        throw openfmb::Exception("Unknown adapter id: ", id);
    }
    return *(adapter->second);
}

template <class T>
void AdapterRegistry::add()
{
    auto factory = std::make_unique<T>();

    this->lookup[factory->name()] = std::move(factory);
}

