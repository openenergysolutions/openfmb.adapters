

#ifndef OPENFMB_ADAPTER_CONFIGWRITEVISITORBASE_H
#define OPENFMB_ADAPTER_CONFIGWRITEVISITORBASE_H

#include "IModelVisitor.h"

#include <adapter-api/config/generated/BoolFieldType.h>
#include <adapter-api/config/generated/EnumFieldType.h>
#include <adapter-api/config/generated/FloatFieldType.h>
#include <adapter-api/config/generated/Int32FieldType.h>
#include <adapter-api/config/generated/Int64FieldType.h>
#include <adapter-api/config/generated/StringFieldType.h>

#include <yaml-cpp/yaml.h>

#include "DescriptorPath.h"

namespace adapter {

class ConfigWriteVisitorBase : public IModelVisitor {

    YAML::Emitter& out;
    DescriptorPath path;

protected:
    /// ---- handlers for writing protocol specific mappings ----

    virtual void write_mapped_bool_keys(YAML::Emitter& out) = 0;

    virtual void write_mapped_int32_keys(YAML::Emitter& out) = 0;

    virtual void write_mapped_int64_keys(YAML::Emitter& out) = 0;

    virtual void write_mapped_float_keys(YAML::Emitter& out) = 0;

    virtual void write_mapped_enum_keys(YAML::Emitter& out, google::protobuf::EnumDescriptor const* descriptor) = 0;

public:
    explicit ConfigWriteVisitorBase(YAML::Emitter& out);

    // --- final handlers for message fields ---

    bool start_message_field(const std::string& field_name, google::protobuf::Descriptor const* descriptor) final;

    void end_message_field() final;

    int start_repeated_message_field(const std::string& field_name, google::protobuf::Descriptor const* descriptor) final;

    void start_iteration(int i) final;

    void end_iteration() final;

    void end_repeated_message_field() final;

    // --- final handlers for primitive fields ---

    void handle_bool(const std::string& field_name) final;

    void handle_int32(const std::string& field_name) final;

    void handle_int64(const std::string& field_name) final;

    void handle_float(const std::string& field_name) final;

    void handle_string(const std::string& field_name) final;

    void handle_enum(const std::string& field_name, google::protobuf::EnumDescriptor const* descriptor) final;

    void handle_commonmodule_Quality(const std::string& field_name) final;

    void handle_commonmodule_Timestamp(const std::string& field_name) final;

    void handle_commonmodule_ControlTimestamp(const std::string& field_name) final;

private:
    static BoolFieldType::Value remap(BoolFieldType::Value type);

    static Int32FieldType::Value remap(Int32FieldType::Value type);

    static Int64FieldType::Value remap(Int64FieldType::Value type);

    static FloatFieldType::Value remap(FloatFieldType::Value type);

    static StringFieldType::Value remap(StringFieldType::Value type);

    static EnumFieldType::Value remap(EnumFieldType::Value type);
};
}

#endif
