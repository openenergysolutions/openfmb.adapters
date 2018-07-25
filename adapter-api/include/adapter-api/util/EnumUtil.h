#ifndef OPENFMB_ADAPTER_ENUMUTIL_H
#define OPENFMB_ADAPTER_ENUMUTIL_H

#include <sstream>

#include <google/protobuf/descriptor.h>

namespace adapter {
namespace enumeration {

    int try_get_value(const std::string& name, const ::google::protobuf::EnumDescriptor& desc);

    /*
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
    */

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
