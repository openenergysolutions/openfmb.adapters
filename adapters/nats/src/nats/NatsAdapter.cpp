
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

    NatsAdapter::~NatsAdapter()
    {
        this->shutdown = true;
        this->background_thread->join();
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
        natsConnection* connection;

        while(!shutdown)
        {
            auto err = natsConnection_ConnectTo(&connection, NATS_DEFAULT_URL);

            if(err) // TODO - specify URL in config
            {
                logger.warn("Unable to connect to NATS server: {}", nats_GetLastError(nullptr));
                std::this_thread::sleep_for(std::chrono::seconds(5));
            }
            else
            {
                this->run(*connection);

                natsConnection_Close(connection);
            }
        }

    }

    void NatsAdapter::run(natsConnection& conn)
    {
        while(!shutdown)
        {
            auto msg = this->messages->pop(std::chrono::milliseconds(100));
            if(msg)
            {

                auto err = natsConnection_Publish(&conn, msg->subject.c_str(), msg->buffer.data(), static_cast<int>(msg->buffer.length()));

                if(err)
                {
                    this->logger.warn("publish to subject {} failed: {}", msg->subject, nats_GetLastError(nullptr));
                }
                else
                {
                    this->logger.info("published {} bytes to subject: {}", msg->buffer.length(), msg->subject);
                }


            }
        }
    }
}

