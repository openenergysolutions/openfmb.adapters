// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_ICCP_CLIENT_PLUGIN_H
#define OPENFMB_ADAPTER_ICCP_CLIENT_PLUGIN_H

#include "iccp/PluginBase.h"

#include <exe4cpp/asio/BasicExecutor.h>
#include <exe4cpp/asio/ThreadPool.h>

#include "IccpClient.h"
#include "ITransaction.h"

namespace adapter {
    namespace iccp {
        namespace client {

            class Plugin final : public PluginBase {               

            public:
                Plugin() = delete;

                Plugin(const api::Logger& logger, const YAML::Node& node, api::message_bus_t bus);

                virtual ~Plugin();

                virtual std::string name() const override
                {
                    return "iccp-client";
                }

                virtual void start() override;

            private:
                void config_client(const YAML::Node& node, api::message_bus_t bus);

                std::vector<client_t> clients;

                std::shared_ptr<exe4cpp::BasicExecutor> executor;
                std::unique_ptr<exe4cpp::ThreadPool> thread_pool;
                std::vector<std::function<void()>> start_actions;
            };
        }
    }
}

#endif
