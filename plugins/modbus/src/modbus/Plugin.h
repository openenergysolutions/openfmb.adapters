#ifndef OPENFMB_ADAPTER_MODBUS_PLUGIN_H
#define OPENFMB_ADAPTER_MODBUS_PLUGIN_H

#include "adapter-api/IPluginFactory.h"

#include "modbus/IModbusManager.h"
#include "modbus/session/ISession.h"

#include "PollHandler.h"

namespace adapter {
namespace modbus {
    class Plugin final : public IPlugin {

    public:
        Plugin() = delete;

        Plugin(const YAML::Node& node, const Logger& logger, message_bus_t bus);

        virtual std::string name() const override
        {
            return "modbus";
        }

        virtual void start() override;

    private:
        void configure_session(const YAML::Node& node, message_bus_t bus);

        std::shared_ptr<::modbus::ISession> get_session(const std::string& name, const YAML::Node& node);

        Logger logger;
        std::unique_ptr<::modbus::IModbusManager> manager;
        std::vector<std::function<void()>> start_actions;
    };
}
}

#endif
