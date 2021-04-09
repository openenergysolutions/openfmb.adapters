// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_GOOSE_PUB_GOOSEMESSAGEVISITOR_H
#define OPENFMB_ADAPTER_GOOSE_PUB_GOOSEMESSAGEVISITOR_H

#include "goose-cpp/messages/IDatasetVisitor.h"
#include "pub/Mappings.h"
#include <functional>

namespace adapter {
namespace goose {

    class GooseMessageVisitor final : public goose_cpp::IDatasetVisitor {
    public:
        GooseMessageVisitor(const Mappings& mappings);
        ~GooseMessageVisitor() = default;

        size_t get_num_elements_visited() const;

        void handle_array(const goose_cpp::Dataset& item) final;
        void handle_structure(const goose_cpp::Dataset& item) final;
        void handle_boolean(bool item) final;
        void handle_bit_string(const goose_cpp::BitString& item) final;
        void handle_integer(int64_t item) final;
        void handle_unsigned_integer(uint64_t item) final;
        void handle_floatingpoint(double item) final;
        void handle_octet_string(const std::vector<uint8_t>& item) final;
        void handle_visible_string(const std::string& item) final;
        void handle_generalizedtime(std::chrono::system_clock::time_point item) final;
        void handle_binarytime(std::chrono::system_clock::time_point item) final;
        void handle_bcd(uint64_t item) final;
        void handle_boolean_array(const goose_cpp::BitString& item) final;
        void handle_mms_string(const std::string& item) final;
        void handle_utctime(std::chrono::system_clock::time_point item) final;

    private:
        template <typename T>
        void handle(const T& item, std::function<bool(size_t, meas_fn_t<T>&)> getter);
        void handle_not_supported();

        const Mappings& m_mappings;
        size_t m_current_idx;
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_PUB_GOOSEMESSAGEVISITOR_H
