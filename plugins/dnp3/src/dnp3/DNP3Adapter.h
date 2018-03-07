#ifndef OPENFMB_ADAPTER_DNP3ADAPTER_H
#define OPENFMB_ADAPTER_DNP3ADAPTER_H

#include "adapter-api/IAdapterFactory.h"

#include "SOEHandler.h"

#include <asiodnp3/DNP3Manager.h>

namespace adapter
{

    class DNP3Adapter final : public IAdapter
    {

        typedef std::shared_ptr<asiodnp3::IChannel> channel_t;
        typedef std::shared_ptr<asiodnp3::IMaster> master_t;

    public:

        DNP3Adapter() = delete;

        DNP3Adapter(const Logger& logger, const YAML::Node& node, IMessageBus& bus);

        virtual std::string name() const override
        {
            return "dnp3";
        }

        virtual void start() override;

    private:

        Logger logger;
        asiodnp3::DNP3Manager manager;

        void add_master(const YAML::Node& node, IMessageBus& bus);

        std::vector<master_t> masters;

        // --- helper methods for creating resources ---

        channel_t create_channel(const YAML::Node& node);

    };

}

#endif
