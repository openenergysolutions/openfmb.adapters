
#ifndef OPENFMB_ADAPTER_DNP3_MEASUREMENTCONFIGWRITEVISITOR_H
#define OPENFMB_ADAPTER_DNP3_MEASUREMENTCONFIGWRITEVISITOR_H

#include "adapter-api/config/ConfigWriteVisitorBase.h"
#include "adapter-api/util/EnumUtil.h"
#include "adapter-api/util/Exception.h"

#include <opendnp3/gen/ControlCode.h>

namespace adapter {

namespace dnp3 {

    class MeasurementConfigWriteVisitor final : public ConfigWriteVisitorBase {

    public:
        explicit MeasurementConfigWriteVisitor(YAML::Emitter& out);

    protected:
        // --- mapping functions from base class  ---

        void write_mapped_bool_keys(YAML::Emitter& out) override;

        void write_mapped_int32_keys(YAML::Emitter& out) override;

        void write_mapped_int64_keys(YAML::Emitter& out) override;

        void write_mapped_float_keys(YAML::Emitter& out) override;

        void write_mapped_enum_keys(YAML::Emitter& out, google::protobuf::EnumDescriptor const* descriptor) override;

        void write_mapped_function_parameter_keys(YAML::Emitter &out) override;

        void write_mapped_schedule_parameter_keys(YAML::Emitter &out) override;
    };
}
}

#endif
