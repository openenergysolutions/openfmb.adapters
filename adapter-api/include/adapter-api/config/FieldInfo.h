
#ifndef OPENFMB_ADAPTER_FIELDINFO_H
#define OPENFMB_ADAPTER_FIELDINFO_H

#include "IDescriptorPath.h"

#include "generated/BoolFieldType.h"
#include "generated/ControlTimestampFieldType.h"
#include "generated/EnumFieldType.h"
#include "generated/FloatFieldType.h"
#include "generated/Int32FieldType.h"
#include "generated/Int64FieldType.h"
#include "generated/QualityFieldType.h"
#include "generated/StringFieldType.h"
#include "generated/TimestampFieldType.h"

namespace adapter {

namespace fields {

    bool is_message_ignored(const std::string& field_name, google::protobuf::Descriptor const* descriptor, IDescriptorPath& path);

    BoolFieldType::Value get_bool_type(const std::string& field_name, IDescriptorPath& path);

    Int32FieldType::Value get_int32_type(const std::string& field_name, IDescriptorPath& path);

    Int64FieldType::Value get_int64_type(const std::string& field_name, IDescriptorPath& path);

    FloatFieldType::Value get_float_type(const std::string& field_name, IDescriptorPath& path);

    EnumFieldType::Value get_enum_type(google::protobuf::EnumDescriptor const* descriptor);

    StringFieldType::Value get_string_type(const std::string& field_name, IDescriptorPath& path);

    TimestampFieldType::Value get_timestamp_type(const std::string& field_name, IDescriptorPath& path);
}
}

#endif //OPENFMB_ADAPTER_FIELDINFO_H
