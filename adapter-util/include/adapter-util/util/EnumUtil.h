// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_ENUMUTIL_H
#define OPENFMB_ADAPTER_ENUMUTIL_H

#include <sstream>

namespace adapter {
namespace util {
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

        inline std::string get_enum_set(const google::protobuf::EnumDescriptor& descriptor)
        {
            const auto size = descriptor.value_count();
            std::ostringstream oss;
            oss << "{";

            for (int i = 0; i < size; ++i)
            {
                oss << descriptor.value(i)->name();
                if ((i + 1) < size)
                    oss << ", ";
            }
            oss << "}";
            return oss.str();
        }

        template <class E>
        std::string get_value_set()
        {
            const auto size = E::values.size();
            std::ostringstream oss;
            oss << "{";

            size_t i = 0;
            for (auto value : E::values) {
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
}

#endif
