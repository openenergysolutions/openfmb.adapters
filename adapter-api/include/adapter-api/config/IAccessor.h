
#ifndef OPENFMB_ADAPTER_IACCESSOR_H
#define OPENFMB_ADAPTER_IACCESSOR_H

#include <memory>

namespace adapter
{
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
    using accessor_t = std::shared_ptr<IAccessor<R, T>>;
}

#endif
