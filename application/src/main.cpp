

#include "ProtoBus.h"
#include "dnp3/DNP3MasterFactory.h"

#include <fstream>
#include <iostream>
#include <adapter-api/util/Exception.h>

using namespace openfmb;

int main(int argc, char** argv)
{
    if(argc != 2) {
        std::cerr << "usage: " << std::endl;
        std::cerr << "openfmb-adapter <config file>" << std::endl;
        return -1;
    }

    const auto base_node = YAML::LoadFile(argv[1]);

    // Initialize the factories for the adapters.
    std::map<std::string, std::unique_ptr<IAdapterFactory>> factories;
    factories["dnp3-master"] = std::make_unique<DNP3MasterFactory>();

    const auto adapters = base_node["adapters"];

    // adapters publish and subscribe to this common bus
    const auto bus = std::make_shared<ProtoBus>();

    // loop over the adapters initializing them
    for(YAML::const_iterator it = adapters.begin(); it != adapters.end(); ++it) {
        const auto type = (*it)["type"].as<std::string>();
        std::cout << "initializing: "<< type << std::endl;
        auto factory = factories.find(type);
        if(factory == factories.end()) {
            throw Exception("Unknown adapter factory: ", type);
        }
        auto adapter = factory->second->create(*it, *bus);
    }



    // TODO - have plugins publish and subscribe to the bus using the YAML

    // don't allow any more subscriptions to the bus (effectively make it immutable)
    bus->finalize();


    // TODO - block for a shutdown signal

    return 0;
}
