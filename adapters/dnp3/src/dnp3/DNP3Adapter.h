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
        typedef std::shared_ptr<SOEHandler> data_handler_t;

    public:

        DNP3Adapter() = delete;

        DNP3Adapter(const Logger& logger, const YAML::Node& node, IProtoSubscribers& subscribers);

        virtual void start(const std::shared_ptr<IProtoPublishers>& publishers) override;

    private:

        asiodnp3::DNP3Manager manager;

        void add_master(const YAML::Node& node);

        struct MasterRecord
        {
            data_handler_t data_handler;
            master_t master;
        };

        std::vector<MasterRecord> masters;

        // --- helper methods for creating resources ---

        channel_t create_channel(const YAML::Node& node);

    };

}

#endif
