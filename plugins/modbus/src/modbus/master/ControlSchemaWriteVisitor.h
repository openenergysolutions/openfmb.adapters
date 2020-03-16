
#ifndef OPENFMB_ADAPTER_MODBUS_MASTER_CONTROLSCHEMAWRITEVISITOR_H
#define OPENFMB_ADAPTER_MODBUS_MASTER_CONTROLSCHEMAWRITEVISITOR_H

#include <adapter-api/Exception.h>
#include <adapter-util/config/SchemaWriteVisitorBase.h>
#include <adapter-util/util/EnumUtil.h>

namespace adapter {
namespace modbus {
namespace master {

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

        std::shared_ptr<schema::Object> get_mapped_schedule_parameter_schema() override;

    private:
        schema::Object get_action_schema();
        std::shared_ptr<schema::Object> get_numeric_schema();
    };

}
}
}

#endif