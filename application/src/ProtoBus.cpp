
#include "ProtoBus.h"

namespace adapter
{
    template <class T>
    class PublisherImpl final : public IPublisher<T>
    {
    public:

        PublisherImpl(std::shared_ptr<SubscriberRegistry<T>> registry) : registry(registry)
        {}

        virtual void publish(const T& message) override
        {
            registry->publish(message);
        }

    private:

        const std::shared_ptr<SubscriberRegistry<T>> registry;
    };

    ProtoBus::ProtoBus() :
        rrp_registry(std::make_shared<SubscriberRegistry<resourcemodule::ResourceReadingProfile>>())
    {}

    void ProtoBus::finalize()
    {
        this->rrp_registry->finalize();
    }

    // ---- implement IProtoPublishers ----

    Publisher<resourcemodule::ResourceReadingProfile> ProtoBus::get_resource_reading_publisher()
    {
        return Publisher<resourcemodule::ResourceReadingProfile>(
                   std::make_shared<PublisherImpl<resourcemodule::ResourceReadingProfile>>(this->rrp_registry)
               );
    }

    // ---- implement IProtoSubscribers ----

    void ProtoBus::subscribe(Subscriber<resourcemodule::ResourceReadingProfile> subscriber)
    {
        this->rrp_registry->add(subscriber);
    }

}


