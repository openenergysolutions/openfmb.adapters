#ifndef OPENFMB_ADAPTER_DNP3MASTERADAPTER_H
#define OPENFMB_ADAPTER_DNP3MASTERADAPTER_H

#include "adapter-api/IAdapter.h"

#include "SOEHandler.h"

#include <memory>

#include <asiodnp3/DNP3Manager.h>

namespace openfmb
{

    class DNP3MasterAdapter final : public IAdapter
    {

        typedef std::shared_ptr<asiodnp3::IChannel> channel_t;
        typedef std::shared_ptr<asiodnp3::IMaster> master_t;
        typedef std::shared_ptr<SOEHandler> data_handler_t;

    public:

        DNP3MasterAdapter() = delete;

        DNP3MasterAdapter(const Logger& logger, const YAML::Node& node, IProtoSubscribers& subscribers);

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
