// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_ACCESSORIMPL_H
#define OPENFMB_ADAPTER_ACCESSORIMPL_H

#include "adapter-util/config/IAccessor.h"

namespace adapter {
namespace util {

    template <class P, class V, class Setter, class Getter>
    class AccessorImpl final : public IAccessor<P, V> {
        const Setter setter;
        const Getter getter;

    public:
        AccessorImpl(const Setter& setter, const Getter& getter)
            : setter(setter)
            , getter(getter)
        {
        }

        void set(P& message, const V& value) const override
        {
            return this->setter(message, value);
        }

        bool if_present(const P& message, const handler_t<V>& handler) const override
        {
            return this->getter(message, handler);
        }
    };

    template <class P, class V>
    struct AccessorBuilder {

        template <class Setter, class Getter>
        static accessor_t<P, V> build(const Setter& setter, const Getter& getter)
        {
            return std::make_shared<AccessorImpl<P, V, Setter, Getter>>(setter, getter);
        }
    };

    template <class P, class V, class Setter, class Getter>
    class MessageAccessorImpl final : public IMessageAccessor<P, V> {

        const Setter setter;
        const Getter getter;

    public:
        MessageAccessorImpl(const Setter& setter, const Getter& getter)
            : setter(setter)
            , getter(getter)
        {
        }

        V* mutable_get(P& message) const override
        {
            return this->setter(message);
        }

        bool if_present(const P& message, const handler_t<V>& handler) const override
        {
            return this->getter(message, handler);
        }
    };

    template <class P, class V>
    struct MessageAccessorBuilder {

        template <class Setter, class Getter>
        static message_accessor_t<P, V> build(const Setter& setter, const Getter& getter)
        {
            return std::make_shared<MessageAccessorImpl<P, V, Setter, Getter>>(setter, getter);
        }
    };
}
}

#endif
