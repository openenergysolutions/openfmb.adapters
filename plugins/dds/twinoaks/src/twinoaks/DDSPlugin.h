#ifndef OPENFMB_ADAPTER_DDSPLUGIN_H
#define OPENFMB_ADAPTER_DDSPLUGIN_H

#include <dds/dds.h>
#include <dds/dds.hh>

#include "adapter-api/util/Exception.h"
#include "adapter-api/IPluginFactory.h"

#include <vector>

namespace adapter
{

    class DDSPlugin : public IPlugin
    {

    public:

        DDSPlugin(const YAML::Node& node, const Logger& logger, message_bus_t bus);

        virtual void start() override;

        virtual std::string name() const override
        {
            return "dds-twinoaks";
        }

    private:

        Logger logger;

        template <class DDSType>
        static std::string get_topic_name();

        template <class ProtoType, class DDSType>
        void configure(const YAML::Node& node, DDS::DomainParticipant* participant, message_bus_t bus);

        template <class ProtoType, class DDSType>
        void subscribe_to_dds(DDS::DomainParticipant* participant, message_bus_t bus);

        template <class ProtoType, class DDSType>
        void publish_to_dds(DDS::DomainParticipant* participant, message_bus_t bus);

        // collection of active DDS listeners
        std::vector<std::shared_ptr<DDS::DataReaderListener>> reader_listeners;
        std::vector<std::shared_ptr<DDS::DataWriterListener>> writer_listeners;

        std::vector<std::function<void ()>> start_actions;

    };

}

#endif //OPENFMB_ADAPTER_DDSPLUGIN_H
