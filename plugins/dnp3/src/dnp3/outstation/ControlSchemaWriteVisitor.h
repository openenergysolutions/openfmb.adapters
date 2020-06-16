
#ifndef OPENFMB_ADAPTER_DNP3_OUTSTATION_CONTROLSCHEMAWRITEVISITOR_H
#define OPENFMB_ADAPTER_DNP3_OUTSTATION_CONTROLSCHEMAWRITEVISITOR_H

#include <adapter-api/Exception.h>
#include <adapter-util/config/SchemaWriteVisitorBase.h>
#include <adapter-util/util/EnumUtil.h>

namespace adapter {
namespace dnp3 {
namespace outstation {

    class ControlSchemaWriteVisitor final : public util::SchemaWriteVisitorBase {

    public:
        ControlSchemaWriteVisitor();

    protected:
        // --- mapping functions from base class  ---

        std::shared_ptr<schema::Object> get_mapped_bool_schema() override;

        std::shared_ptr<schema::Object> get_mapped_int32_schema() override;

        std::shared_ptr<schema::Object> get_mapped_int64_schema() override;

        std::shared_ptr<schema::Object> get_mapped_float_schema() override;

        std::shared_ptr<schema::Object> get_mapped_enum_schema(google::protobuf::EnumDescriptor const* descriptor) override;

    private:
        std::shared_ptr<schema::Object> get_numeric_schema();
    };

}
}
}

#endif
