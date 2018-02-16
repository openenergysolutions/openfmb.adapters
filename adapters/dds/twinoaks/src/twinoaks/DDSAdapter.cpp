
#include "DDSAdapter.h"

#include "adapter-api/util/YAMLUtil.h"

#include "OpenFMB-3.0.0TypeSupport.hh"

#include "generated/ConvertFromProto.h"
#include "generated/ConvertToProto.h"

#include "ConfigKeys.h"

namespace adapter
{
    // Class used to listen to protobuf subscriptions
    template <class T, class U>
    class SubscriberImpl : public ISubscriber<T>
    {

        U outgoing;
        DDS::DataWriter* writer;

    public:

        explicit SubscriberImpl(DDS::DataWriter* writer) : writer(writer)
        {}

        virtual void receive(const T& message) override
        {
            dds::convert_from_proto(message, outgoing);
            writer->write(&outgoing, DDS::HANDLE_NIL);
        }

    };

    // Class used to listen to DDS subscriptions
    template <class T, class U>
    class SubscriptionListener final : public DataReaderListener
    {
    public:
        explicit SubscriptionListener(publisher_t<T> publisher) : publisher(publisher) {}

        virtual void on_data_available(DataReader* dr ) override
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
                           DDS_ANY_INSTANCE_STATE
                       );

            if(err != DDS::RETCODE_OK)
            {
                // TODO - logging
                return;
            }

            // TODO - does this need to be exception safe?

            for (decltype(samples.size()) i = 0; i < samples.size(); i++)
            {
                if ( samples_info[i]->valid_data)
                {
                    T proto;
                    dds::convert_to_proto(*samples[i], proto);
                    publisher->publish(proto);
                }
            }

            reader->return_loan(&samples, &samples_info);
        }

    private:

        const publisher_t<T> publisher;
    };

    template <class T, class... Args>
    T* require(T* created, Args... args)
    {
        if(!created)
        {
            throw Exception(args...);
        }
        return created;
    };

    template <class... Args>
    void verify(DDS::ReturnCode_t code, Args... args)
    {
        if(code)
        {
            throw Exception(args...);
        }
    }

    enum class ProfileMode
    {
        publish,
        subscribe,
        none
    };

    ProfileMode parse_profile_mode(const std::string& mode)
    {
        if(mode == keys::publish)
        {
            return ProfileMode::publish;
        }
        else if(mode == keys::subscribe)
        {
            return ProfileMode::subscribe;
        }
        else if(mode == keys::none)
        {
            return ProfileMode::none;
        }
        else
        {
            throw Exception("Unknown profile mode: ", mode);
        }

    }

    DDSAdapter::DDSAdapter(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
    {
        const auto domain_id = yaml::require(node, keys::domain_id).as<DDS::DomainId_t>();

        const auto profiles = yaml::require(node, keys::profiles);

        const auto participant = require(
                                     DDS::DomainParticipantFactory::get_instance()->create_participant(domain_id, DDS::PARTICIPANT_QOS_DEFAULT, nullptr, DDS::STATUS_MASK_NONE),
                                     "Unable to create domain participant: ", domain_id
                                 );

        // configure the various profiles
        this->configure<resourcemodule::ResourceReadingProfile, openfmb::resourcemodule::ResourceReadingProfile>(profiles, participant, bus);

    }

    void DDSAdapter::start()
    {
        for(auto& action : this->start_actions)
        {
            action();
        }

        this->start_actions.clear();
    }

    template <class ProtoType, class DDSType>
    void DDSAdapter::configure(const YAML::Node& node, DDS::DomainParticipant* participant, IMessageBus& bus)
    {
        const auto mode = parse_profile_mode(yaml::require_string(node, ProtoType::descriptor()->name()));
        if(mode == ProfileMode::none) return;

        const char* type_name = DDSType::TypeSupport::get_type_name();

        verify(
            DDSType::TypeSupport::register_type(participant, type_name),
            "Error registering type: ", type_name
        );

        // create a topic
        const auto topic = require(
                               participant->create_topic(
                                   type_name,             // topic name
                                   type_name,             // type name
                                   TOPIC_QOS_DEFAULT,
                                   nullptr,               // no listener
                                   DDS::STATUS_MASK_NONE
                               ),
                               "unable to create DDS topic for: ", type_name
                           );

        if(mode == ProfileMode::publish)
        {
            this->publisher_to_dds<ProtoType, DDSType>(participant, topic, bus);
        }
        else
        {
            this->subscribe_to_dds<ProtoType, DDSType>(participant, topic, bus);
        }
    }

    template <class ProtoType, class DDSType>
    void DDSAdapter::publisher_to_dds(DDS::DomainParticipant* participant, DDS::Topic* topic, IMessageBus& bus)
    {
        const auto publisher = require(
                                   participant->create_publisher(DDS::PUBLISHER_QOS_DEFAULT, nullptr, DDS::STATUS_MASK_NONE),
                                   "Unable to created DDS publisher for: ", DDSType::TypeSupport::get_type_name()
                               );

        const auto writer = require(
                                publisher->create_datawriter(
                                    topic,
                                    DATAWRITER_QOS_DEFAULT,
                                    nullptr,              // no listener
                                    DDS::STATUS_MASK_NONE
                                ),
                                "unable to create DDS writer for: ", DDSType::TypeSupport::get_type_name()
                            );

        bus.subscribe(std::make_shared<SubscriberImpl<ProtoType, DDSType>>(writer));
    }

    template <class ProtoType, class DDSType>
    void DDSAdapter::subscribe_to_dds(DDS::DomainParticipant* participant, DDS::Topic* topic, IMessageBus& bus)
    {
        const auto subscriber = require(
                                    participant->create_subscriber(DDS::SUBSCRIBER_QOS_DEFAULT, nullptr, DDS::STATUS_MASK_NONE),
                                    "unable to create DDS subscriber for: ", DDSType::TypeSupport::get_type_name()
                                );

        auto listener = std::make_shared<SubscriptionListener<ProtoType, DDSType>>(bus.get_publisher<ProtoType>());

        // we must keep this alive on the heap since the DDS library doesn't understand smart pointers
        this->listeners.push_back(std::move(listener));

        auto subscribe = [subscriber, topic, listener]()
        {
            require(
                subscriber->create_datareader(
                    (TopicDescription*) topic,
                    DDS::DATAREADER_QOS_DEFAULT,
                    listener.get(),
                    DDS::DATA_AVAILABLE_STATUS
                ),
                "unable to create DDS reader for: ", DDSType::TypeSupport::get_type_name()
            );
        };

        // don't start processing subscriptions until the adapter starts
        this->start_actions.push_back(subscribe);
    }

}


