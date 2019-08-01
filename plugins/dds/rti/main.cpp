#include <chrono>
#include <iostream>
#include <thread>
#include <dds/dds.hpp>
#include "OpenFMB-IDL.hpp"

class Listener : public dds::sub::DataReaderListener<openfmb::breakermodule::Breaker>
{
public:
    void on_requested_deadline_missed(dds::sub::DataReader<openfmb::breakermodule::Breaker>& reader, const dds::core::status::RequestedDeadlineMissedStatus& status) override
    {

    }

    void on_requested_incompatible_qos(dds::sub::DataReader<openfmb::breakermodule::Breaker>& reader, const dds::core::status::RequestedIncompatibleQosStatus& status) override
    {

    }

    void on_sample_rejected(dds::sub::DataReader<openfmb::breakermodule::Breaker>& reader, const dds::core::status::SampleRejectedStatus& status) override
    {

    }

    void on_liveliness_changed(dds::sub::DataReader<openfmb::breakermodule::Breaker>& reader, const dds::core::status::LivelinessChangedStatus& status) override
    {

    }

    void on_data_available(dds::sub::DataReader<openfmb::breakermodule::Breaker>& reader) override
    {
        auto samples = reader.take();
        for(const auto& sample : samples)
        {
            std::cout << "Received: " << sample.data().name() << std::endl;
        }
    }

    void on_subscription_matched(dds::sub::DataReader<openfmb::breakermodule::Breaker>& reader, const dds::core::status::SubscriptionMatchedStatus& status) override
    {

    }

    void on_sample_lost(dds::sub::DataReader<openfmb::breakermodule::Breaker>& reader, const dds::core::status::SampleLostStatus& status) override
    {

    }
};

int main()
{
    try
    {
        dds::domain::DomainParticipant participant{1};
        dds::topic::Topic<openfmb::breakermodule::Breaker> topic{participant, "ben_hur"};

        // Subscriber
        Listener listener{};
        dds::sub::Subscriber subscriber{participant};
        dds::sub::DataReader<openfmb::breakermodule::Breaker> reader{subscriber, topic};
        reader.listener(&listener, dds::core::status::StatusMask::all());

        // Publisher
        dds::pub::Publisher publisher{participant};
        dds::pub::DataWriter<openfmb::breakermodule::Breaker> writer{publisher, topic};

        openfmb::breakermodule::Breaker breaker{};
        breaker.name() = std::string{"Judah Ben-Hur"};

        while(true)
        {
            writer.write(breaker);
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    }
    catch(const dds::core::Exception& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}
