#ifndef OPENFMB_ADAPTER_MODBUS_PLUGIN_H
#define OPENFMB_ADAPTER_MODBUS_PLUGIN_H

#include <adapter-api/IPluginFactory.h>

#include "modbus/IModbusManager.h"
#include "modbus/server/IServerChannel.h"

#include <memory>
#include <vector>

namespace adapter {
namespace modbus {
namespace outstation {

    class Plugin final : public api::IPlugin {

    public:
        Plugin() = delete;

        Plugin(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus);

        ~Plugin();

        std::string name() const override
        {
            return "modbus-outstation";
        }

        void start() override;

    private:
        void add_outstation(const YAML::Node& node, api::message_bus_t bus);
        std::shared_ptr<::modbus::IServerChannel> create_channel(const YAML::Node& node);

        api::Logger logger;
        std::unique_ptr<::modbus::IModbusManager> manager;
        std::vector<std::shared_ptr<::modbus::IServerChannel>> channels;
    };

}
}
}

#endif
