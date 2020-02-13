

#ifndef OPENFMB_ADAPTER_MODBUS_SUBSCRIPTIONTYPES_H
#define OPENFMB_ADAPTER_MODBUS_SUBSCRIPTIONTYPES_H

#include <modbus/server/db/IDatabase.h>

#include <functional>
#include <vector>

namespace adapter {
namespace modbus {
namespace outstation {

        /**
         * Some function that examines a message and possibly adds DNP3 measurements to the builder
         */
        template <class T>
        using update_handler_t = std::function<void(::modbus::IDatabase& db, const T& profile)>;

        /**
         * A vector of update_handler_t<T>
         */
        template <class T>
        using update_handler_vec_t = std::vector<update_handler_t<T>>;

}
}
}

#endif
