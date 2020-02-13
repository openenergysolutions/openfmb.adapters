
#ifndef OPENFMB_ADAPTER_DNP3_OUTSTATION_CONTROLCONFIGWRITEVISITOR_H
#define OPENFMB_ADAPTER_DNP3_OUTSTATION_CONTROLCONFIGWRITEVISITOR_H

#include <adapter-api/Exception.h>
#include <adapter-util/config/ConfigWriteVisitorBase.h>
#include <adapter-util/util/EnumUtil.h>

#include <opendnp3/gen/ControlCode.h>

namespace adapter {

namespace dnp3 {

    namespace outstation {

        class ControlConfigWriteVisitor final : public util::ConfigWriteVisitorBase {

        public:
            explicit ControlConfigWriteVisitor(YAML::Emitter& out);

        protected:
            // --- mapping functions from base class  ---

            void write_mapped_bool_keys(YAML::Emitter& out) override;

            void write_mapped_int32_keys(YAML::Emitter& out) override;

            void write_mapped_int64_keys(YAML::Emitter& out) override;

            void write_mapped_float_keys(YAML::Emitter& out) override;

            void
            write_mapped_enum_keys(YAML::Emitter& out, google::protobuf::EnumDescriptor const* descriptor) override;

            void write_mapped_schedule_parameter_keys(YAML::Emitter& out) override;

        private:
            void write_mapped_numeric_keys(YAML::Emitter& out);
        };
    }
}
}

#endif
