#ifndef OPENFMB_ADAPTER_DDS_RTI_DDSSUBSCRIBER_H
#define OPENFMB_ADAPTER_DDS_RTI_DDSSUBSCRIBER_H

#include <dds/dds.hpp>

#include "IDDSSubscriber.h"
#include "generated/ConvertToProto.h"

namespace adapter {
namespace dds {
namespace rti {

template<typename ProtoType, typename DdsType>
class DDSSubscriber : public ::dds::sub::DataReaderListener<DdsType>, public IDDSSubscriber {

public:
    DDSSubscriber(const api::Logger& logger, const ::dds::sub::Subscriber& dds_subscribe, const ::dds::topic::Topic<DdsType>& topic, api::publisher_t publisher)
        : m_logger{logger},
          m_dds_subscriber{dds_subscribe},
          m_publisher{publisher},
          m_data_reader{m_dds_subscriber, topic}
    {

    }

    // DataReaderListener
    virtual void on_requested_deadline_missed(::dds::sub::DataReader<DdsType>& reader, const ::dds::core::status::RequestedDeadlineMissedStatus& status) override
    {

    }

    virtual void on_requested_incompatible_qos(::dds::sub::DataReader<DdsType>& reader, const ::dds::core::status::RequestedIncompatibleQosStatus& status) override
    {

    }

    virtual void on_sample_rejected(::dds::sub::DataReader<DdsType>& reader, const ::dds::core::status::SampleRejectedStatus& status) override
    {

    }

    virtual void on_liveliness_changed(::dds::sub::DataReader<DdsType>& reader, const ::dds::core::status::LivelinessChangedStatus& status) override
    {

    }

    virtual void on_data_available(::dds::sub::DataReader<DdsType>& reader) override
    {
        auto messages = reader.take();
        for(const auto& message : messages)
        {
            m_proto_message.Clear();
            convert_to_proto(message, m_proto_message);
            m_publisher->publish(m_proto_message);
        }
    }

    virtual void on_subscription_matched(::dds::sub::DataReader<DdsType>& reader, const ::dds::core::status::SubscriptionMatchedStatus& status) override
    {

    }

    virtual void on_sample_lost(::dds::sub::DataReader<DdsType>& reader, const ::dds::core::status::SampleLostStatus& status) override
    {

    }

    // IDDSSubscriber
    void start() override
    {
        m_data_reader.listener(this, ::dds::core::status::StatusMask::all());
    }

private:
    api::Logger m_logger;
    const ::dds::sub::Subscriber& m_dds_subscriber;
    api::publisher_t m_publisher;

    ::dds::sub::DataReader<DdsType> m_data_reader;
    ProtoType m_proto_message;
};

}
}
}

#endif // OPENFMB_ADAPTER_DDS_RTI_DDSSUBSCRIBER_H
