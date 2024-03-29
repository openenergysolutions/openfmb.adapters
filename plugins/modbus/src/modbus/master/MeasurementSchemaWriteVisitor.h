// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_MODBUS_MASTER_MEASUREMENTSCHEMAWRITEVISITOR_H
#define OPENFMB_ADAPTER_MODBUS_MASTER_MEASUREMENTSCHEMAWRITEVISITOR_H

#include <adapter-api/Exception.h>
#include <adapter-util/config/SchemaWriteVisitorBase.h>
#include <adapter-util/util/EnumUtil.h>

namespace adapter {
namespace modbus {
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

        std::shared_ptr<schema::Object> get_mapped_double_schema() override;

        std::shared_ptr<schema::Object> get_mapped_enum_schema(google::protobuf::EnumDescriptor const* descriptor) override;

    private:
        std::shared_ptr<schema::Object> get_numeric_schema();
    };

}
}
}

#endif
