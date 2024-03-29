// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_ICCP_CLIENTSCHEMAWRITERVISITOR_H
#define OPENFMB_ADAPTER_ICCP_CLIENTSCHEMAWRITERVISITOR_H


#include "adapter-util/config/SchemaWriteVisitorBase.h"

namespace adapter {
    namespace iccp {

        class ClientSchemaWriteVisitor final : public util::SchemaWriteVisitorBase {

        public:
            explicit ClientSchemaWriteVisitor();

        protected:
            std::shared_ptr<schema::Object> get_mapped_bool_schema() override;
            std::shared_ptr<schema::Object> get_mapped_int32_schema() override;
            std::shared_ptr<schema::Object> get_mapped_int64_schema() override;
            std::shared_ptr<schema::Object> get_mapped_float_schema() override;
            std::shared_ptr<schema::Object> get_mapped_double_schema() override;
            std::shared_ptr<schema::Object> get_mapped_string_schema() override;
            std::shared_ptr<schema::Object> get_mapped_enum_schema(google::protobuf::EnumDescriptor const* descriptor) override;
            std::shared_ptr<schema::Object> get_mapped_commonmodule_quality_schema() override;
            std::shared_ptr<schema::Object> get_mapped_commonmodule_timestamp_schema() override;

        private:
            std::shared_ptr<schema::Object> get_name_schema(bool with_scale = true);
        };
    }
}

#endif //OPENFMB_ADAPTER_ICCP_CLIENTSCHEMAWRITERVISITOR_H
