
#ifndef OPENFMB_ADAPTER_ACCESSORIMPL_H
#define OPENFMB_ADAPTER_ACCESSORIMPL_H

#include "adapter-api/config/IAccessor.h"

namespace adapter
{

    template <class R, class T, class M, class C>
    class AccessorImpl : public IAccessor<R, T>
    {
        const M mutable_accessor;
        const C const_accessor;

    public:

        AccessorImpl(const M& mutable_accessor, const C& const_accessor) :
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
        static Accessor<R, T> build(const M& mutable_accessor, const C& const_accessor)
        {
            return Accessor<R,T>(std::make_shared<AccessorImpl<R, T, M, C>>(mutable_accessor, const_accessor));
        }
    };
}

#endif