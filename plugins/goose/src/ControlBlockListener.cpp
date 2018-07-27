#include "ControlBlockListener.h"

#include "GooseMessageVisitor.h"

namespace adapter {
namespace goose {

    ControlBlockListener::ControlBlockListener(std::string name, Logger& logger)
        : m_name{ name }
        , m_logger{ logger }
    {
    }

    void ControlBlockListener::on_message(std::shared_ptr<goose_cpp::GooseEthernetFrame> message)
    {
        for (auto& action : m_start_actions) {
            action();
        }

        GooseMessageVisitor visitor{ m_mappings };
        message->goose_pdu.allData->visit(visitor);

        for (auto& action : m_end_actions) {
            action();
        }
    }

    void ControlBlockListener::on_state_change(goose_cpp::ControlBlockState new_state)
    {
        m_logger.info("{}: Changed state to {}", m_name, goose_cpp::to_string(new_state));
    }

    void ControlBlockListener::add_start_action(const action_t& action)
    {
        m_start_actions.push_back(action);
    }

    void ControlBlockListener::add_bool_handler(const meas_handler_t<bool>& handler, const GoosePath& path)
    {
        m_mappings.bool_handlers.insert({ path, handler });
    }

    void ControlBlockListener::add_int32_handler(const meas_handler_t<int32_t>& handler, const GoosePath& path)
    {
        m_mappings.int32_handlers.insert({ path, handler });
    }

    void ControlBlockListener::add_int64_handler(const meas_handler_t<int64_t>& handler, const GoosePath& path)
    {
        m_mappings.int64_handlers.insert({ path, handler });
    }

    void ControlBlockListener::add_float_handler(const meas_handler_t<float>& handler, const GoosePath& path)
    {
        m_mappings.float_handlers.insert({ path, handler });
    }

    void ControlBlockListener::add_end_action(const action_t& action)
    {
        m_end_actions.push_back(action);
    }

} // namespace goose
} // namespace adapter
