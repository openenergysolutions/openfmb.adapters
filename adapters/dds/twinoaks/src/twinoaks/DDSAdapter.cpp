
#include "DDSAdapter.h"

#include "adapter-api/util/YAMLUtil.h"

#include "OpenFMB-3.0.0TypeSupport.hh"

#include "Conversions.h"
#include "ConfigKeys.h"

namespace adapter
{
    template <class T, class U>
    class Subscriber : public ISubscriber<T>
    {

        U outgoing;
        DDS::DataWriter* writer;

    public:

        Subscriber(DDS::DataWriter* writer) : writer(writer)
        {}

        virtual void receive(const T& message) override
        {
            convert(message, outgoing);
            writer->write(&outgoing, DDS::HANDLE_NIL);
        }

    };

    DDSAdapter::DDSAdapter(const YAML::Node& node, IProtoSubscribers& subscribers)
    {
        const auto domain_id = yaml::require(node, keys::domain_id).as<DDS::DomainId_t>();

        const auto publishers = yaml::require(node, keys::publish);

        const auto participant = create_participant(domain_id);

        // bind the specified subscribers
        if(yaml::require(publishers, resourcemodule::ResourceReadingProfile::descriptor()->name()).as<bool>())
        {
            subscribers.subscribe(
                create_subscriber<resourcemodule::ResourceReadingProfile, openfmb::resourcemodule::ResourceReadingProfile>(participant)
            );
        }

    }

    DDS::DomainParticipant* DDSAdapter::create_participant(DDS::DomainId_t domain_id)
    {
        auto factory = DDS::DomainParticipantFactory::get_instance();

        return require(
                   factory->create_participant(domain_id, DDS::PARTICIPANT_QOS_DEFAULT, nullptr, DDS::STATUS_MASK_NONE),
                   "Unable to create domain participant: ", domain_id
               );
    }

    template <class ProtoType, class DDSType>
    std::shared_ptr<ISubscriber<ProtoType>> DDSAdapter::create_subscriber(DDS::DomainParticipant* participant)
    {
        const char* type_name = DDSType::TypeSupport::get_type_name();

        auto publisher = require(
                             participant->create_publisher(DDS::PUBLISHER_QOS_DEFAULT, nullptr, DDS::STATUS_MASK_NONE),
                             "Unable to created DDS publisher for: ", type_name
                         );


        verify(
            DDSType::TypeSupport::register_type(participant, type_name),
            "Error registering type: ", type_name
        );

        auto topic = require(
                         participant->create_topic(
                             type_name,             // topic name
                             type_name,             // type name
                             TOPIC_QOS_DEFAULT,
                             nullptr,               // no listener
                             DDS::STATUS_MASK_NONE
                         ),
                         "unable to create DDS topic for: ", type_name
                     );

        const auto writer = require(
                                publisher->create_datawriter(
                                    topic,
                                    DATAWRITER_QOS_DEFAULT,
                                    nullptr,              // no listener
                                    DDS::STATUS_MASK_NONE
                                ),
                                "unable to create DDS writer for: ", type_name
                            );

        return std::make_shared<Subscriber<ProtoType, DDSType>>(writer);
    }


    template <class T, class... Args>
    T* DDSAdapter::require(T* created, Args... args)
    {
        if(!created)
        {
            throw Exception(args...);
        }
        return created;
    };

    template <class... Args>
    void DDSAdapter::verify(DDS::ReturnCode_t code, Args... args)
    {
        if(code)
        {
            throw Exception(args...);
        }
    }
}


