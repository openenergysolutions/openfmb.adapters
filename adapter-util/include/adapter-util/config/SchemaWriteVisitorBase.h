

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

        virtual std::shared_ptr<schema::Object> get_mapped_bool_schema() { return nullptr; };

        virtual std::shared_ptr<schema::Object> get_mapped_int32_schema() { return nullptr; };

        virtual std::shared_ptr<schema::Object> get_mapped_int64_schema() { return nullptr; };

        virtual std::shared_ptr<schema::Object> get_mapped_float_schema() { return nullptr; };

        virtual std::shared_ptr<schema::Object> get_mapped_string_schema() { return nullptr; }

        virtual std::shared_ptr<schema::Object> get_mapped_enum_schema(google::protobuf::EnumDescriptor const* descriptor) { return nullptr; };

        virtual std::shared_ptr<schema::Object> get_mapped_commonmodule_quality_schema() { return nullptr; }

        virtual std::shared_ptr<schema::Object> get_mapped_commonmodule_timestamp_schema() { return nullptr; }

        virtual std::shared_ptr<schema::Object> get_mapped_schedule_parameter_schema() { return nullptr; };

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

    private:
        void recursive_required();

        static BoolFieldType::Value remap(BoolFieldType::Value type);
        static Int32FieldType::Value remap(Int32FieldType::Value type);
        static Int64FieldType::Value remap(Int64FieldType::Value type);
        static FloatFieldType::Value remap(FloatFieldType::Value type);
        static StringFieldType::Value remap(StringFieldType::Value type);
        static EnumFieldType::Value remap(EnumFieldType::Value type);
        static QualityFieldType::Value remap(QualityFieldType::Value type);
        static TimestampFieldType::Value remap(TimestampFieldType::Value type);
        static ControlTimestampFieldType::Value remap(ControlTimestampFieldType::Value type);

        template <typename T>
        schema::Variant variant_obj(typename T::Value value, typename T::Value mapped_value, std::shared_ptr<schema::Object> obj) const
        {
            schema::Default is_default = (value == remap(mapped_value)) ? schema::Default::yes : schema::Default::no;
            return schema::Variant({schema::ConstantProperty::from_enum<T>(value)}, obj, is_default);
        }

        template <typename T>
        schema::Variant variant(typename T::Value value, typename T::Value mapped_value, std::vector<schema::property_ptr_t> props) const
        {
            return variant_obj<T>(value, mapped_value, std::make_shared<Object>(props));
        }
    };
}
}

#endif
