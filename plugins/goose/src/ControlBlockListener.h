#ifndef OPENFMB_ADAPTER_GOOSE_CONTROLBLOCKLISTENER_H
#define OPENFMB_ADAPTER_GOOSE_CONTROLBLOCKLISTENER_H

#include <vector>
#include "goose-cpp/control_block/IControlBlockListener.h"
#include "IPublishConfigBuilder.h"
#include "Mappings.h"

namespace adapter
{
namespace goose
{

class ControlBlockListener final : public goose_cpp::IControlBlockListener, public IPublishConfigBuilder
{
public:
    ControlBlockListener() = default;
    ~ControlBlockListener() = default;

    // IControlBlockListener
    void on_message(std::shared_ptr<goose_cpp::GooseEthernetFrame> message) final;
    void on_state_change(goose_cpp::ControlBlockState new_state) final;

    // IPublishConfigBuilder
    void add_start_action(const action_t& action) final;
    void add_int64_handler(const meas_handler_t<int64_t>& handler, const GoosePath& path) final;
    void add_float_handler(const meas_handler_t<float>& handler, const GoosePath& path) final;
    void add_end_action(const action_t& action) final;

private:
    std::vector<action_t> m_start_actions;
    std::vector<action_t> m_end_actions;
    Mappings m_mappings;
};

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_CONTROLBLOCKLISTENER_H
