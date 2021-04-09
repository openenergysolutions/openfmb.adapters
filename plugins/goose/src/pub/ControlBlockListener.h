// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_GOOSE_PUB_CONTROLBLOCKLISTENER_H
#define OPENFMB_ADAPTER_GOOSE_PUB_CONTROLBLOCKLISTENER_H

#include "BuildingFunction.h"
#include "goose-cpp/control_block/IControlBlockListener.h"
#include <adapter-api/Logger.h>
#include <string>
#include <vector>

namespace adapter {
namespace goose {

    class ControlBlockListener final : public goose_cpp::IControlBlockListener {
    public:
        ControlBlockListener(std::string name, const meas_fn_t<goose_cpp::Dataset>& builder, api::Logger& logger);
        ~ControlBlockListener() override = default;

        // IControlBlockListener
        void on_message(std::shared_ptr<goose_cpp::GooseEthernetFrame> message, bool retransmission) final;
        void on_state_change(goose_cpp::ControlBlockState new_state) final;

    private:
        std::string m_name;
        meas_fn_t<goose_cpp::Dataset> m_builder;
        api::Logger m_logger;
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_PUB_CONTROLBLOCKLISTENER_H
