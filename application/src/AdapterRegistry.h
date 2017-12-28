
#ifndef OPENFMB_ADAPTER_ADAPTERREGISTRY_H
#define OPENFMB_ADAPTER_ADAPTERREGISTRY_H

#include <adapter-api/IAdapterFactory.h>

#include <map>

class AdapterRegistry
{

public:

    AdapterRegistry();

    std::shared_ptr<openfmb::IAdapterFactory> find(const std::string& id);

    template <class Action>
    void foreach_adapter(const Action& action) const
    {
        for(auto& entry : lookup)
        {
            action(entry.first, *entry.second);
        }
    }

private:

    template<class T>
    void add();

    std::map<std::string, std::shared_ptr<openfmb::IAdapterFactory>> lookup;

};

#endif //OPENFMB_ADAPTER_ADAPTERREGISTRY_H
