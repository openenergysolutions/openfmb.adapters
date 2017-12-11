
#include "ConsoleAdapter.h"

#include "adapter-api/util/YAMLUtil.h"

#include <iostream>

#include "adapter-api/ProfileNames.h"

namespace openfmb
{

    template <class Proto>
    class Printer final : public ISubscriber<Proto>
    {

        virtual void receive(const Proto& message) override
        {
            std::cout << message.DebugString() << std::endl;
        }

    };

    ConsoleAdapter::ConsoleAdapter(const YAML::Node& node, IProtoSubscribers& subscribers)
    {
        const auto profiles = yaml::require(node, "print-profiles");

        if(yaml::require(profiles, profiles::resource_reading).as<bool>())
        {
            subscribers.subscribe(std::make_shared<Printer<ResourceReadingProfile>>());
        }
    }

}


