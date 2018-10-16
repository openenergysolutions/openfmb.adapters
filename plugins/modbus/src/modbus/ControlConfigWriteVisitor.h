#ifndef OPENFMB_ADAPTER_MODBUS_CONTROLCONFIGWRITEVISITOR_H
#define OPENFMB_ADAPTER_MODBUS_CONTROLCONFIGWRITEVISITOR_H

#include <adapter-api/config/ConfigWriteVisitorBase.h>

namespace adapter {
namespace modbus {

    class ControlConfigWriteVisitor final : public ConfigWriteVisitorBase {

    public:
        explicit ControlConfigWriteVisitor(YAML::Emitter& out);

    private:
    protected:
        void write_mapped_bool_keys(YAML::Emitter& out) override;

        void write_mapped_int32_keys(YAML::Emitter& out) override;

        void write_mapped_int64_keys(YAML::Emitter& out) override;

        void write_mapped_float_keys(YAML::Emitter& out) override;

        void write_mapped_enum_keys(YAML::Emitter& out, google::protobuf::EnumDescriptor const* descriptor) override;

        void write_mapped_schedule_parameter_keys(YAML::Emitter &out) override;

    };
}
}

#endif // OPENFMB_ADAPTER_MODBUS_CONTROLCONFIGWRITEVISITOR_H
