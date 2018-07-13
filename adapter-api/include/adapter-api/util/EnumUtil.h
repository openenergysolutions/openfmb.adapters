#ifndef OPENFMB_ADAPTER_ENUMUTIL_H
#define OPENFMB_ADAPTER_ENUMUTIL_H

#include <sstream>

namespace adapter {
namespace enumeration {

    template <class E>
    std::string get_value_set_as_string()
    {
        const auto size = E::values.size();
        std::ostringstream oss;
        oss << "{";
        for (size_t i = 0; i < size; ++i) {
            oss << E::to_string(E::values[i]);
            if ((i + 1) < size)
                oss << ", ";
        }
        oss << "}";
        return oss.str();
    }
}
}

#endif
