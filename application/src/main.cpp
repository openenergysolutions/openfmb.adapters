

//#include <adapter-api/IAdapter.h>

//#include "ProtoBus.h"
#include "dnp3/DNP3MasterFactory.h"

#include <fstream>
#include <iostream>

using namespace openfmb;

int main(int argc, char** argv)
{
    if(argc != 2) {
        std::cerr << "usage: " << std::endl;
        std::cerr << "openfmb-adapter <config file>" << std::endl;
        return -1;
    }

    const auto base_node = YAML::LoadFile(argv[1]);

    const auto adapters = base_node["adapters"];

    for(YAML::const_iterator it = adapters.begin(); it != adapters.end(); ++it) {
        std::cout << (*it)["type"].as<std::string>() << std::endl;
    }

    // Initialize the factories for the adapters.
    std::map<std::string, std::unique_ptr<IAdapterFactory>> factories;
    factories["dnp3"] = std::make_unique<DNP3MasterFactory>();

    // adapters publish and subscribe to this common bus
    //const auto bus = std::make_shared<ProtoBus>();

    // TODO - have plugins publish and subscribe to the bus using the YAML

    // don't allow any more subscriptions to the bus (effectively make it immutable)
    //bus->finalize();


    // TODO - block for a shutdown signal

    return 0;
}
