#ifndef OPENFMB_ADAPTER_ENUMUTIL_H
#define OPENFMB_ADAPTER_ENUMUTIL_H

#include <sstream>

namespace adapter {
namespace enumeration {

    template <class E>
    std::string get_value_set_from_list(const std::initializer_list<typename E::Value>& values)
    {
        const auto size = values.size();
        std::ostringstream oss;
        oss << "{";

        size_t i = 0;
        for (auto value : values) {
            oss << E::to_string(value);
            if ((i + 1) < size)
                oss << ", ";
            ++i;
        }
        oss << "}";
        return oss.str();
    }
}
}

#endif
