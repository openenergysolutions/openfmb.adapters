// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_PLUGINREGISTRY_H
#define OPENFMB_ADAPTER_PLUGINREGISTRY_H

#include <adapter-api/IPluginFactory.h>

#include <map>

namespace adapter {

class PluginRegistry {

public:

    PluginRegistry();

    template <class Action>
    void foreach_plugin(const Action& action) const
    {
        for (auto& entry : lookup) {
            action(*entry.second);
        }
    }

    std::shared_ptr<const api::IPluginFactory> find(const std::string& name);

private:
    template <class T>
    void add();

    std::map<std::string, std::shared_ptr<api::IPluginFactory>> lookup;
};
}

#endif //OPENFMB_ADAPTER_ADAPTERREGISTRY_H
