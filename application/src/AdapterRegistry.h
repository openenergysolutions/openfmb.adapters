
#ifndef OPENFMB_ADAPTER_ADAPTERREGISTRY_H
#define OPENFMB_ADAPTER_ADAPTERREGISTRY_H

#include <map>

#include "adapter-api/IAdapter.h"

class AdapterRegistry
{

public:

    AdapterRegistry();

    openfmb::IAdapterFactory& find(const std::string& id);

private:

    void add(std::unique_ptr<openfmb::IAdapterFactory> factory);

    std::map<std::string, std::unique_ptr<openfmb::IAdapterFactory>> lookup;

};

#endif //OPENFMB_ADAPTER_ADAPTERREGISTRY_H
