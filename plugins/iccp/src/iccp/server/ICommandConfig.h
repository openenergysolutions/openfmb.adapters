// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

//
// Created by cory on 2/10/21.
//

#ifndef OPENFMB_ADAPTER_ICCP_SERVER_ICOMMANDCONFIG_H
#define OPENFMB_ADAPTER_ICCP_SERVER_ICOMMANDCONFIG_H

#include <adapter-api/IPublisher.h>
#include <adapter-api/Logger.h>

namespace adapter {
namespace iccp {
    namespace server {

        using control_command_handler_t = std::function<void(api::Logger& logger)>;
        //using control_discrete_handler = std::function<void(api::Logger& logger)>;

        class ICommandConfig {

        public:
            virtual ~ICommandConfig() = default;

            virtual void add_handler(uint16_t index, const control_command_handler_t& handler) = 0;

            //virtual void add_handler(uint16_t index, const control_discrete_handler& handler) = 0;
        };
    }
}
}

#endif //OPENFMB_ADAPTER_ICCP_SERVER_ICOMMANDCONFIG_H
