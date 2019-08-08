#ifndef OPENFMB_ADAPTER_DDS_RTI_DDSPLUGIN_H
#define OPENFMB_ADAPTER_DDS_RTI_DDSPLUGIN_H

#include "IDDSPublisher.h"
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
    using publisher_vec_t = std::vector<std::shared_ptr<IDDSPublisher>>;
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
    api::Logger m_logger;

    ::dds::domain::DomainParticipant m_participant;
    ::dds::pub::Publisher m_dds_publisher;
    ::dds::sub::Subscriber m_dds_subscriber;

    publisher_vec_t m_publishers;
    subscriber_vec_t m_subscribers;
};

}
}
}

#endif // OPENFMB_ADAPTER_DDS_RTI_DDSPLUGIN_H
