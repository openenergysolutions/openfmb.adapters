#ifndef OPENFMB_ADAPTER_DDS_RTI_DDSPLUGIN_H
#define OPENFMB_ADAPTER_DDS_RTI_DDSPLUGIN_H

#include "IDDSSubscriber.h"

#include <adapter-api/IMessageBus.h>
#include <adapter-api/IPlugin.h>
#include <adapter-api/Logger.h>
#include <adapter-util/config/YAMLGetters.h>

#include <dds/dds.hpp>

#include <memory>
#include <vector>

namespace adapter {
namespace dds {
namespace rti {

class DDSPlugin final : public api::IPlugin
{
public:
    using subscriber_vec_t = std::vector<std::unique_ptr<IDDSSubscriber>>;

    DDSPlugin() = delete;
    ~DDSPlugin() = default;

    DDSPlugin(const api::Logger& logger, const YAML::Node& node, api::message_bus_t bus);

    std::string name() const final
    {
        return "dds-rti";
    }

    void start() final;

private:
    static ::dds::pub::qos::PublisherQos get_publisher_qos();

    api::Logger m_logger;

    ::dds::domain::DomainParticipant m_participant;
    std::shared_ptr<::dds::pub::Publisher> m_dds_publisher;
    std::shared_ptr<::dds::sub::Subscriber> m_dds_subscriber;

    subscriber_vec_t m_subscribers;
};

}
}
}

#endif // OPENFMB_ADAPTER_DDS_RTI_DDSPLUGIN_H
