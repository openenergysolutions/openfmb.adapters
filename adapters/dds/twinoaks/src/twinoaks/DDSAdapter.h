#ifndef OPENFMB_ADAPTER_DDSADAPTER_H
#define OPENFMB_ADAPTER_DDSADAPTER_H

#include <dds/dds.h>
#include <dds/dds.hh>

#include "adapter-api/util/Exception.h"
#include "adapter-api/IAdapter.h"

namespace openfmb
{

    class DDSAdapter : public IAdapter
    {

    public:

        DDSAdapter(const YAML::Node& node, IProtoSubscribers& subscribers);

        // doesn't publish anything yet to the bus
        virtual void start(const std::shared_ptr<IProtoPublishers>& publisher) override {}

    private:

        static DDS::DomainParticipant* create_participant(DDS::DomainId_t domain_id);

        template <class ProtoType, class DDSType>
        static std::shared_ptr<ISubscriber<ProtoType>> create_subscriber(DDS::DomainParticipant* participant);

        template <class T, class... Args>
        static T* require(T* created, Args... args);

        template <class... Args>
        static void verify(DDS::ReturnCode_t code, Args... args);

    };

}

#endif //OPENFMB_ADAPTER_DDSADAPTER_H
