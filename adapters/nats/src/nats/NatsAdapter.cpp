
#include "NatsAdapter.h"

#include "Subscriber.h"

#include "adapter-api/util/YAMLUtil.h"

namespace openfmb
{

    NatsAdapter::NatsAdapter(const Logger& logger, const YAML::Node& node, IProtoSubscribers& subscribers) :
        config(node),
        logger(logger),
        messages(
            std::make_shared<SynchronizedQueue<Message>>(config.max_queued_messages)
        )
    {
        this->configure_publishers(yaml::require(node, "publish"), subscribers);
    }

    NatsAdapter::Config::Config(const YAML::Node& node) :
        max_queued_messages(yaml::require(node, "max_queued_messages").as<size_t>()),
        connect_url(yaml::require(node, "connect_url").as<std::string>()),
        connect_retry_seconds(std::chrono::seconds(yaml::require(node, "connect_retry_seconds").as<uint32_t>()))
    {

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
            auto err = natsConnection_ConnectTo(&connection, this->config.connect_url.c_str());

            if(err)
            {
                logger.warn("Unable to connect to NATS server: {}", nats_GetLastError(nullptr));
                std::this_thread::sleep_for(this->config.connect_retry_seconds);
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

    template <class T>
    void NatsAdapter::add_publisher(const YAML::Node& node, IProtoSubscribers& subscribers)
    {
        const YAML::Node profile = yaml::require(node, T::descriptor()->name());


        if(profile.as<bool>())
        {
            const auto subject =  T::descriptor()->full_name();

            logger.info("{} will be published to subject: {}", T::descriptor()->name(), subject);

            subscribers.subscribe(
                std::make_shared<Subscriber<T>>(
                    this->logger,
                    subject,
                    this->messages
                )
            );


        }

    }

    void NatsAdapter::configure_publishers(const YAML::Node& node, IProtoSubscribers& subscribers)
    {
        this->add_publisher<ResourceReadingProfile>(node, subscribers);

    }
}

