
#ifndef OPENFMB_ADAPTER_ADAPTERREGISTRY_H
#define OPENFMB_ADAPTER_ADAPTERREGISTRY_H

#include <adapter-api/IAdapterFactory.h>

#include <map>

namespace adapter
{

    class AdapterRegistry
    {

    public:

        AdapterRegistry();

        template<class Action>
        void foreach_adapter(const Action& action) const
        {
            for (auto& entry : lookup)
            {
                action(*entry.second);
            }
        }

    private:

        template<class T>
        void add();

        std::map<std::string, std::shared_ptr<IAdapterFactory>> lookup;

    };

}

#endif //OPENFMB_ADAPTER_ADAPTERREGISTRY_H
