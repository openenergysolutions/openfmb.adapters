
#ifndef OPENFMB_ADAPTER_FIELDINFO_H
#define OPENFMB_ADAPTER_FIELDINFO_H

#include "adapter-api/config/IDescriptorPath.h"

namespace adapter {

enum class StringType {
    message_mrid,
    optional_static_mrid,
    required_static_mrid,
    optional
};

class FieldInfo {
public:
    static bool is_message_ignored(const std::string& field_name, google::protobuf::Descriptor const* descriptor, IDescriptorPath& path);

    static StringType get_string_type(const std::string& field_name, IDescriptorPath& path);
};
}

#endif //OPENFMB_ADAPTER_FIELDINFO_H
