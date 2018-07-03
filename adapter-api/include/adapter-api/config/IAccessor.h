
#ifndef OPENFMB_ADAPTER_IACCESSOR_H
#define OPENFMB_ADAPTER_IACCESSOR_H

#include <functional>
#include <memory>

namespace adapter {
template <class V, class P>
using getter_t = std::function<V* (const P&)>;

template <class P, class V>
using setter_t = std::function<void(P&, const V&)>;

template <class V, class P>
class IAccessor {
public:
    virtual ~IAccessor() = default;

    /**
     * A getter that may mutate the value in order to create the return type.
     *
     * @param message The message on which to set the value
     * @param value The value to set on the message
     */
    virtual void set(P& message, V value) const = 0;

    /**
     * A safe accessor that only invokes a handler if the value is present
     *
     * @tparam H callback handler invoked with the value
     * @param message
     * @param handler
     */
    template <class H>
    bool if_present(const P& message, const H& handler)
    {
        const auto value = this->get(message);
        if(value)
        {
            handler(*value);
            return true;
        }

        return false;
    }

protected:

    /**
     * return a pointer to the value or nullptr
     *
     * @param message The message from which to extract the primitive value
     * @return pointer to the value or nullptr if not present
     */
    virtual const V* get(const P& message) const = 0;
};

template <class V, class P>
using accessor_t = std::shared_ptr<IAccessor<V, P>>;

}

#endif
