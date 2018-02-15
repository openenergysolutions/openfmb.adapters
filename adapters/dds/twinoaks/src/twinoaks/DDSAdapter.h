#ifndef OPENFMB_ADAPTER_DDSADAPTER_H
#define OPENFMB_ADAPTER_DDSADAPTER_H

#include <dds/dds.h>
#include <dds/dds.hh>

#include "adapter-api/util/Exception.h"
#include "adapter-api/IAdapterFactory.h"

#include <vector>

namespace adapter
{

    class DDSAdapter : public IAdapter
    {

    public:

        DDSAdapter(const YAML::Node& node, const Logger& logger, IMessageBus& bus);

        virtual void start() override {}

    private:

        static DDS::DomainParticipant* create_participant(DDS::DomainId_t domain_id);

        template <class T, class... Args>
        static T* require(T* created, Args... args);

        template <class... Args>
        static void verify(DDS::ReturnCode_t code, Args... args);

        template <class ProtoType, class DDSType>
        void configure(const YAML::Node& node, DDS::DomainParticipant* participant, IMessageBus& bus);

        // collection of active DDS listeners
        std::vector<std::unique_ptr<DDS::DataReaderListener>> listeners;

    };

}

#endif //OPENFMB_ADAPTER_DDSADAPTER_H
