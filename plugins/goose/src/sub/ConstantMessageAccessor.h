// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_GOOSE_SUB_CONSTANTMESSAGEACCESSOR_H
#define OPENFMB_ADAPTER_GOOSE_SUB_CONSTANTMESSAGEACCESSOR_H

#include <adapter-util/config/IAccessor.h>
#include <memory>

namespace adapter {
namespace goose {

template<typename P, typename V>
class ConstantMessageAccessor : public util::IMessageAccessor<P, V>
{
public:
    explicit ConstantMessageAccessor(const std::shared_ptr<V> constant_value)
        : m_constant_value{constant_value}
    {

    }

    V* mutable_get(P& message) const override
    {
        throw api::Exception{"Cannot mutate constant message accessor."};
    }

    bool if_present(const P& message, const util::handler_t<V>& handler) const override
    {
        handler(*m_constant_value);
        return true;
    }

private:
    const std::shared_ptr<V> m_constant_value;
};

template<typename P, typename V>
class ConstantFallbackMessageAccessor : public util::IMessageAccessor<P, V>
{
public:
    explicit ConstantFallbackMessageAccessor(const std::shared_ptr<V> constant_value, util::message_accessor_t<P, V> original_accessor)
            : m_constant_value{constant_value},
              m_original_accessor{original_accessor}
    {

    }

    V* mutable_get(P& message) const override
    {
        throw api::Exception{"Cannot mutate constant message accessor."};
    }

    bool if_present(const P& message, const util::handler_t<V>& handler) const override
    {
        auto is_handled = m_original_accessor->if_present(message, [&](const V& value) {
            handler(value);
        });

        if(!is_handled)
        {
            handler(*m_constant_value);
        }

        return true;
    }

private:
    const std::shared_ptr<V> m_constant_value;
    util::message_accessor_t<P, V> m_original_accessor;
};

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_SUB_CONSTANTMESSAGEACCESSOR_H
