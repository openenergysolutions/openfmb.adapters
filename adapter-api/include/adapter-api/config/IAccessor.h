
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
    class Accessor
    {
    public:

        explicit Accessor(const std::shared_ptr<IAccessor<R, T>>& accessor) : accessor(accessor) {}

        R const* get(const T& value) const
        {
            return accessor->get(value);
        }

        R* create(T& value) const
        {
            return accessor->create(value);
        }

        inline const_getter_t<R, T> to_const_getter() const
        {
            return [accessor = this->accessor](const T & value)
            {
                return accessor->get(value);
            };
        };

        inline mutable_getter_t<R, T> to_mutable_getter() const
        {
            return [accessor = this->accessor](T & value)
            {
                return accessor->create(value);
            };
        };

    private:
        const std::shared_ptr<const IAccessor<R, T>> accessor;
    };


}

#endif
