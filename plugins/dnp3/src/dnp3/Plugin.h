#ifndef OPENFMB_ADAPTER_DNP3_PLUGIN_H
#define OPENFMB_ADAPTER_DNP3_PLUGIN_H

#include <adapter-api/IPluginFactory.h>

#include "SOEHandler.h"

#include <asiodnp3/DNP3Manager.h>

namespace adapter {
namespace dnp3 {

    class Plugin final : public api::IPlugin {

        typedef std::shared_ptr<asiodnp3::IChannel> channel_t;
        typedef std::shared_ptr<asiodnp3::IMaster> master_t;

    public:
        Plugin() = delete;

        Plugin(const api::Logger& logger, const YAML::Node& node, api::message_bus_t bus);

        virtual std::string name() const override
        {
            return "dnp3";
        }

        virtual void start() override;

    private:
        api::Logger logger;
        asiodnp3::DNP3Manager manager;

        void add_master(const YAML::Node& node, api::message_bus_t bus);

        std::vector<master_t> masters;

        // --- helper methods for creating resources ---

        channel_t create_channel(const YAML::Node& node);
    };
}
}

#endif
