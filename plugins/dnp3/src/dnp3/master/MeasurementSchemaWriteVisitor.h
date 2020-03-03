
#ifndef OPENFMB_ADAPTER_DNP3_MASTER_MEASUREMENTSCHEMAWRITEVISITOR_H
#define OPENFMB_ADAPTER_DNP3_MASTER_MEASUREMENTSCHEMAWRITEVISITOR_H

#include <adapter-api/Exception.h>
#include <adapter-util/config/SchemaWriteVisitorBase.h>
#include <adapter-util/util/EnumUtil.h>

#include <opendnp3/gen/ControlCode.h>

namespace adapter {
namespace dnp3 {
namespace master {

    class MeasurementSchemaWriteVisitor final : public util::SchemaWriteVisitorBase {

    public:
        MeasurementSchemaWriteVisitor();

    protected:
        // --- mapping functions from base class  ---

        std::shared_ptr<schema::Object> get_mapped_bool_schema() override;

        std::shared_ptr<schema::Object> get_mapped_int32_schema() override;

        std::shared_ptr<schema::Object> get_mapped_int64_schema() override;

        std::shared_ptr<schema::Object> get_mapped_float_schema() override;

        std::shared_ptr<schema::Object> get_mapped_enum_schema(google::protobuf::EnumDescriptor const* descriptor) override;

        std::shared_ptr<schema::Object> get_mapped_schedule_parameter_schema() override;
    };

}
}
}

#endif
