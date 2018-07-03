
#ifndef OPENFMB_ADAPTER_ACCESSORIMPL_H
#define OPENFMB_ADAPTER_ACCESSORIMPL_H

#include "adapter-api/config/IAccessor.h"

namespace adapter {

template <class R, class T, class Setter, class Getter>
class AccessorImpl : public IAccessor<R, T> {
    const Setter setter;
    const Getter getter;

public:
    AccessorImpl(const Setter& setter, const Getter& getter)
        : setter(setter)
        , getter(getter)
    {
    }

    virtual R const* get(const T& message) const
    {
        return this->getter(message);
    }

    virtual void set(T& message, R value) const
    {
        return this->setter(message, value);
    }
};

template <class R, class T>
struct AccessorBuilder {

    template <class Setter, class Getter>
    static accessor_t<R, T> build(const Setter& setter, const Getter& getter)
    {
        return std::make_shared<AccessorImpl<R, T, Setter, Getter>>(setter, getter);
    }
};

}

#endif
