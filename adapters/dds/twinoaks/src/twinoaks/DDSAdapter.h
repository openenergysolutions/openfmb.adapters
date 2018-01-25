#ifndef OPENFMB_ADAPTER_DDSADAPTER_H
#define OPENFMB_ADAPTER_DDSADAPTER_H

#include <dds/dds.h>
#include <dds/dds.hh>

#include "adapter-api/util/Exception.h"
#include "adapter-api/IAdapterFactory.h"

namespace adapter
{

    class DDSAdapter : public IAdapter
    {

    public:

        DDSAdapter(const YAML::Node& node, IMessageBus& bus);

        virtual void start() override {}

    private:

        static DDS::DomainParticipant* create_participant(DDS::DomainId_t domain_id);

        template <class ProtoType, class DDSType>
        static subscriber_t<ProtoType> create_subscriber(DDS::DomainParticipant* participant);

        template <class T, class... Args>
        static T* require(T* created, Args... args);

        template <class... Args>
        static void verify(DDS::ReturnCode_t code, Args... args);

    };

}

#endif //OPENFMB_ADAPTER_DDSADAPTER_H
