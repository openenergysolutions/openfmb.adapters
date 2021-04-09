// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "pub/GooseMessageVisitor.h"

#include "adapter-api/Exception.h"

namespace adapter {
namespace goose {

    using namespace std::placeholders;

    GooseMessageVisitor::GooseMessageVisitor(const Mappings& mappings)
        : m_mappings{ mappings }
        , m_current_idx{ 0 }
    {
    }

    size_t GooseMessageVisitor::get_num_elements_visited() const
    {
        return m_current_idx;
    }

    void GooseMessageVisitor::handle_array(const goose_cpp::Dataset& item)
    {
        handle<goose_cpp::Dataset>(item, std::bind(&Mappings::get_array_handler, &m_mappings, _1, _2));
    }

    void GooseMessageVisitor::handle_structure(const goose_cpp::Dataset& item)
    {
        handle<goose_cpp::Dataset>(item, std::bind(&Mappings::get_struct_handler, &m_mappings, _1, _2));
    }

    void GooseMessageVisitor::handle_boolean(bool item)
    {
        handle<bool>(item, std::bind(&Mappings::get_bool_handler, &m_mappings, _1, _2));
    }

    void GooseMessageVisitor::handle_bit_string(const goose_cpp::BitString& item)
    {
        handle<goose_cpp::BitString>(item, std::bind(&Mappings::get_bitstring_handler, &m_mappings, _1, _2));
    }

    void GooseMessageVisitor::handle_integer(int64_t item)
    {
        handle<int64_t>(item, std::bind(&Mappings::get_int_handler, &m_mappings, _1, _2));
    }

    void GooseMessageVisitor::handle_unsigned_integer(uint64_t item)
    {
        handle_not_supported();
    }

    void GooseMessageVisitor::handle_floatingpoint(double item)
    {
        handle<float>(static_cast<float>(item), std::bind(&Mappings::get_float_handler, &m_mappings, _1, _2));
    }

    void GooseMessageVisitor::handle_octet_string(const std::vector<uint8_t>& item)
    {
        handle_not_supported();
    }

    void GooseMessageVisitor::handle_visible_string(const std::string& item)
    {
        handle<std::string>(item, std::bind(&Mappings::get_visible_string_handler, &m_mappings, _1, _2));
    }

    void GooseMessageVisitor::handle_generalizedtime(std::chrono::system_clock::time_point item)
    {
        handle<std::chrono::system_clock::time_point>(item, std::bind(&Mappings::get_generalizedtime_handler, &m_mappings, _1, _2));
    }

    void GooseMessageVisitor::handle_binarytime(std::chrono::system_clock::time_point item)
    {
        handle<std::chrono::system_clock::time_point>(item, std::bind(&Mappings::get_binarytime_handler, &m_mappings, _1, _2));
    }

    void GooseMessageVisitor::handle_bcd(uint64_t item)
    {
        handle_not_supported();
    }

    void GooseMessageVisitor::handle_boolean_array(const goose_cpp::BitString& item)
    {
        handle_not_supported();
    }

    void GooseMessageVisitor::handle_mms_string(const std::string& item)
    {
        handle<std::string>(static_cast<std::string>(item), std::bind(&Mappings::get_mms_string_handler, &m_mappings, _1, _2));
    }

    void GooseMessageVisitor::handle_utctime(std::chrono::system_clock::time_point item)
    {
        handle<std::chrono::system_clock::time_point>(item, std::bind(&Mappings::get_utctime_handler, &m_mappings, _1, _2));
    }

    template <typename T>
    void GooseMessageVisitor::handle(const T& item, std::function<bool(size_t, meas_fn_t<T>&)> getter)
    {
        meas_fn_t<T> handler;
        if (getter(m_current_idx, handler)) {
            handler(item);
        } else if (!m_mappings.is_ignored(m_current_idx)) {
            throw api::Exception{ "GOOSE message format does not correspond to the configuration." };
        }

        ++m_current_idx;
    }

    void GooseMessageVisitor::handle_not_supported()
    {
        if (!m_mappings.is_ignored(m_current_idx)) {
            throw api::Exception{ "GOOSE message format does not correspond to the configuration." };
        }

        ++m_current_idx;
    }

} // namespace goose
} // namespace adapter
