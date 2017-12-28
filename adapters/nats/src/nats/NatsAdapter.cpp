
#include "NatsAdapter.h"

#include "Subscriber.h"

namespace openfmb
{

    NatsAdapter::NatsAdapter(const Logger& logger, const YAML::Node& node, IProtoSubscribers& subscribers) :
        logger(logger),
        messages(
            std::make_shared<SynchronizedQueue<Message>>(100) // TODO - configure the size of the queue
        )
    {
        // TODO - make the subscriptions configurable
        // TODO - what should the subject names be?
        subscribers.subscribe(
            std::make_shared<Subscriber<ResourceReadingProfile>>(
                logger,
                ResourceReadingProfile::descriptor()->full_name(),
                this->messages
            )
        );
    }

    void NatsAdapter::start(const std::shared_ptr<IProtoPublishers>& publishers)
    {
        if(this->background_thread) return;

        this->background_thread = std::make_unique<std::thread>([this]()
        {
            this->run();
        });
    }

    void NatsAdapter::run()
    {
        while(true)
        {
            auto msg = this->messages->pop(std::chrono::milliseconds(100));
            if(msg)
            {
                this->logger.info("read msg for {} w/ size {}", msg->subject, msg->buffer.length());
            }
        }
    }
}

