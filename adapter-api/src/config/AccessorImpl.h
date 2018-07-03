
#ifndef OPENFMB_ADAPTER_ACCESSORIMPL_H
#define OPENFMB_ADAPTER_ACCESSORIMPL_H

#include "adapter-api/config/IAccessor.h"

namespace adapter {

template <class P, class V, class Setter, class Getter>
class AccessorImpl : public IAccessor<P, V> {
    const Setter setter;
    const Getter getter;

public:
    AccessorImpl(const Setter& setter, const Getter& getter)
        : setter(setter)
        , getter(getter)
    {
    }

    virtual V const* get(const P& message) const
    {
        return this->getter(message);
    }

    virtual void set(P& message, const V& value) const
    {
        return this->setter(message, value);
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

}

#endif
