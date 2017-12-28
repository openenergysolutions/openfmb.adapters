
#ifndef OPENFMB_ADAPTER_ADAPTERREGISTRY_H
#define OPENFMB_ADAPTER_ADAPTERREGISTRY_H

#include <adapter-api/IAdapterFactory.h>

#include <map>

class AdapterRegistry
{

public:

    AdapterRegistry();

    openfmb::IAdapterFactory& find(const std::string& id);

private:

    template<class T>
    void add();

    std::map<std::string, std::unique_ptr<openfmb::IAdapterFactory>> lookup;

};

#endif //OPENFMB_ADAPTER_ADAPTERREGISTRY_H
