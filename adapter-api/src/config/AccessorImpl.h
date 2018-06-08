
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

    template <class R, class T, class M, class C, class P>
    class PrimitiveAccessorImpl : public IPrimitiveAccessor<R, T>
    {
        const M mutable_accessor;
        const C const_accessor;
        const P present_accessor;

    public:

        PrimitiveAccessorImpl(const M& mutable_accessor, const C& const_accessor, const P& present_accessor) :
                mutable_accessor(mutable_accessor),
                const_accessor(const_accessor),
                present_accessor(present_accessor)
        {}

        bool present(const T &value) const override {
            return present_accessor(value);
        }

        virtual R get(const T &value) const {
            return this->const_accessor(value);
        }

        virtual void set(T &value, R primitive) const {
            this->mutable_accessor(value, primitive);
        }
    };

    template <class R, class T>
    struct PrimitiveAccessorBuilder
    {
        template <class M, class C, class P>
        static PrimitiveAccessor<R, T> build(const M& mutable_accessor, const C& const_accessor, const P& present_accessor)
        {
            return PrimitiveAccessor<R,T>(std::make_shared<PrimitiveAccessorImpl<R, T, M, C, P>>(mutable_accessor, const_accessor, present_accessor));
        }
    };
}

#endif