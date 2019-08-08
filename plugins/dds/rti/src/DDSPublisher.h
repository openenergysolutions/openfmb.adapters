#ifndef OPENFMB_ADAPTER_DDS_RTI_DDSPUBLISHER_H
#define OPENFMB_ADAPTER_DDS_RTI_DDSPUBLISHER_H

#include <memory>

#include <dds/dds.hpp>

#include <adapter-api/ISubscriptionHandler.h>

#include "IDDSPublisher.h"
#include "generated/ConvertFromProto.h"

namespace adapter {
namespace dds {
namespace rti {

template<typename ProtoType, typename DdsType>
class DDSPublisher : public api::ISubscriptionHandler<ProtoType>, public IDDSPublisher, public std::enable_shared_from_this<DDSPublisher<ProtoType, DdsType>> {

public:
    DDSPublisher(const api::Logger& logger, api::subscriber_t subscriber, const ::dds::pub::Publisher& dds_publisher, const ::dds::topic::Topic<DdsType>& topic)
        : m_logger{logger},
          m_subscriber{subscriber},
          m_dds_publisher{dds_publisher},
          m_data_writer{m_dds_publisher, topic}
    {

    }

    // ISubscriptionHandler
    void process(const ProtoType& message) override
    {
        DdsType dds_data{};
        convert_from_proto(message, dds_data);
        m_data_writer.write(dds_data);
    }

    // IDDSPublisher
    void start() override
    {
        m_subscriber->subscribe(shared_from_this());
    }

private:
    api::Logger m_logger;
    api::subscriber_t m_subscriber;
    const ::dds::pub::Publisher& m_dds_publisher;

    ::dds::pub::DataWriter<DdsType> m_data_writer;
    ProtoType m_proto_message;
};

}
}
}

#endif // OPENFMB_ADAPTER_DDS_RTI_DDSPUBLISHER_H
