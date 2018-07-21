

#ifndef OPENFMB_ADAPTER_CONFIGWRITEVISITORBASE_H
#define OPENFMB_ADAPTER_CONFIGWRITEVISITORBASE_H

#include "IModelVisitor.h"

#include <yaml-cpp/yaml.h>
#include <adapter-api/config/generated/BoolFieldType.h>
#include <adapter-api/config/generated/Int32FieldType.h>
#include <adapter-api/config/generated/EnumFieldType.h>
#include <adapter-api/config/generated/StringFieldType.h>

#include "DescriptorPath.h"

namespace adapter {

//using write_fun_t = std::function<void(YAML::Emitter&)>;

class ConfigWriteVisitorBase : public IModelVisitor {

    YAML::Emitter& out;
    DescriptorPath path;

protected:

    /// ---- methods that give base classes a change to remap support for a type ----

    virtual BoolFieldType::Value remap(BoolFieldType::Value type) = 0;

    virtual Int32FieldType::Value remap(Int32FieldType::Value  type) = 0;

    virtual EnumFieldType::Value remap(EnumFieldType::Value type) = 0;

    virtual StringFieldType::Value remap(StringFieldType::Value type) = 0;

    /// ---- handlers for writing protocol specific mappings ----

    virtual void write_mapped_bool_keys(YAML::Emitter& out) = 0;

    virtual void write_mapped_int32_keys(YAML::Emitter& out) = 0;

    virtual void write_mapped_uint32_keys(YAML::Emitter& out) = 0;

    virtual void write_mapped_int64_keys(YAML::Emitter& out) = 0;

    virtual void write_mapped_uint64_keys(YAML::Emitter& out) = 0;

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

    void handle_uint32(const std::string& field_name) final;

    void handle_int64(const std::string& field_name) final;

    void handle_uint64(const std::string& field_name) final;

    void handle_float(const std::string& field_name) final;

    void handle_string(const std::string& field_name) final;

    void handle_enum(const std::string& field_name, google::protobuf::EnumDescriptor const* descriptor) final;
};
}

#endif
