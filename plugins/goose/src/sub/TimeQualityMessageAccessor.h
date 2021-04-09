// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_GOOSE_SUB_TIMEQUALITYMESSAGEACCESSOR_H
#define OPENFMB_ADAPTER_GOOSE_SUB_TIMEQUALITYMESSAGEACCESSOR_H

#include <adapter-util/config/IAccessor.h>
#include <memory>

namespace adapter {
namespace goose {

template<typename P>
class TimeQualityMessageAccessor : public util::IMessageAccessor<P, commonmodule::TimeQuality>
{
public:
    explicit TimeQualityMessageAccessor(util::message_accessor_t<P, commonmodule::Timestamp> original_accessor)
            : m_original_accessor{original_accessor}
    {

    }

    commonmodule::TimeQuality* mutable_get(P& message) const override
    {
        return m_original_accessor->mutable_get(message)->mutable_tq();
    }

    bool if_present(const P& message, const util::handler_t<commonmodule::TimeQuality>& handler) const override
    {
        return m_original_accessor->if_present(message, [&](const commonmodule::Timestamp& value) {
            handler(value.tq());
        });
    }

private:
    util::message_accessor_t<P, commonmodule::Timestamp> m_original_accessor;
};

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_SUB_TIMEQUALITYMESSAGEACCESSOR_H
