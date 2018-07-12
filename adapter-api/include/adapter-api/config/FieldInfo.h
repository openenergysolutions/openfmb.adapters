
#ifndef OPENFMB_ADAPTER_FIELDINFO_H
#define OPENFMB_ADAPTER_FIELDINFO_H

#include "IDescriptorPath.h"

namespace adapter {

enum class StringType {
    /// a dynamic UUID generated for each message
    message_mrid,
    /// an optional string that must be either ""  or a valid UUID. present or not present on every message.
    optional_static_mrid,
    /// a required string that must be a valid UUID
    required_static_mrid,
    /// an optional string
    optional
};

enum class EnumType {
    /// an optional enum that is the same value in every message
    optional_static_enum,
    /// an enum that is mapped from values in the underlying protocol
    mapped_enum
};

namespace fields {

    bool is_message_ignored(const std::string& field_name, google::protobuf::Descriptor const* descriptor,
        IDescriptorPath& path);

    StringType get_string_type(const std::string& field_name, IDescriptorPath& path);

    EnumType get_enum_type(google::protobuf::EnumDescriptor const* descriptor);
}
}

#endif //OPENFMB_ADAPTER_FIELDINFO_H
