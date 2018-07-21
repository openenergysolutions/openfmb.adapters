
#ifndef OPENFMB_ADAPTER_DNP3_CONTROLCONFIGWRITEVISITOR_H
#define OPENFMB_ADAPTER_DNP3_CONTROLCONFIGWRITEVISITOR_H

#include "adapter-api/config/ConfigWriteVisitorBase.h"
#include "adapter-api/util/EnumUtil.h"
#include "adapter-api/util/Exception.h"

#include <opendnp3/gen/ControlCode.h>

namespace adapter {

namespace dnp3 {

    class ControlConfigWriteVisitor final : public ConfigWriteVisitorBase {

    public:
        explicit ControlConfigWriteVisitor(YAML::Emitter& out);

    protected:
        Int32FieldType::Value remap(Int32FieldType::Value type) override;

        FloatFieldType::Value remap(FloatFieldType::Value type) override;

        EnumFieldType::Value remap(EnumFieldType::Value type) override;

        StringFieldType::Value remap(StringFieldType::Value type) override;

        // --- mapping functions from base class  ---

        void write_mapped_bool_keys(YAML::Emitter& out) override;

        void write_mapped_int32_keys(YAML::Emitter& out) override;

        void write_mapped_int64_keys(YAML::Emitter& out) override;

        void write_mapped_float_keys(YAML::Emitter& out) override;

        void write_mapped_enum_keys(YAML::Emitter& out, google::protobuf::EnumDescriptor const* descriptor) override;

    private:
        // --- various helpers ---
        void write_crob_keys(YAML::Emitter& out, uint16_t index, opendnp3::ControlCode code);
    };
}
}

#endif
