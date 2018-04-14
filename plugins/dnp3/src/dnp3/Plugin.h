#ifndef OPENFMB_ADAPTER_DNP3_PLUGIN_H
#define OPENFMB_ADAPTER_DNP3_PLUGIN_H

#include <adapter-api/IPluginFactory.h>

#include "SOEHandler.h"

#include <asiodnp3/DNP3Manager.h>
#include <adapter-api/IProfileHandler.h>

namespace adapter
{
    namespace dnp3
    {

        class Plugin final : public IPlugin
        {

            typedef std::shared_ptr<asiodnp3::IChannel> channel_t;
            typedef std::shared_ptr<asiodnp3::IMaster> master_t;

        public:

            Plugin() = delete;

            Plugin(const Logger& logger, const YAML::Node& node, IMessageBus& bus);

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
}

#endif
