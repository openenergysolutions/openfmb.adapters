


#include "adapter-api/util/Exception.h"
#include "adapter-api/IAdapter.h"

#include "AdapterRegistry.h"
#include "ProtoBus.h"

#include <fstream>
#include <iostream>

using namespace openfmb;

std::vector<std::unique_ptr<IAdapter>> init_adapters(const YAML::Node& adapter_list, AdapterRegistry& registry, IProtoSubscribers& subscribers);

int main(int argc, char** argv)
{
    if(argc != 2)
    {
        std::cerr << "usage: " << std::endl;
        std::cerr << "openfmb-adapter <config file>" << std::endl;
        return -1;
    }

    const auto yaml_root = YAML::LoadFile(argv[1]);

    // registry of all adapter types
    AdapterRegistry registry;

    // adapters publish and subscribe to this common bus
    const auto bus = std::make_shared<ProtoBus>();

    const auto adapters = init_adapters(yaml_root["adapters"], registry, *bus);

    // don't allow any more subscriptions to the bus (effectively make it immutable)
    bus->finalize();

    // start the adapters running/publishing to the bus
    for(auto& adapter : adapters)
    {
        adapter->start(bus);
    }

    std::cout << "Press Enter to Continue";
    std::cin.ignore();

    return 0;
}

std::vector<std::unique_ptr<IAdapter>> init_adapters(const YAML::Node& adapter_list, AdapterRegistry& registry, IProtoSubscribers& subscribers)
{
    std::vector<std::unique_ptr<IAdapter>> adapters;

    // loop over the adapters initializing them
    for(YAML::const_iterator it = adapter_list.begin(); it != adapter_list.end(); ++it)
    {
        const auto type = (*it)["type"].as<std::string>();
        const auto enabled = (*it)["enabled"].as<bool>();
        if(enabled)
        {
            std::cout << "initializing: " << type << std::endl;
            adapters.push_back(registry.find(type).create(*it, subscribers));
        }
    }

    return std::move(adapters);
}