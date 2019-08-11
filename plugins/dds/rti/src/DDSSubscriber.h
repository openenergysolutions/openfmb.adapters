#ifndef OPENFMB_ADAPTER_DDS_RTI_DDSSUBSCRIBER_H
#define OPENFMB_ADAPTER_DDS_RTI_DDSSUBSCRIBER_H

#include <memory>

#include <adapter-api/Logger.h>
#include <dds/dds.hpp>

#include "IDDSSubscriber.h"
#include "generated/ConvertToProto.h"

namespace adapter {
namespace dds {
namespace rti {

template<typename ProtoType, typename DdsType>
class DDSSubscriber : public ::dds::sub::DataReaderListener<DdsType>, public IDDSSubscriber {

public:
    DDSSubscriber(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscribe, const ::dds::topic::Topic<DdsType>& topic, api::publisher_t publisher)
        : m_logger{logger},
          m_dds_subscriber{std::move(dds_subscribe)},
          m_publisher{publisher},
          m_data_reader{*m_dds_subscriber, topic}
    {

    }

    ~DDSSubscriber()
    {
        m_data_reader.close();
    }

    // DataReaderListener
    virtual void on_requested_deadline_missed(::dds::sub::DataReader<DdsType>& reader, const ::dds::core::status::RequestedDeadlineMissedStatus& status) override
    {
        m_logger.warn("Requested deadline missed. Total count: {}, Total count change: {}", status.total_count(), status.total_count_change());
    }

    virtual void on_requested_incompatible_qos(::dds::sub::DataReader<DdsType>& reader, const ::dds::core::status::RequestedIncompatibleQosStatus& status) override
    {
        m_logger.warn("Requested incompatible QoS. Total count: {}, Total count change: {}, Last policy ID: {}", status.total_count(), status.total_count_change(), status.last_policy_id());
    }

    virtual void on_sample_rejected(::dds::sub::DataReader<DdsType>& reader, const ::dds::core::status::SampleRejectedStatus& status) override
    {
        m_logger.warn("Sample rejected. Total count: {}, Total count change: {}, Last reason: {}", status.total_count(), status.total_count_change(), status.last_reason().to_string());
    }

    virtual void on_liveliness_changed(::dds::sub::DataReader<DdsType>& reader, const ::dds::core::status::LivelinessChangedStatus& status) override
    {
        m_logger.debug("Liveliness changed. Alive count: {}, Not alive count: {}, Alive count change: {}, Not alive count change: {}", status.alive_count(), status.not_alive_count(), status.alive_count_change(), status.not_alive_count_change());
    }

    virtual void on_data_available(::dds::sub::DataReader<DdsType>& reader) override
    {
        auto messages = reader.take();
        for(const auto& message : messages)
        {
            m_logger.debug("Received DDS message");

            m_proto_message.Clear();
            convert_to_proto(message, m_proto_message);
            m_publisher->publish(m_proto_message);
        }
    }

    virtual void on_subscription_matched(::dds::sub::DataReader<DdsType>& reader, const ::dds::core::status::SubscriptionMatchedStatus& status) override
    {
        m_logger.debug("Subscription matched. Total count: {}, Total count change: {}, Current count: {}, Current count change: {}", status.total_count(), status.total_count_change(), status.current_count(), status.current_count_change());
    }

    virtual void on_sample_lost(::dds::sub::DataReader<DdsType>& reader, const ::dds::core::status::SampleLostStatus& status) override
    {
        m_logger.warn("Sample lost. Total count: {}, Total count change: {}", status.total_count(), status.total_count_change());
    }

    // IDDSSubscriber
    void start() override
    {
        m_data_reader.listener(this, ::dds::core::status::StatusMask::all());
    }

private:
    api::Logger m_logger;
    std::shared_ptr<::dds::sub::Subscriber> m_dds_subscriber;
    api::publisher_t m_publisher;

    ::dds::sub::DataReader<DdsType> m_data_reader;
    ProtoType m_proto_message;
};

}
}
}

#endif // OPENFMB_ADAPTER_DDS_RTI_DDSSUBSCRIBER_H
