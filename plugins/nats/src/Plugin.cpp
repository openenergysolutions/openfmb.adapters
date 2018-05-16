

#include "Plugin.h"

#include "NATSPublisher.h"

#include <adapter-api/util/YAMLUtil.h>
#include <adapter-api/ProfileMode.h>
#include <adapter-api/ConfigStrings.h>

#include "ConfigStrings.h"
#include "NATSSubscriber.h"
#include "SubjectName.h"

namespace adapter
{
    namespace nats
    {

        Plugin::Plugin(const Logger& logger, const YAML::Node& node, IMessageBus& bus) :
            config(node),
            logger(logger),
            messages(
                std::make_shared<SynchronizedQueue<Message>>(config.max_queued_messages)
            )
        {
            const auto profiles = yaml::require(node, ::adapter::keys::profiles);

            this->read_all_profiles(profiles, logger, bus);
        }

        Plugin::Config::Config(const YAML::Node& node) :
            max_queued_messages(yaml::require(node, keys::max_queued_messages).as<size_t>()),
            connect_url(yaml::require(node, keys::connect_url).as<std::string>()),
            connect_retry_seconds(std::chrono::seconds(yaml::require(node, keys::connect_retry_seconds).as<uint32_t>()))
        {

        }

        Plugin::~Plugin()
        {
            this->shutdown = true;
            this->background_thread->join();
        }

        void Plugin::start()
        {
            if(this->background_thread) return;

            this->background_thread = std::make_unique<std::thread>([this]()
            {
                this->run();
            });
        }

        void Plugin::run()
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
                    // set up any subscriptions
                    for(auto& sub : this->subscriptions)
                    {
                        sub->start(connection);
                    }

                    this->run(*connection);

                    natsConnection_Close(connection);
                }
            }

        }

        void Plugin::run(natsConnection& conn)
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

        void Plugin::read_resource_reading(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            this->configure_profile<resourcemodule::ResourceReadingProfile>(node, bus);
        }

        void Plugin::read_switch_reading(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            this->configure_profile<switchmodule::SwitchReadingProfile>(node, bus);
        }

        void Plugin::read_switch_status(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            this->configure_profile<switchmodule::SwitchStatusProfile>(node, bus);
        }

        template <class T>
        void Plugin::configure_profile(const YAML::Node& node, IMessageBus& bus)
        {
            // get the mode for the profile
            const auto mode = ProfileModeMeta::parse(yaml::require_string(node, T::descriptor()->name()));
            switch(mode)
            {
            case(ProfileMode::publish):
                this->add_publisher<T>(bus);
                break;
            case(ProfileMode::subscribe):
                this->add_subscriber<T>(bus);
                break;
            default:
                break;
            }
        }

        template <class T>
        void Plugin::add_publisher(IMessageBus& bus)
        {
            logger.info("Registering subscriber for: {}", T::descriptor()->name());

            bus.subscribe(
                std::make_shared<NATSPublisher<T>>(
                    this->logger,
                    this->messages
                )
            );
        }

        template <class T>
        void Plugin::add_subscriber(IMessageBus& bus)
        {
            const auto subject =  get_subscribe_all_subject_name<T>();

            logger.info("{} will be read from subject: {}", T::descriptor()->name(), subject);

            this->subscriptions.push_back(
                std::make_unique<NATSSubscriber<T>>(
                    this->logger,
                    subject,
                    bus.get_publisher<T>()
                )
            );
        }

    }

}

