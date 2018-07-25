#include "GooseMessageVisitor.h"

namespace adapter
{
namespace goose
{

GooseMessageVisitor::GooseMessageVisitor(const Mappings& mappings)
    : m_mappings{mappings}
{

}

void GooseMessageVisitor::handle_array(const goose_cpp::Dataset& item)
{
    m_path.push();
}

void GooseMessageVisitor::handle_structure(const goose_cpp::Dataset& item)
{
    m_path.push();
}

void GooseMessageVisitor::handle_boolean(bool item)
{
    m_path.inc();
}

void GooseMessageVisitor::handle_bit_string(const goose_cpp::BitString& item)
{
    m_path.inc();
}

void GooseMessageVisitor::handle_integer(int64_t item)
{
    m_path.inc();
}

void GooseMessageVisitor::handle_unsigned_integer(uint64_t item)
{
    m_path.inc();
}

void GooseMessageVisitor::handle_floatingpoint(double item)
{
    auto it = m_mappings.float_handlers.find(m_path);
    if(it != m_mappings.float_handlers.end())
    {
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

} // namespace goose
} // namespace adapter
