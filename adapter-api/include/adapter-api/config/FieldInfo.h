
#ifndef OPENFMB_ADAPTER_FIELDINFO_H
#define OPENFMB_ADAPTER_FIELDINFO_H

#include "IDescriptorPath.h"

#include "generated/EnumFieldType.h"
#include "generated/FieldType.h"
#include "generated/StringFieldType.h"

namespace adapter {

namespace fields {

    bool is_message_ignored(const std::string& field_name, google::protobuf::Descriptor const* descriptor, IDescriptorPath& path);

    StringFieldType::Value get_string_type(const std::string& field_name, IDescriptorPath& path);

    EnumFieldType::Value get_enum_type(google::protobuf::EnumDescriptor const* descriptor);

    FieldType::Value get_bool_type(const std::string& field_name, IDescriptorPath& path);

    FieldType::Value get_int32_type(const std::string& field_name, IDescriptorPath& path);
}
}

#endif //OPENFMB_ADAPTER_FIELDINFO_H
