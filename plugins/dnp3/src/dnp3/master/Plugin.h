// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_DNP3_MASTER_PLUGIN_H
#define OPENFMB_ADAPTER_DNP3_MASTER_PLUGIN_H

#include "dnp3/PluginBase.h"

#include "SOEHandler.h"

#include <exe4cpp/asio/BasicExecutor.h>
#include <exe4cpp/asio/ThreadPool.h>

#include <opendnp3/DNP3Manager.h>

namespace adapter {
namespace dnp3 {
    namespace master {

        class Plugin final : public PluginBase {

            using channel_t = std::shared_ptr<opendnp3::IChannel>;
            using master_t = std::shared_ptr<opendnp3::IMaster>;

        public:
            Plugin() = delete;

            Plugin(const api::Logger& logger, const YAML::Node& node, api::message_bus_t bus);

            virtual ~Plugin();

            virtual std::string name() const override
            {
                return "dnp3-master";
            }

            virtual void start() override;

        private:
            void add_master(const YAML::Node& node, api::message_bus_t bus);

            std::vector<master_t> masters;

            // --- helper methods for creating resources ---

            channel_t create_channel(const YAML::Node& node);


            std::shared_ptr<exe4cpp::BasicExecutor> executor;
            std::unique_ptr<exe4cpp::ThreadPool> thread_pool;
        };
    }
}
}

#endif
