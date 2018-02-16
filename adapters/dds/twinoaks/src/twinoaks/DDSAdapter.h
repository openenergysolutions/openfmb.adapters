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

        virtual void start() override;

        virtual std::string name() const override
        {
            return "dds-twinoaks";
        }

    private:

        Logger logger;

        template <class ProtoType, class DDSType>
        void configure(const YAML::Node& node, DDS::DomainParticipant* participant, IMessageBus& bus);

        template <class ProtoType, class DDSType>
        void subscribe_to_dds(DDS::DomainParticipant* participant, IMessageBus& bus);

        template <class ProtoType, class DDSType>
        void publish_to_dds(DDS::DomainParticipant* participant, IMessageBus& bus);

        // collection of active DDS listeners
        std::vector<std::shared_ptr<DDS::DataReaderListener>> reader_listeners;
        std::vector<std::shared_ptr<DDS::DataWriterListener>> writer_listeners;

        std::vector<std::function<void ()>> start_actions;

    };

}

#endif //OPENFMB_ADAPTER_DDSADAPTER_H
