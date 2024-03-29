// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "DDSPlugin.h"

#include "adapter-api/ProfileMode.h"
#include "adapter-util/util/YAMLUtil.h"

#include "OpenFMB-IDLTypeSupport.hh"

#include "generated/ConvertFromProto.h"
#include "generated/ConvertToProto.h"

#include "ConfigKeys.h"

#include <adapter-util/ConfigStrings.h>
#include <boost/algorithm/string/replace.hpp>

namespace adapter {
// Class used to listen to protobuf subscriptions
template <class T, class U>
class SubscriberImpl : public ISubscriptionHandler<T> {

    U outgoing;
    Logger logger;
    DDS::DataWriter* writer;

public:
    explicit SubscriberImpl(Logger logger, DDS::DataWriter* writer)
        : logger(logger)
        , writer(writer)
    {
    }

    void process(const T& message) override
    {
        dds::convert_from_proto(message, outgoing);
        auto err = writer->write(&outgoing, DDS::HANDLE_NIL);
        if (err != DDS::RETCODE_OK) {
            logger.error("Error writing DDS message: {}", err);
        }
    }
};

// Class used to listen to DDS subscriptions
template <class T, class U>
class SubscriptionListener final : public DataReaderListener {
public:
    explicit SubscriptionListener(Logger logger, message_bus_t bus)
        : logger(logger)
        , bus(std::move(bus))
    {
    }

    virtual void on_data_available(DataReader* dr) override
    {
        const auto reader = U::DataReader::narrow(dr);

        typename U::Seq samples;
        DDS::SampleInfoSeq samples_info;

        auto err = reader->take(
            &samples,
            &samples_info,
            DDS::LENGTH_UNLIMITED,
            DDS_ANY_SAMPLE_STATE,
            DDS_ANY_VIEW_STATE,
            DDS_ANY_INSTANCE_STATE);

        if (err != DDS::RETCODE_OK) {
            logger.error("error reading type {} : {}", U::TypeSupport::get_type_name(), err);
            return;
        }

        // TODO - does this need to be exception safe?

        for (decltype(samples.size()) i = 0; i < samples.size(); i++) {
            if (samples_info[i]->valid_data) {
                T proto;
                dds::convert_to_proto(*samples[i], proto);
                bus->publish(proto);
            }
        }

        reader->return_loan(&samples, &samples_info);
    }

private:
    Logger logger;
    const message_bus_t bus;
};

template <class T, class... Args>
T* require(T* created, Args... args)
{
    if (!created) {
        throw Exception(args...);
    }
    return created;
};

template <class... Args>
void verify(DDS::ReturnCode_t code, Args... args)
{
    if (code) {
        throw Exception(args...);
    }
}

DDSPlugin::DDSPlugin(const YAML::Node& node, const Logger& logger, message_bus_t bus)
    : logger(logger)
{
    const auto domain_id = yaml::require(node, keys::domain_id).as<DDS::DomainId_t>();

    const auto profiles = yaml::require(node, keys::profiles);

    const auto participant = require(
        DDS::DomainParticipantFactory::get_instance()->create_participant(domain_id, DDS::PARTICIPANT_QOS_DEFAULT, nullptr, DDS::STATUS_MASK_NONE),
        "Unable to create domain participant: ", domain_id);

    // TODO - use some template specializations (protobuf to DDS type mapping) so that we don't have to manually list each profile
    this->configure<metermodule::MeterReadingProfile, twinoaks::metermodule::MeterReadingProfile>(profiles, participant, bus);

    this->configure<switchmodule::SwitchReadingProfile, twinoaks::switchmodule::SwitchReadingProfile>(profiles, participant, bus);
    this->configure<switchmodule::SwitchStatusProfile, twinoaks::switchmodule::SwitchStatusProfile>(profiles, participant, bus);
    //this->configure<switchmodule::SwitchControlProfile, twinoaks::switchmodule::SwitchControlProfile>(profiles, participant, bus);

    this->configure<essmodule::ESSReadingProfile, twinoaks::essmodule::ESSReadingProfile>(profiles, participant, bus);
    this->configure<essmodule::ESSStatusProfile, twinoaks::essmodule::ESSStatusProfile>(profiles, participant, bus);
    this->configure<essmodule::ESSControlProfile, twinoaks::essmodule::ESSControlProfile>(profiles, participant, bus);

    this->configure<solarmodule::SolarReadingProfile, twinoaks::solarmodule::SolarReadingProfile>(profiles, participant, bus);
    this->configure<solarmodule::SolarStatusProfile, twinoaks::solarmodule::SolarStatusProfile>(profiles, participant, bus);
    this->configure<solarmodule::SolarControlProfile, twinoaks::solarmodule::SolarControlProfile>(profiles, participant, bus);

    this->configure<loadmodule::LoadReadingProfile, twinoaks::loadmodule::LoadReadingProfile>(profiles, participant, bus);
    this->configure<loadmodule::LoadStatusProfile, twinoaks::loadmodule::LoadStatusProfile>(profiles, participant, bus);
    this->configure<loadmodule::LoadControlProfile, twinoaks::loadmodule::LoadControlProfile>(profiles, participant, bus);
}

void DDSPlugin::start()
{
    for (auto& action : this->start_actions) {
        action();
    }

    this->start_actions.clear();
}

template <class DDSType>
std::string DDSPlugin::get_topic_name()
{
    return boost::replace_all_copy<std::string>(
        DDSType::TypeSupport::get_fully_qualified_type_name(),
        "::",
        "_");
}

template <class ProtoType, class DDSType>
void DDSPlugin::configure(const YAML::Node& node, DDS::DomainParticipant* participant, message_bus_t bus)
{
    const auto mode = ProfileModeMeta::parse(yaml::require_string(node, ProtoType::descriptor()->name()));

    switch (mode) {
    case (ProfileMode::publish):
        this->publish_to_dds<ProtoType, DDSType>(participant, bus);
        break;
    case (ProfileMode::subscribe):
        this->subscribe_to_dds<ProtoType, DDSType>(participant, bus);
        break;
    default:
        break;
    }
}

template <class ProtoType, class DDSType>
void DDSPlugin::publish_to_dds(DDS::DomainParticipant* participant, message_bus_t bus)
{
    const auto publisher = require(
        participant->create_publisher(DDS::PUBLISHER_QOS_DEFAULT, nullptr, DDS::STATUS_MASK_NONE),
        "Unable to created DDS publisher for: ", DDSType::TypeSupport::get_type_name());

    verify(
        DDSType::TypeSupport::register_type(participant, DDSType::TypeSupport::get_fully_qualified_type_name()),
        "Error registering type: ", DDSType::TypeSupport::get_type_name());

    // create a topic
    const auto topic = require(
        participant->create_topic(
            get_topic_name<DDSType>().c_str(),                     // topic name
            DDSType::TypeSupport::get_fully_qualified_type_name(), // type name
            TOPIC_QOS_DEFAULT,
            nullptr, // no listener
            DDS::STATUS_MASK_NONE),
        "unable to create DDS topic for: ", DDSType::TypeSupport::get_type_name());

    const auto writer = require(
        publisher->create_datawriter(
            topic,
            DATAWRITER_QOS_DEFAULT,
            nullptr,
            DDS::STATUS_MASK_NONE),
        "unable to create DDS writer for: ", DDSType::TypeSupport::get_type_name());

    bus->subscribe(std::make_shared<SubscriberImpl<ProtoType, DDSType>>(this->logger, writer));
}

template <class ProtoType, class DDSType>
void DDSPlugin::subscribe_to_dds(DDS::DomainParticipant* participant, message_bus_t bus)
{
    const auto subscriber = require(
        participant->create_subscriber(DDS::SUBSCRIBER_QOS_DEFAULT, nullptr, DDS::STATUS_MASK_NONE),
        "unable to create DDS subscriber for: ", DDSType::TypeSupport::get_type_name());

    verify(
        DDSType::TypeSupport::register_type(participant, DDSType::TypeSupport::get_fully_qualified_type_name()),
        "Error registering type: ", DDSType::TypeSupport::get_type_name());

    // create a topic
    const auto topic = require(
        participant->create_topic(
            get_topic_name<DDSType>().c_str(),                     // topic name
            DDSType::TypeSupport::get_fully_qualified_type_name(), // type name
            TOPIC_QOS_DEFAULT,
            nullptr, // no listener
            DDS::STATUS_MASK_NONE),
        "unable to create DDS topic for: ", DDSType::TypeSupport::get_type_name());

    const auto listener = std::make_shared<SubscriptionListener<ProtoType, DDSType>>(
        this->logger,
        bus);

    // we must keep this alive on the heap since the DDS library doesn't understand smart pointers
    this->reader_listeners.push_back(listener);

    auto subscribe = [subscriber, topic, listener, logger = this->logger]() mutable {
        require(
            subscriber->create_datareader(
                (TopicDescription*)topic,
                DDS::DATAREADER_QOS_DEFAULT,
                listener.get(),
                DDS::DATA_AVAILABLE_STATUS),
            "unable to create DDS reader for: ", DDSType::TypeSupport::get_type_name());

        logger.info("Started DDS subscription for {}", DDSType::TypeSupport::get_type_name());
    };

    // don't start processing subscriptions until the adapter starts
    this->start_actions.push_back(subscribe);
}
}
