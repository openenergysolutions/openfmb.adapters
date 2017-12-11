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
        typedef std::shared_ptr<asiodnp3::DNP3Manager> manager_t;
        typedef std::shared_ptr<asiodnp3::IChannel> channel_t;
        typedef std::shared_ptr<asiodnp3::IMaster> master_t;
        typedef std::shared_ptr<SOEHandler> data_handler_t;


    public:

        DNP3MasterAdapter() = delete;

        DNP3MasterAdapter(const manager_t& manager, const YAML::Node& node, IProtoSubscribers& subscribers);

        virtual void start(const std::shared_ptr<IProtoPublishers>& publishers) override;

    private:

        const data_handler_t data_handler;
        const channel_t channel;
        const master_t master;

        // --- helper methods for creating resources ---

        static channel_t create_channel(const manager_t& manager, const YAML::Node& node);
        static master_t create_master(const channel_t& channel, const data_handler_t& data_handler, const YAML::Node& node);

    };

}

#endif
