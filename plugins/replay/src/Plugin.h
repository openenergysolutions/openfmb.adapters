// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_REPLAY_PLUGIN_H
#define OPENFMB_ADAPTER_REPLAY_PLUGIN_H

#include <yaml-cpp/node/node.h>

#include <adapter-api/IMessageBus.h>
#include <adapter-api/IPlugin.h>
#include <adapter-api/Logger.h>

#include "PublishFactory.h"

namespace adapter {
namespace replay {

    class Plugin final : public api::IPlugin {
        struct LineInfo {
            LineInfo() = default;

            publish_fun_t publish;
            std::chrono::steady_clock::duration duration;
        };

    public:
        Plugin(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus);

        ~Plugin() override;

        std::string name() const override
        {
            return "replay";
        }

        void start() override;

    private:
        void run();

        void replay_file();

        bool get_next_line(std::ifstream& file, LineInfo& next);

        bool sleep_for(const std::chrono::steady_clock::duration& duration);

        bool shutdown = false;

        std::unique_ptr<std::thread> thread;

        api::Logger logger;

        const std::string file_path;
        const api::publisher_t publisher;
        const PublishFactory factory;
    };
}
}

#endif
