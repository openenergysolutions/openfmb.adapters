
#ifndef OPENFMB_ADAPTER_PLUGINREGISTRY_H
#define OPENFMB_ADAPTER_PLUGINREGISTRY_H

#include <adapter-api/IPluginFactory.h>

#include <map>

namespace adapter {

class PluginRegistry {

public:
    PluginRegistry();

    template <class Action>
    void foreach_adapter(const Action& action) const
    {
        for (auto& entry : lookup) {
            action(*entry.second);
        }
    }

    std::shared_ptr<const IPluginFactory> find(const std::string& name);

private:
    template <class T>
    void add();

    std::map<std::string, std::shared_ptr<IPluginFactory>> lookup;
};
}

#endif //OPENFMB_ADAPTER_ADAPTERREGISTRY_H
