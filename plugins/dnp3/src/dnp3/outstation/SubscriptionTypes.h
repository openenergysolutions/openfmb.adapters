

#ifndef OPENFMB_ADAPTER_DNP3_OUTSTATION_SUBSCRIPTIONTYPES_H
#define OPENFMB_ADAPTER_DNP3_OUTSTATION_SUBSCRIPTIONTYPES_H

#include <asiodnp3/UpdateBuilder.h>

#include <functional>
#include <vector>

namespace adapter {
namespace dnp3 {
    namespace outstation {

        /**
         * Some function that examines a message and possibly adds DNP3 measurements to the builder
         */
        template <class T>
        using update_handler_t = std::function<void(asiodnp3::UpdateBuilder& builder, const T& profile)>;

        /**
         * A vector of update_handler_t<T>
         */
        template <class T>
        using update_handler_vec_t = std::vector<update_handler_t<T>>;
    }
}
}

#endif
