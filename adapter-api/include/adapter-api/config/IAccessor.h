
#ifndef OPENFMB_ADAPTER_IACCESSOR_H
#define OPENFMB_ADAPTER_IACCESSOR_H

#include <memory>
#include <functional>

namespace adapter
{
    template <class R, class T>
    using const_getter_t = std::function<R* (const T&)>;

    template <class R, class T>
    using mutable_getter_t = std::function<R* (T&)>;

    template <class R, class T>
    class IAccessor
    {
    public:
        virtual ~IAccessor() = default;

        /**
         * A getter that does not mutate the value. The return value may not be present.
         *
         * @param value The value which to extract the return value
         * @return A pointer to the value if present, otherwise nullptr
         */
        virtual R const* get(const T& value) const = 0;

        /**
         * A getter that may mutate the value in order to create the return type.
         *
         * @param value The value which to extract the return value
         * @return A pointer to the value (always valid)
         */
        virtual R* create(T& value) const = 0;
    };

    template <class R, class T>
    class IPrimitiveAccessor
    {
    public:
        virtual ~IPrimitiveAccessor() = default;

        /**
         * Test if the value is present. Must be checked before calling get().
         */
        virtual bool is_present(const T& value) const = 0;

        /**
         * A getter that does not mutate the value. Throws an exception if the value isn't present.
         *
         * @param value The value which to extract the return value
         * @return A pointer to the value if present, otherwise nullptr
         */
        virtual R get(const T& value) const = 0;

        /**
         * A getter that may mutate the value in order to create the return type.
         *
         * @param value The value which to extract the return value
         * @param primitive The value to set on the message
         */
        virtual void set(T& value, R primitive) const = 0;
    };


    template <class R, class T>
    class Accessor
    {
    public:

        explicit Accessor(const std::shared_ptr<IAccessor<R, T>>& accessor) : accessor(accessor) {}

        template <class U>
        void if_present(const T& value, const U& handler) const
        {
            const auto temp = accessor->get(value);
            if(temp)
            {
                handler(*temp);
            }
        }

        R* create(T& value) const
        {
            return accessor->create(value);
        }

        inline mutable_getter_t<R, T> to_mutable_getter() const
        {
            return [accessor = this->accessor](T & value)
            {
                return accessor->create(value);
            };
        };

    private:

        R const* get(const T& value) const
        {
            return accessor->get(value);
        }

        const std::shared_ptr<const IAccessor<R, T>> accessor;
    };

    template <class R, class T>
    class PrimitiveAccessor
    {
    public:

        explicit PrimitiveAccessor(const std::shared_ptr<IPrimitiveAccessor<R, T>>& accessor) : accessor(accessor) {}

        template <class U>
        void if_present(const T& value, const U& handler) const
        {
            if(accessor->is_present(value))
            {
                handler(accessor->get(value));
            }
        }

        void set(T& value, R primitive) const
        {
            return accessor->set(value, primitive);
        }

    private:
        const std::shared_ptr<const IPrimitiveAccessor<R, T>> accessor;
    };


}

#endif
