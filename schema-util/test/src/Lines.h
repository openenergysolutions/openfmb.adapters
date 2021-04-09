// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef LINES_H
#define LINES_H

#include <initializer_list>
#include <string>
#include <sstream>

namespace adapter {
    namespace schema {

        std::string lines(std::initializer_list<const char*> lines);

    }
}

#endif // LINES_H