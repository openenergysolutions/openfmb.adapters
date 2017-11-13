

#include "ProtoBus.h"

using namespace openfmb;

int main()
{
    // adapters publish and subscribe to this common bus
    const auto bus = std::make_shared<ProtoBus>();

    // TODO - have plugins publish and subscribe to the bus


    // don't allow any more subscriptions to the bus (effectively make it immutable)
    bus->finalize();


    // TODO - block for a shutdown signal

    return 0;
}
