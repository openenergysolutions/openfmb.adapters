#ifndef OPENFMB_ADAPTER_GOOSE_PUB_CONTROLBLOCKLISTENER_H
#define OPENFMB_ADAPTER_GOOSE_PUB_CONTROLBLOCKLISTENER_H

#include "adapter-api/Logger.h"
#include "goose-cpp/control_block/IControlBlockListener.h"
#include "BuildingFunction.h"
#include <string>
#include <vector>

namespace adapter {
namespace goose {

    class ControlBlockListener final : public goose_cpp::IControlBlockListener {
    public:
        ControlBlockListener(std::string name, const meas_fn_t<goose_cpp::Dataset>& builder, Logger& logger);
        ~ControlBlockListener() = default;

        // IControlBlockListener
        void on_message(std::shared_ptr<goose_cpp::GooseEthernetFrame> message) final;
        void on_state_change(goose_cpp::ControlBlockState new_state) final;

    private:
        std::string m_name;
        meas_fn_t<goose_cpp::Dataset> m_builder;
        Logger m_logger;
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_PUB_CONTROLBLOCKLISTENER_H
