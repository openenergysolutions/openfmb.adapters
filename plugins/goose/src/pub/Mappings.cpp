// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "pub/Mappings.h"

namespace adapter {
namespace goose {

    Mappings::Mappings()
        : m_num_fields{ 0 }
    {
    }

    void Mappings::add_ignored_field()
    {
        m_ignored_fields.insert(m_num_fields++);
    }

    void Mappings::add_struct_field(meas_fn_t<goose_cpp::Dataset> handler)
    {
        add_handler(handler, m_struct_handlers);
    }

    void Mappings::add_array_field(meas_fn_t<goose_cpp::Dataset> handler)
    {
        add_handler(handler, m_array_handlers);
    }

    void Mappings::add_bool_field(meas_fn_t<bool> handler)
    {
        add_handler(handler, m_bool_handlers);
    }

    void Mappings::add_int_field(meas_fn_t<int64_t> handler)
    {
        add_handler(handler, m_int_handlers);
    }

    void Mappings::add_float_field(meas_fn_t<float> handler)
    {
        add_handler(handler, m_float_handlers);
    }

    void Mappings::add_visible_string_field(meas_fn_t<std::string> handler)
    {
        add_handler(handler, m_visible_string_handlers);
    }

    void Mappings::add_mms_string_field(meas_fn_t<std::string> handler)
    {
        add_handler(handler, m_mms_string_handlers);
    }

    void Mappings::add_bitstring_field(meas_fn_t<goose_cpp::BitString> handler)
    {
        add_handler(handler, m_bitstring_handlers);
    }

    void Mappings::add_generalizedtime_field(meas_fn_t<std::chrono::system_clock::time_point> handler)
    {
        add_handler(handler, m_generalizedtime_handlers);
    }

    void Mappings::add_binarytime_field(meas_fn_t<std::chrono::system_clock::time_point> handler)
    {
        add_handler(handler, m_binarytime_handlers);
    }

    void Mappings::add_utctime_field(meas_fn_t<std::chrono::system_clock::time_point> handler)
    {
        add_handler(handler, m_utctime_handlers);
    }

    size_t Mappings::get_num_fields() const
    {
        return m_num_fields;
    }

    bool Mappings::is_ignored(size_t idx) const
    {
        return m_ignored_fields.find(idx) != m_ignored_fields.end();
    }

    bool Mappings::get_struct_handler(size_t idx, meas_fn_t<goose_cpp::Dataset>& handler) const
    {
        return get_handler(idx, handler, m_struct_handlers);
    }

    bool Mappings::get_array_handler(size_t idx, meas_fn_t<goose_cpp::Dataset>& handler) const
    {
        return get_handler(idx, handler, m_array_handlers);
    }

    bool Mappings::get_bool_handler(size_t idx, meas_fn_t<bool>& handler) const
    {
        return get_handler(idx, handler, m_bool_handlers);
    }

    bool Mappings::get_int_handler(size_t idx, meas_fn_t<int64_t>& handler) const
    {
        return get_handler(idx, handler, m_int_handlers);
    }

    bool Mappings::get_float_handler(size_t idx, meas_fn_t<float>& handler) const
    {
        return get_handler(idx, handler, m_float_handlers);
    }

    bool Mappings::get_visible_string_handler(size_t idx, meas_fn_t<std::string>& handler) const
    {
        return get_handler(idx, handler, m_visible_string_handlers);
    }

    bool Mappings::get_mms_string_handler(size_t idx, meas_fn_t<std::string>& handler) const
    {
        return get_handler(idx, handler, m_mms_string_handlers);
    }

    bool Mappings::get_bitstring_handler(size_t idx, meas_fn_t<goose_cpp::BitString>& handler) const
    {
        return get_handler(idx, handler, m_bitstring_handlers);
    }

    bool Mappings::get_generalizedtime_handler(size_t idx, meas_fn_t<std::chrono::system_clock::time_point>& handler) const
    {
        return get_handler(idx, handler, m_generalizedtime_handlers);
    }

    bool Mappings::get_binarytime_handler(size_t idx, meas_fn_t<std::chrono::system_clock::time_point>& handler) const
    {
        return get_handler(idx, handler, m_binarytime_handlers);
    }

    bool Mappings::get_utctime_handler(size_t idx, meas_fn_t<std::chrono::system_clock::time_point>& handler) const
    {
        return get_handler(idx, handler, m_utctime_handlers);
    }

    template <typename T>
    bool Mappings::get_handler(size_t idx, meas_fn_t<T>& handler, const std::unordered_map<size_t, meas_fn_t<T>>& map) const
    {
        auto it = map.find(idx);
        if (it != map.end()) {
            handler = it->second;
            return true;
        }

        return false;
    }

    template <typename T>
    void Mappings::add_handler(const meas_fn_t<T>& handler, typename std::unordered_map<size_t, meas_fn_t<T>>& map)
    {
        map.insert({ m_num_fields++, handler });
    }

} // namespace goose
} // namespace adapter
