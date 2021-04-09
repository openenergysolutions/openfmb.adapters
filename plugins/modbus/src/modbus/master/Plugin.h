// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_MODBUS_PLUGIN_H
#define OPENFMB_ADAPTER_MODBUS_PLUGIN_H

#include <adapter-api/IPluginFactory.h>

#include <exe4cpp/asio/BasicExecutor.h>
#include <exe4cpp/asio/ThreadPool.h>

#include <thread>

#include "modbus/IModbusManager.h"
#include "modbus/client/IClientSession.h"

#include "CommandOptions.h"
#include "PollHandler.h"
#include "generated/LogLevel.h"

namespace adapter {
namespace modbus {
namespace master {

    class Plugin final : public api::IPlugin {

    public:
        Plugin() = delete;

        Plugin(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus);

        virtual ~Plugin();

        virtual std::string name() const override
        {
            return "modbus-master";
        }

        virtual void start() override;

    private:
        void configure_session(const YAML::Node& node, api::message_bus_t bus);

        std::shared_ptr<::modbus::IClientSession> get_session(const std::string& name, const YAML::Node& node, const CommandOptions& options);

        api::Logger logger;
        std::shared_ptr<exe4cpp::BasicExecutor> executor;
        std::unique_ptr<exe4cpp::ThreadPool> thread_pool;
        std::unique_ptr<::modbus::IModbusManager> manager;
        std::vector<std::function<void()>> start_actions;
    };

}
}
}

#endif
