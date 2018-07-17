

#ifndef OPENFMB_ADAPTER_CONFIGWRITEVISITORBASE_H
#define OPENFMB_ADAPTER_CONFIGWRITEVISITORBASE_H

#include "IModelVisitor.h"

#include <yaml-cpp/yaml.h>

#include "DescriptorPath.h"

namespace adapter {

using write_fun_t = std::function<void(YAML::Emitter&)>;

class ConfigWriteVisitorBase : public IModelVisitor {

    class DelayedWriter {
        YAML::Emitter& out;
        std::vector<write_fun_t> delayed_writes;

    public:
        explicit DelayedWriter(YAML::Emitter& out)
            : out(out)
        {
        }

        void push(const write_fun_t& fun);

        void pop(const write_fun_t& fun);

        void write(const write_fun_t& fun);
    };

    DescriptorPath path;
    DelayedWriter writer;

protected:
    bool is_control;

    virtual void write_mapped_enum_keys(google::protobuf::EnumDescriptor const* descriptor, YAML::Emitter& out) = 0;

    virtual void write_mapped_bool_keys(YAML::Emitter& out) = 0;

public:
    explicit ConfigWriteVisitorBase(bool is_control, YAML::Emitter& out);

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
