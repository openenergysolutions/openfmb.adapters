// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

//
// Created by cory on 2/10/21.
//

#include "IccpClient.h"
#include <iostream>

namespace adapter {
namespace iccp {
    namespace client {

        IccpClient::IccpClient(const YAML::Node& node, const api::Logger& logger) :
            logger(logger)
        {
            this->logger.info("ICCP client is not implemened");
        }

        void IccpClient::start() {

        }
    }
}
}
