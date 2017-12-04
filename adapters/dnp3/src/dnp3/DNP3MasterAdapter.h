
#ifndef OPENFMB_ADAPTER_DNP3MASTERADAPTER_H
#define OPENFMB_ADAPTER_DNP3MASTERADAPTER_H

#include "adapter-api/IAdapter.h"

#include "PointMap.h"

#include <memory>

#include <asiodnp3/DNP3Manager.h>

namespace openfmb {

    class DNP3MasterAdapter final : public IAdapter
    {
        typedef std::shared_ptr<asiodnp3::DNP3Manager> manager_t;
        typedef std::shared_ptr<asiodnp3::IChannel> channel_t;
        typedef std::shared_ptr<asiodnp3::IMaster> master_t;
        typedef std::shared_ptr<PointMap> point_map_t;

    public:

        DNP3MasterAdapter() = delete;

        DNP3MasterAdapter(const manager_t& manager, const YAML::Node& node, IProtoSubscribers& subscribers);

        virtual void start(IProtoPublishers& publishers) override;

    private:

        const point_map_t point_map;
        const channel_t channel;
        const master_t master;

        static point_map_t create_point_map(const YAML::Node& node);
        static channel_t create_channel(const manager_t& manager, const YAML::Node& node);
        static master_t create_master(const channel_t& channel, const YAML::Node& node);

        // channel and master instances


    };

}

#endif
