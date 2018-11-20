
#ifndef OPENFMB_ADAPTER_DNP3_MEASUREMENTCONFIGWRITEVISITOR_H
#define OPENFMB_ADAPTER_DNP3_MEASUREMENTCONFIGWRITEVISITOR_H

#include <adapter-api/Exception.h>
#include <adapter-util/config/ConfigWriteVisitorBase.h>
#include <adapter-util/util/EnumUtil.h>

#include <opendnp3/gen/ControlCode.h>

namespace adapter {

namespace dnp3 {

    class MeasurementConfigWriteVisitor final : public util::ConfigWriteVisitorBase {

    public:
        explicit MeasurementConfigWriteVisitor(YAML::Emitter& out);

    protected:
        // --- mapping functions from base class  ---

        void write_mapped_bool_keys(YAML::Emitter& out) override;

        void write_mapped_int32_keys(YAML::Emitter& out) override;

        void write_mapped_int64_keys(YAML::Emitter& out) override;

        void write_mapped_float_keys(YAML::Emitter& out) override;

        void write_mapped_enum_keys(YAML::Emitter& out, google::protobuf::EnumDescriptor const* descriptor) override;

        void write_mapped_schedule_parameter_keys(YAML::Emitter& out) override;
    };
}
}

#endif
