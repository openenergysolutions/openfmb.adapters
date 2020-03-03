

#ifndef OPENFMB_ADAPTER_SCHEMAWRITEVISITORBASE_H
#define OPENFMB_ADAPTER_SCHEMAWRITEVISITORBASE_H

#include "IModelVisitor.h"

#include <adapter-util/config/generated/BoolFieldType.h>
#include <adapter-util/config/generated/EnumFieldType.h>
#include <adapter-util/config/generated/FloatFieldType.h>
#include <adapter-util/config/generated/Int32FieldType.h>
#include <adapter-util/config/generated/Int64FieldType.h>
#include <adapter-util/config/generated/StringFieldType.h>

#include <schema-util/Types.h>

#include "DescriptorPath.h"

namespace adapter {
namespace util {

    class SchemaWriteVisitorBase : public IModelVisitor {

        std::vector<std::shared_ptr<schema::ObjectProperty>> props;

    protected:
        /// ---- handlers for writing protocol specific mappings ----

        virtual std::shared_ptr<schema::Object> get_mapped_bool_schema() = 0;

        virtual std::shared_ptr<schema::Object> get_mapped_int32_schema() = 0;

        virtual std::shared_ptr<schema::Object> get_mapped_int64_schema() = 0;

        virtual std::shared_ptr<schema::Object> get_mapped_float_schema() = 0;

        virtual std::shared_ptr<schema::Object> get_mapped_string_schema() { return std::make_shared<schema::Object>(std::vector<schema::property_ptr_t>()); }

        virtual std::shared_ptr<schema::Object> get_mapped_enum_schema(google::protobuf::EnumDescriptor const* descriptor) = 0;

        virtual std::shared_ptr<schema::Object> get_mapped_commonmodule_quality_schema() { return std::make_shared<schema::Object>(std::vector<schema::property_ptr_t>()); }

        virtual std::shared_ptr<schema::Object> get_mapped_commonmodule_timestamp_schema() { return std::make_shared<schema::Object>(std::vector<schema::property_ptr_t>()); }

        virtual std::shared_ptr<schema::Object> get_mapped_schedule_parameter_schema() = 0;

    public:
        SchemaWriteVisitorBase();

        schema::Object get_schema();

        // --- final handlers for message fields ---

        bool start_message_field(const std::string& field_name, google::protobuf::Descriptor const* descriptor) final;

        void end_message_field() final;

        int start_repeated_message_field(const std::string& field_name, google::protobuf::Descriptor const* descriptor) final;

        void start_iteration(int i) final;

        void end_iteration() final;

        void end_repeated_message_field() final;

        // --- final handlers for primitive fields ---

        void handle(const std::string& field_name, BoolFieldType::Value type) final;

        void handle(const std::string& field_name, Int32FieldType::Value type) final;

        void handle(const std::string& field_name, Int64FieldType::Value type) final;

        void handle(const std::string& field_name, FloatFieldType::Value type) final;

        void handle(const std::string& field_name, StringFieldType::Value type) final;

        void handle(const std::string& field_name, google::protobuf::EnumDescriptor const* descriptor, EnumFieldType::Value type) final;

        // --- final handlers for terminal message fields ---

        void handle(const std::string& field_name, QualityFieldType::Value type) final;

        void handle(const std::string& field_name, TimestampFieldType::Value type) final;

        void handle(const std::string& field_name, ControlTimestampFieldType::Value type) final;

        void handle_repeated_schedule_parameter(const std::string& field_name) final;

        static std::vector<std::string> get_enum_variants_from_proto(google::protobuf::EnumDescriptor const* descriptor) {
            auto enum_variants = std::vector<std::string>{};
            for(auto i = 0; i < descriptor->value_count(); ++i) {
                enum_variants.emplace_back(descriptor->value(i)->name());
            }
            return enum_variants;
        }
    };
}
}

#endif
