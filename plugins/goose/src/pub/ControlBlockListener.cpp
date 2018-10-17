#include "pub/ControlBlockListener.h"

#include "adapter-api/util/Exception.h"
#include "pub/GooseMessageVisitor.h"

namespace adapter {
namespace goose {

    ControlBlockListener::ControlBlockListener(std::string name, const meas_fn_t<goose_cpp::Dataset>& builder, Logger& logger)
        : m_name{ name }
        , m_builder{ builder }
        , m_logger{ logger }
    {
    }

    void ControlBlockListener::on_message(std::shared_ptr<goose_cpp::GooseEthernetFrame> message, bool retransmission)
    {
        if (!retransmission) {
            try {
                m_builder(*message->goose_pdu.allData);
            } catch (Exception& e) {
                m_logger.warn(e.what());
            }
        }
    }

    void ControlBlockListener::on_state_change(goose_cpp::ControlBlockState new_state)
    {
        m_logger.info("{}: Changed state to {}", m_name, goose_cpp::to_string(new_state));
    }

} // namespace goose
} // namespace adapter
