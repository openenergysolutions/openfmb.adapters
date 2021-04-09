// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_SUBJECTNAMESUFFIX_H
#define OPENFMB_ADAPTER_SUBJECTNAMESUFFIX_H

#include <string>
#include <yaml-cpp/yaml.h>

namespace adapter {
namespace util {

    class SubjectNameSuffix {
    public:
        enum class Type {
            uuid,
            wildcard
        };

    private:
        const std::string value;
        const Type type;

    public:
        SubjectNameSuffix(const std::string& value);

        const std::string& get_value() const;

        bool is_wildcard() const;
    };
}
}

#endif //OPENFMB_ADAPTER_BINDING_H
