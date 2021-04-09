// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "Lines.h"

namespace adapter {
    namespace schema {

        std::string lines(std::initializer_list<const char*> lines) {
            std::ostringstream oss;
            for(const auto line : lines) {
                oss << line << std::endl;
            }
            return oss.str();
        }

    }
}
