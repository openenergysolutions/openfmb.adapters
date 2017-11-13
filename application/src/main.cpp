

#include <adapter-api/IAdapter.h>

#include "ProtoBus.h"
#include "dnp3/DNP3Factory.h"

#include <fstream>
#include <iostream>

using namespace openfmb;

int main(int argc, char** argv)
{
    if(argc != 2) {
        std::cerr << "usage: " << std::endl;
        std::cerr << "openfmb-adapter <configuration.yaml>" << std::endl;
        return -1;
    }

    std::ifstream fin(argv[1]);
    YAML::Parser parser(fin);

    YAML::Node doc;
    parser.PrintTokens(std::cout);
    return 0;


    // Initialize the factories for the adapters.
    std::map<std::string, std::unique_ptr<IAdapterFactory>> factories;
    factories["dnp3"] = std::make_unique<DNP3Factory>();

    // adapters publish and subscribe to this common bus
    const auto bus = std::make_shared<ProtoBus>();

    // TODO - have plugins publish and subscribe to the bus using the YAML

    // don't allow any more subscriptions to the bus (effectively make it immutable)
    bus->finalize();


    // TODO - block for a shutdown signal

    return 0;
}
