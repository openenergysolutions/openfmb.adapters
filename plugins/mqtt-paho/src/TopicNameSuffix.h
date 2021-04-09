// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_TOPICNAMESUFFIX_H
#define OPENFMB_ADAPTER_TOPICNAMESUFFIX_H

#include <string>

namespace adapter {
namespace mqtt {

    class TopicNameSuffix {
    public:
        enum class Type {
            uuid,
            wildcard
        };

    private:
        const std::string value;
        const Type type;

    public:
        TopicNameSuffix(const std::string& value);

        const std::string& get_value() const;

        bool is_wildcard() const;
    };
}
}

#endif //OPENFMB_ADAPTER_TOPICNAMESUFFIX_H
