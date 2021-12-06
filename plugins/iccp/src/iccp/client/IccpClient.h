// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

//
// Created by cory on 2/10/21.
//

#ifndef OPENFMB_ADAPTER_ICCP_CLIENT_ICCPCLIENT_H
#define OPENFMB_ADAPTER_ICCP_CLIENT_ICCPCLIENT_H

#include <string>
#include <memory>
#include <adapter-util/util/YAMLTemplate.h>
#include <adapter-util/util/YAMLUtil.h>
#include "PollHandler.h"

namespace adapter {
namespace iccp {
    namespace client {
        class IccpClient {
        public:
            IccpClient(const YAML::Node& node, const api::Logger& logger);
            virtual ~IccpClient() {};

            void add_poll_handler(std::shared_ptr<PollHandler> poll_handler) {
                poll_handlers.push_back(poll_handler);
            }

            void start();

        private:
            api::Logger logger;

            std::vector<std::shared_ptr<PollHandler>> poll_handlers;
        };
    }
}
}


#endif //OPENFMB_ADAPTER_ICCP_CLIENT_ICCPCLIENT_H
