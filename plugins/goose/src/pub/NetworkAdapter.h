// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_GOOSE_PUB_NETWORKADAPTER_H
#define OPENFMB_ADAPTER_GOOSE_PUB_NETWORKADAPTER_H

#include "goose-cpp/INetworkListener.h"
#include "goose-cpp/control_block/ISpecificControlBlockSink.h"
#include <memory>

struct NetworkAdapter {
    std::shared_ptr<goose_cpp::INetworkListener> network_interface;
    std::shared_ptr<goose_cpp::ISpecificControlBlockSink> sink;
};

#endif //OPENFMB_ADAPTER_GOOSE_PUB_NETWORKADAPTER_H
