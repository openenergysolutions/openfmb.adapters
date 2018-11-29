
#ifndef OPENFMB_ADAPTER_IACCESSOR_H
#define OPENFMB_ADAPTER_IACCESSOR_H

#include <functional>
#include <memory>

namespace adapter {
namespace util {

    template <class P, class V>
    using getter_t = std::function<V const*(const P&)>;

    template <class P, class V>
    using setter_t = std::function<V*(P&)>;

    template <class V>
    using handler_t = std::function<void(const V&)>;

    template <class P, class V>
    class IAccessor {
    public:
        virtual ~IAccessor() = default;

        /**
         * A getter that may mutate the value in order to create the return type.
         *
         * @param message The message on which to set the value
         * @param value The value to set on the message
         */
        virtual void set(P& message, const V& value) const = 0;

        /**
         * A safe accessor that only invokes a handler if the value is present
         *
         * @param message
         * @param handler
         */
        virtual bool if_present(const P& message, const handler_t<V>& handler) const = 0;
    };

    template <class P, class V>
    using accessor_t = std::shared_ptr<IAccessor<P, V>>;

    template <class P, class V>
    class IMessageAccessor {
    public:
        virtual ~IMessageAccessor() = default;

        /**
     * A getter that may mutate the value in order to create the return type.
     *
     * @param message The message on which to obtain or create the mutable value
     * @return The obtained or created value to be mutated
     */
        virtual V* mutable_get(P& message) const = 0;

        /**
     * A safe accessor that only invokes a handler if the value is present
     *
     * @param message
     * @param handler
     */
        virtual bool if_present(const P& message, const handler_t<V>& handler) const = 0;
    };

    template <class P, class V>
    using message_accessor_t = std::shared_ptr<IMessageAccessor<P, V>>;
}
}

#endif
