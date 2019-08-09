#ifndef OPENFMB_ADAPTER_DDS_RTI_DDSPUBLISHER_H
#define OPENFMB_ADAPTER_DDS_RTI_DDSPUBLISHER_H

#include <memory>

#include <dds/dds.hpp>

#include <adapter-api/ISubscriptionHandler.h>

#include "generated/ConvertFromProto.h"

namespace adapter {
namespace dds {
namespace rti {

template<typename ProtoType, typename DdsType>
class DDSPublisher : public api::ISubscriptionHandler<ProtoType> {

public:
    DDSPublisher(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher, const ::dds::topic::Topic<DdsType>& topic)
        : m_logger{logger},
          m_dds_publisher{dds_publisher},
          m_data_writer{*m_dds_publisher, topic, get_qos()}
    {

    }

    // ISubscriptionHandler
    void process(const ProtoType& message) override
    {
        DdsType dds_data{};
        convert_from_proto(message, dds_data);
        m_data_writer.write(dds_data);
    }

private:
    static ::dds::pub::qos::DataWriterQos get_qos()
    {
        ::dds::pub::qos::DataWriterQos qos{};
        qos << ::dds::core::policy::Reliability::BestEffort();
        qos << ::dds::core::policy::History::KeepLast(100);
        qos << ::rti::core::policy::PublishMode::Asynchronous();
        return qos;
    }

    api::Logger m_logger;
    std::shared_ptr<::dds::pub::Publisher> m_dds_publisher;

    ::dds::pub::DataWriter<DdsType> m_data_writer;
    ProtoType m_proto_message;
};

}
}
}

#endif // OPENFMB_ADAPTER_DDS_RTI_DDSPUBLISHER_H
