
#include "adapter-api/util/Exception.h"
#include "adapter-api/IAdapter.h"
#include "adapter-api/util/YAMLUtil.h"

#include "AdapterRegistry.h"
#include "ProtoBus.h"
#include "Shutdown.h"

#include <fstream>
#include <iostream>

using namespace std;
using namespace openfmb;

vector<unique_ptr<IAdapter>> init_adapters(const std::string& yaml_path, AdapterRegistry& registry, IProtoSubscribers& subscribers);

int main(int argc, char** argv)
{
    if(argc != 2)
    {
        cerr << "usage: " << endl;
        cerr << "openfmb-adapter <config file>" << endl;
        return -1;
    }

    // registry of all adapter types
    AdapterRegistry registry;

    // adapters publish and subscribe to this common bus
    const auto bus = make_shared<ProtoBus>();

    // load the adapters from the yaml configuration
    const auto adapters = init_adapters(argv[1], registry, *bus);

    // don't allow any more subscriptions to the bus (effectively make it immutable)
    bus->finalize();

    // start the adapters running/publishing to the bus
    for(auto& adapter : adapters)
    {
        adapter->start(bus);
    }

    // wait for ctrl-c
    Shutdown::await(SIGINT);

    std::cout << "shutting down" << std::endl;

    return 0;
}

vector<unique_ptr<IAdapter>> init_adapters(const std::string& yaml_path, AdapterRegistry& registry, IProtoSubscribers& subscribers)
{
    const auto yaml_root = YAML::LoadFile(yaml_path);

    const auto adapter_list = yaml::require(yaml_root, "adapters");

    vector<unique_ptr<IAdapter>> adapters;

    // loop over the adapters initializing them
    for(YAML::const_iterator it = adapter_list.begin(); it != adapter_list.end(); ++it)
    {
        const auto type = yaml::require(*it, "type").as<string>();
        const auto enabled = yaml::require(*it, "enabled").as<bool>();
        if(enabled)
        {
            cout << "initializing: " << type << endl;
            adapters.push_back(registry.find(type).create(*it, subscribers));
        }
    }

    return move(adapters);
}