#include "pub/GooseMessageVisitor.h"

namespace adapter {
namespace goose {

    GooseMessageVisitor::GooseMessageVisitor(const Mappings& mappings)
        : m_mappings{ mappings }
    {
    }

    void GooseMessageVisitor::handle_array(const goose_cpp::Dataset& item)
    {
        m_path.push();

        item.visit(*this);
    }

    void GooseMessageVisitor::handle_structure(const goose_cpp::Dataset& item)
    {
        m_path.push();

        item.visit(*this);
    }

    void GooseMessageVisitor::handle_boolean(bool item)
    {
        auto it = m_mappings.bool_handlers.find(m_path);
        if (it != m_mappings.bool_handlers.end()) {
            it->second(item);
        }

        m_path.inc();
    }

    void GooseMessageVisitor::handle_bit_string(const goose_cpp::BitString& item)
    {
        m_path.inc();
    }

    void GooseMessageVisitor::handle_integer(int64_t item)
    {
        handle_int(item);

        m_path.inc();
    }

    void GooseMessageVisitor::handle_unsigned_integer(uint64_t item)
    {
        handle_int(item);

        m_path.inc();
    }

    void GooseMessageVisitor::handle_floatingpoint(double item)
    {
        auto it = m_mappings.float_handlers.find(m_path);
        if (it != m_mappings.float_handlers.end()) {
            it->second(static_cast<float>(item));
        }

        m_path.inc();
    }

    void GooseMessageVisitor::handle_octet_string(const std::vector<uint8_t>& item)
    {
        m_path.inc();
    }

    void GooseMessageVisitor::handle_visible_string(const std::string& item)
    {
        m_path.inc();
    }

    void GooseMessageVisitor::handle_generalizedtime(std::chrono::system_clock::time_point item)
    {
        m_path.inc();
    }

    void GooseMessageVisitor::handle_binarytime(std::chrono::system_clock::time_point item)
    {
        m_path.inc();
    }

    void GooseMessageVisitor::handle_bcd(uint64_t item)
    {
        handle_int(item);

        m_path.inc();
    }

    void GooseMessageVisitor::handle_boolean_array(const goose_cpp::BitString& item)
    {
        m_path.inc();
    }

    void GooseMessageVisitor::handle_mms_string(const std::string& item)
    {
        m_path.inc();
    }

    void GooseMessageVisitor::handle_utctime(std::chrono::system_clock::time_point item)
    {
        m_path.inc();
    }

    template <typename T>
    void GooseMessageVisitor::handle_int(T value)
    {
        {
            auto it = m_mappings.int32_handlers.find(m_path);
            if (it != m_mappings.int32_handlers.end()) {
                it->second(static_cast<int32_t>(value));
                return;
            }
        }

        {
            auto it = m_mappings.int64_handlers.find(m_path);
            if (it != m_mappings.int64_handlers.end()) {
                it->second(static_cast<int64_t>(value));
                return;
            }
        }
    }

} // namespace goose
} // namespace adapter
