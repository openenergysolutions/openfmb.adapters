

#include <adapter-api/IAdapter.h>

#include "ProtoBus.h"
#include "dnp3/DNP3Factory.h"

using namespace openfmb;

int main()
{
    /**
     * Initialize the factories for the adapters.
     */
    std::map<std::string, std::unique_ptr<IAdapterFactory>> factories;
    factories["dnp3"] = std::make_unique<DNP3Factory>();

    // TODO - load the YAML and create the adapters


    // adapters publish and subscribe to this common bus
    const auto bus = std::make_shared<ProtoBus>();

    // TODO - have plugins publish and subscribe to the bus

    // don't allow any more subscriptions to the bus (effectively make it immutable)
    bus->finalize();


    // TODO - block for a shutdown signal

    return 0;
}
