
#include "SubjectNameSuffix.h"

#include <boost/lexical_cast.hpp>
#include <boost/uuid/uuid_io.hpp>

#include <adapter-api/Exception.h>

namespace adapter {
namespace nats {

    SubjectNameSuffix::Type get_type(const std::string& value)
    {
        if (value == "*") {
            return SubjectNameSuffix::Type::wildcard;
        } else {
            try {
                // throws bad_lexical_cast if not a valid UUID
                boost::lexical_cast<boost::uuids::uuid>(value);
            } catch (...) {
                throw api::Exception("NATs subject suffix is Not a valid UUID: ", value);
            }

            return SubjectNameSuffix::Type::uuid;
        }
    }

    SubjectNameSuffix::SubjectNameSuffix(const std::string& value)
        : value(value)
        , type(get_type(value))
    {
    }

    const std::string& SubjectNameSuffix::get_value() const
    {
        return this->value;
    }

    bool SubjectNameSuffix::is_wildcard() const
    {
        return this->type == Type::wildcard;
    }
}
}
