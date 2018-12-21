
#include "TopicNameSuffix.h"

#include <boost/lexical_cast.hpp>
#include <boost/uuid/uuid_io.hpp>

#include <adapter-api/Exception.h>

namespace adapter {
namespace mqtt {

    TopicNameSuffix::Type get_type(const std::string& value)
    {
        if (value == "*") {
            return TopicNameSuffix::Type::wildcard;
        } else {
            try {
                // throws bad_lexical_cast if not a valid UUID
                boost::lexical_cast<boost::uuids::uuid>(value);
            } catch (...) {
                throw api::Exception("MQTT topic suffix is not a valid UUID: ", value);
            }

            return TopicNameSuffix::Type::uuid;
        }
    }

    TopicNameSuffix::TopicNameSuffix(const std::string& value)
        : value(value)
        , type(get_type(value))
    {
    }

    const std::string& TopicNameSuffix::get_value() const
    {
        return this->value;
    }

    bool TopicNameSuffix::is_wildcard() const
    {
        return this->type == Type::wildcard;
    }
}
}
