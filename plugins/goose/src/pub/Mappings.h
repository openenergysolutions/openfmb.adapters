#ifndef OPENFMB_ADAPTER_GOOSE_PUB_MAPPINGS_H
#define OPENFMB_ADAPTER_GOOSE_PUB_MAPPINGS_H

#include "BuildingFunction.h"
#include <chrono>
#include <unordered_map>
#include <unordered_set>

namespace adapter {
namespace goose {

    class Mappings {
    public:
        Mappings();

        void add_ignored_field();
        void add_struct_field(meas_fn_t<goose_cpp::Dataset> handler);
        void add_array_field(meas_fn_t<goose_cpp::Dataset> handler);
        void add_bool_field(meas_fn_t<bool> handler);
        void add_int_field(meas_fn_t<int64_t> handler);
        void add_float_field(meas_fn_t<float> handler);
        void add_visible_string_field(meas_fn_t<std::string> handler);
        void add_mms_string_field(meas_fn_t<std::string> handler);
        void add_bitstring_field(meas_fn_t<goose_cpp::BitString> handler);
        void add_generalizedtime_field(meas_fn_t<std::chrono::system_clock::time_point> handler);
        void add_binarytime_field(meas_fn_t<std::chrono::system_clock::time_point> handler);
        void add_utctime_field(meas_fn_t<std::chrono::system_clock::time_point> handler);

        size_t get_num_fields() const;
        bool is_ignored(size_t idx) const;
        bool get_struct_handler(size_t idx, meas_fn_t<goose_cpp::Dataset>& handler) const;
        bool get_array_handler(size_t idx, meas_fn_t<goose_cpp::Dataset>& handler) const;
        bool get_bool_handler(size_t idx, meas_fn_t<bool>& handler) const;
        bool get_int_handler(size_t idx, meas_fn_t<int64_t>& handler) const;
        bool get_float_handler(size_t idx, meas_fn_t<float>& handler) const;
        bool get_visible_string_handler(size_t idx, meas_fn_t<std::string>& handler) const;
        bool get_mms_string_handler(size_t idx, meas_fn_t<std::string>& handler) const;
        bool get_bitstring_handler(size_t idx, meas_fn_t<goose_cpp::BitString>& handler) const;
        bool get_generalizedtime_handler(size_t idx, meas_fn_t<std::chrono::system_clock::time_point>& handler) const;
        bool get_binarytime_handler(size_t idx, meas_fn_t<std::chrono::system_clock::time_point>& handler) const;
        bool get_utctime_handler(size_t idx, meas_fn_t<std::chrono::system_clock::time_point>& handler) const;

    private:
        template <typename T>
        void add_handler(const meas_fn_t<T>& handler, typename std::unordered_map<size_t, meas_fn_t<T>>& map);

        template <typename T>
        bool get_handler(size_t idx, meas_fn_t<T>& handler, const typename std::unordered_map<size_t, meas_fn_t<T>>& map) const;

        size_t m_num_fields;
        std::unordered_set<size_t> m_ignored_fields;
        std::unordered_map<size_t, meas_fn_t<goose_cpp::Dataset>> m_struct_handlers;
        std::unordered_map<size_t, meas_fn_t<goose_cpp::Dataset>> m_array_handlers;
        std::unordered_map<size_t, meas_fn_t<bool>> m_bool_handlers;
        std::unordered_map<size_t, meas_fn_t<int64_t>> m_int_handlers;
        std::unordered_map<size_t, meas_fn_t<float>> m_float_handlers;
        std::unordered_map<size_t, meas_fn_t<std::string>> m_visible_string_handlers;
        std::unordered_map<size_t, meas_fn_t<std::string>> m_mms_string_handlers;
        std::unordered_map<size_t, meas_fn_t<goose_cpp::BitString>> m_bitstring_handlers;
        std::unordered_map<size_t, meas_fn_t<std::chrono::system_clock::time_point>> m_generalizedtime_handlers;
        std::unordered_map<size_t, meas_fn_t<std::chrono::system_clock::time_point>> m_binarytime_handlers;
        std::unordered_map<size_t, meas_fn_t<std::chrono::system_clock::time_point>> m_utctime_handlers;
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_PUB_MAPPINGS_H
