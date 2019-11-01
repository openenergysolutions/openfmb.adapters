#ifndef OPENFMB_ADAPTER_MODBUS_CONTROLCONFIGWRITEVISITOR_H
#define OPENFMB_ADAPTER_MODBUS_CONTROLCONFIGWRITEVISITOR_H

#include <adapter-util/config/ConfigWriteVisitorBase.h>

namespace adapter {
namespace modbus {

    class ControlConfigWriteVisitor final : public util::ConfigWriteVisitorBase {

    public:
        explicit ControlConfigWriteVisitor(YAML::Emitter& out);

    protected:
        void write_mapped_bool_keys(YAML::Emitter& out) override;

        void write_mapped_int32_keys(YAML::Emitter& out) override;

        void write_mapped_int64_keys(YAML::Emitter& out) override;

        void write_mapped_float_keys(YAML::Emitter& out) override;

        void write_mapped_enum_keys(YAML::Emitter& out, google::protobuf::EnumDescriptor const* descriptor) override;

        void write_mapped_schedule_parameter_keys(YAML::Emitter& out) override;

    private:
        void write_scaled_register_mapping(YAML::Emitter& out);
    };
}
}

#endif // OPENFMB_ADAPTER_MODBUS_CONTROLCONFIGWRITEVISITOR_H
