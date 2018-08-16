#ifndef OPENFMB_ADAPTER_GOOSE_PUB_CONTROLBLOCKLISTENER_H
#define OPENFMB_ADAPTER_GOOSE_PUB_CONTROLBLOCKLISTENER_H

#include "pub/IPublishConfigBuilder.h"
#include "pub/Mappings.h"
#include "adapter-api/Logger.h"
#include "goose-cpp/control_block/IControlBlockListener.h"
#include <string>
#include <vector>

namespace adapter {
namespace goose {

    class ControlBlockListener final : public goose_cpp::IControlBlockListener, public IPublishConfigBuilder {
    public:
        ControlBlockListener(std::string name, Logger& logger);
        ~ControlBlockListener() = default;

        // IControlBlockListener
        void on_message(std::shared_ptr<goose_cpp::GooseEthernetFrame> message) final;
        void on_state_change(goose_cpp::ControlBlockState new_state) final;

        // IPublishConfigBuilder
        void add_start_action(const action_t& action) final;
        void add_bool_handler(const meas_handler_t<bool>& handler, const GoosePath& path) final;
        void add_int32_handler(const meas_handler_t<int32_t>& handler, const GoosePath& path) final;
        void add_int64_handler(const meas_handler_t<int64_t>& handler, const GoosePath& path) final;
        void add_float_handler(const meas_handler_t<float>& handler, const GoosePath& path) final;
        void add_end_action(const action_t& action) final;

    private:
        std::string m_name;
        Logger m_logger;

        Mappings m_mappings;
        std::vector<action_t> m_start_actions;
        std::vector<action_t> m_end_actions;
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_PUB_CONTROLBLOCKLISTENER_H
