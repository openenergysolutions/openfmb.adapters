#ifndef OPENFMB_ADAPTER_GOOSE_SUB_SUBSCRIBINGCONFIGWRITEVISITOR_H
#define OPENFMB_ADAPTER_GOOSE_SUB_SUBSCRIBINGCONFIGWRITEVISITOR_H

#include "adapter-util/config/ConfigWriteVisitorBase.h"

namespace adapter {
namespace goose {

    class SubscribingConfigWriteVisitor final : public util::ConfigWriteVisitorBase {

    public:
        explicit SubscribingConfigWriteVisitor(YAML::Emitter& out);

    protected:
        void write_mapped_bool_keys(YAML::Emitter& out) final;
        void write_mapped_int32_keys(YAML::Emitter& out) final;
        void write_mapped_int64_keys(YAML::Emitter& out) final;
        void write_mapped_float_keys(YAML::Emitter& out) final;
        void write_mapped_string_keys(YAML::Emitter& out) final;
        void write_mapped_enum_keys(YAML::Emitter& out, google::protobuf::EnumDescriptor const* descriptor) final;
        void write_mapped_commonmodule_quality_keys(YAML::Emitter& out) final;
        void write_mapped_commonmodule_timestamp_keys(YAML::Emitter& out) final;

        // control profiles not required for GOOSE
        void write_mapped_schedule_parameter_keys(YAML::Emitter& out) final;

    private:
        void write_name(YAML::Emitter& out);
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_SUB_SUBSCRIBINGCONFIGWRITEVISITOR_H
