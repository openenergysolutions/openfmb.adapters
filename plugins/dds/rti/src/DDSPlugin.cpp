#include "DDSPlugin.h"

#include "ConfigKeys.h"
#include "generated/PublisherFactory.h"
#include "generated/SubscriberFactory.h"

#include <adapter-api/ProfileRegistry.h>
#include <adapter-util/ConfigStrings.h>
#include <adapter-util/util/YAMLUtil.h>

namespace adapter {
namespace dds {
namespace rti {

template<typename T>
struct PublishProfileReader
{
    static void handle(api::Logger& logger, api::subscriber_t subscriber, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        auto publisher = PublisherFactory<T>::build(logger, dds_publisher);

        subscriber->subscribe(std::move(publisher));

        logger.info("configured DDS publisher for subject: {}", T::descriptor()->full_name());
    }
};

template<typename T>
struct SubscribeProfileReader
{
    static void handle(api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher, DDSPlugin::subscriber_vec_t& subscriptions)
    {
        subscriptions.push_back(SubscriberFactory<T>::build(logger, dds_subscriber, publisher));

        logger.info("configured DDS subscriber for subject: {}", T::descriptor()->full_name());
    }
};

DDSPlugin::DDSPlugin(const api::Logger& logger, const YAML::Node& node, api::message_bus_t bus)
    : m_logger{logger},
      m_participant{util::yaml::require_integer<int32_t>(node, keys::domain_id)},
      m_dds_publisher{std::make_shared<::dds::pub::Publisher>(m_participant, get_publisher_qos())},
      m_dds_subscriber{std::make_shared<::dds::sub::Subscriber>(m_participant)}
{
    // Read each publisher (read from message bus and publish to DDS)
    util::yaml::foreach(util::yaml::require(node, keys::publish), [&](const YAML::Node& entry) {
        api::ProfileRegistry::handle_by_name<PublishProfileReader>(
            util::yaml::require_string(entry, util::keys::profile),
            m_logger,
            bus,
            m_dds_publisher);
    });

    // Read each subscriber (read from DDS and publish to the message bus)
    util::yaml::foreach(util::yaml::require(node, keys::subscribe), [&](const YAML::Node& entry) {
        api::ProfileRegistry::handle_by_name<SubscribeProfileReader>(
            util::yaml::require_string(entry, util::keys::profile),
            m_logger,
            m_dds_subscriber,
            bus,
            m_subscribers);
    });
}

void DDSPlugin::start()
{
    for(auto& subscriber : m_subscribers)
    {
        subscriber->start();
    }
}

::dds::pub::qos::PublisherQos DDSPlugin::get_publisher_qos()
{
    ::dds::pub::qos::PublisherQos qos{};
    qos << ::rti::core::policy::AsynchronousPublisher::Enabled();
    return qos;
}

}
}
}
