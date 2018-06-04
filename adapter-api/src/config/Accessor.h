
#ifndef OPENFMB_ADAPTER_ACCESSOR_H
#define OPENFMB_ADAPTER_ACCESSOR_H

#include "adapter-api/config/IAccessor.h"

namespace adapter
{

    template <class R, class T, class M, class C>
    class Accessor : public IAccessor<R, T>
    {
        const M mutable_accessor;
        const C const_accessor;

    public:

        Accessor(const M& mutable_accessor, const C& const_accessor) :
                mutable_accessor(mutable_accessor),
                const_accessor(const_accessor)
        {}

        virtual R const* get(const T &value) const {
            return this->const_accessor(value);
        }

        virtual R* create(T &value) const {
            return this->mutable_accessor(value);
        }
    };

    template <class R, class T>
    struct AccessorBuilder
    {
        template <class M, class C>
        static accessor_t<R, T> build(const M& mutable_accessor, const C& const_accessor)
        {
            return std::make_shared<Accessor<R, T, M, C>>(mutable_accessor, const_accessor);
        }
    };
}

#endif