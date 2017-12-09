
#include "AdapterRegistry.h"

#include "dnp3/DNP3MasterFactory.h"
#include "console/ConsoleAdapterFactory.h"

#include "adapter-api/util/Exception.h"

AdapterRegistry::AdapterRegistry()
{
    this->add(std::make_unique<openfmb::DNP3MasterFactory>());
    this->add(std::make_unique<openfmb::ConsoleAdapterFactory>());
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

void AdapterRegistry::add(std::unique_ptr<openfmb::IAdapterFactory> factory)
{
    this->lookup[factory->name()] = std::move(factory);
}

