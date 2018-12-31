
#include "SubscriptionRegistry.h"

#include <string>

namespace adapter {
namespace mqtt {

    void SubscriptionRegistry::subscribe(::mqtt::async_client& client)
    {
        for (auto& topic : this->topics) {
            client.subscribe(topic, 1)->wait(); // default QoS
        }
    }

    bool SubscriptionRegistry::handle(::mqtt::const_message_ptr msg)
    {
        const auto pos = msg->get_topic().find_last_of('/');
        if (pos == std::string::npos) {
            logger.warn("topic name lacks '/' delimiter: {}", msg->get_topic());
            return false;
        }

        const auto base_name = msg->get_topic().substr(0, pos);

        const auto entry = this->handlers.find(base_name);

        if (entry == this->handlers.end()) {
            logger.warn("no handler for base topic: {}", base_name);
            return false;
        }

        entry->second->handle(std::move(msg));
    }
}
}
