#ifndef OPENFMB_ADAPTER_GOOSE_MEASUREMENTCONFIGWRITEVISITOR_H
#define OPENFMB_ADAPTER_GOOSE_MEASUREMENTCONFIGWRITEVISITOR_H

#include "adapter-api/config/ConfigWriteVisitorBase.h"

namespace adapter
{
namespace goose
{

class MeasurementConfigWriteVisitor final : public ConfigWriteVisitorBase {

public:
    explicit MeasurementConfigWriteVisitor(YAML::Emitter& out);

protected:
    void write_mapped_bool_keys(YAML::Emitter& out) override;
    void write_mapped_int32_keys(YAML::Emitter& out) override;
    void write_mapped_int64_keys(YAML::Emitter& out) override;
    void write_mapped_float_keys(YAML::Emitter& out) override;
    void write_mapped_enum_keys(YAML::Emitter& out, google::protobuf::EnumDescriptor const* descriptor) override;
};

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_MEASUREMENTCONFIGWRITEVISITOR_H
