// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "adapter-util/config/SchemaWriteVisitorBase.h"
#include <adapter-api/Exception.h>
#include <schema-util/Builder.h>

#include <proto-api/commonmodule/commonmodule.pb.h>
#include <proto-api/essmodule/essmodule.pb.h>

#include "adapter-util/ConfigStrings.h"

using namespace adapter::schema;

namespace adapter {
namespace util {

    SchemaWriteVisitorBase::SchemaWriteVisitorBase()
    {
        props.emplace_back(
            object_property(
            "mapping",
            Required::no,
            "mappings",
            Object({})
        ));
    }

    Object SchemaWriteVisitorBase::get_schema()
    {
        return Object(props.front()->object);
    }

    bool SchemaWriteVisitorBase::start_message_field(const std::string& field_name, google::protobuf::Descriptor const* descriptor)
    {
        std::string description = "";
        google::protobuf::SourceLocation source_loc{};
        if(descriptor->GetSourceLocation(&source_loc)) {
            description = source_loc.leading_comments;
        }

        auto obj = object_property(
            field_name,
            Required::yes,
            description,
            Object({})
        );

        props.back()->object.properties.push_back(obj);
        props.push_back(obj);

        return true;
    }

    void SchemaWriteVisitorBase::end_message_field()
    {
        props.pop_back();
    }

    int SchemaWriteVisitorBase::start_repeated_message_field(const std::string& field_name, google::protobuf::Descriptor const* descriptor)
    {
        std::string description = "";
        google::protobuf::SourceLocation source_loc{};
        if(descriptor->GetSourceLocation(&source_loc)) {
            description = source_loc.leading_comments;
        }

        auto array_prop = array_property(
            field_name,
            Required::no,
            description,
            Object({})
        );

        props.back()->object.properties.push_back(array_prop);
        props.push_back(std::dynamic_pointer_cast<ObjectProperty>(array_prop->array_items));

        return 1;
    }

    void SchemaWriteVisitorBase::start_iteration(int i)
    {

    }

    void SchemaWriteVisitorBase::end_iteration()
    {

    }

    void SchemaWriteVisitorBase::end_repeated_message_field()
    {
        props.pop_back();
    }

    void SchemaWriteVisitorBase::handle(const std::string& field_name, BoolFieldType::Value type)
    {
        auto obj = Object({}, OneOf({
            variant<BoolFieldType>(BoolFieldType::Value::ignored, type, {}),
            variant<BoolFieldType>(BoolFieldType::Value::constant, type,
            {
                bool_property(keys::value, Required::yes, "", false)
            })
        }));

        const auto mapped_schema = this->get_mapped_bool_schema();
        if(mapped_schema) {
            obj.one_of.variants.push_back(
                variant_obj<BoolFieldType>(BoolFieldType::Value::mapped, type, mapped_schema)
            );
        }

        props.back()->object.properties.emplace_back(
            object_property(
                field_name,
                Required::no,
                "",
                obj
            )
        );
    }

    void SchemaWriteVisitorBase::handle(const std::string& field_name, Int32FieldType::Value type)
    {
        auto obj = Object({}, OneOf({
            variant<Int32FieldType>(Int32FieldType::Value::ignored, type, {}),
            variant<Int32FieldType>(Int32FieldType::Value::constant, type,
            {
                numeric_property<int64_t>(keys::value, Required::yes, "", 0, Bound<int64_t>::unused(), Bound<int64_t>::unused())
            })
        }));

        const auto mapped_schema = this->get_mapped_int32_schema();
        if(mapped_schema) {
            obj.one_of.variants.push_back(
                variant_obj<Int32FieldType>(Int32FieldType::Value::mapped, type, mapped_schema)
            );
        }

        props.back()->object.properties.emplace_back(
            object_property(
                field_name,
                Required::no,
                "",
                obj
            )
        );
    }

    void SchemaWriteVisitorBase::handle(const std::string& field_name, Int64FieldType::Value type)
    {
        auto obj = Object({}, OneOf({
            variant<Int64FieldType>(Int64FieldType::Value::ignored, type, {}),
            variant<Int64FieldType>(Int64FieldType::Value::constant, type,
            {
                numeric_property<int64_t>(keys::value, Required::yes, "", 0, Bound<int64_t>::unused(), Bound<int64_t>::unused())
            })
        }));

        const auto mapped_schema = this->get_mapped_int64_schema();
        if(mapped_schema) {
            obj.one_of.variants.push_back(
                variant_obj<Int64FieldType>(Int64FieldType::Value::mapped, type, mapped_schema)
            );
        }

        props.back()->object.properties.emplace_back(
            object_property(
                field_name,
                Required::no,
                "",
                obj
            )
        );
    }

    void SchemaWriteVisitorBase::handle(const std::string& field_name, FloatFieldType::Value type)
    {
        auto obj = Object({}, OneOf({
            variant<FloatFieldType>(FloatFieldType::Value::ignored, type, {}),
            variant<FloatFieldType>(FloatFieldType::Value::constant, type,
            {
                numeric_property<float>(keys::value, Required::yes, "", 0, Bound<float>::unused(), Bound<float>::unused())
            })
        }));

        const auto mapped_schema = this->get_mapped_float_schema();
        if(mapped_schema) {
            obj.one_of.variants.push_back(
                variant_obj<FloatFieldType>(FloatFieldType::Value::mapped, type, mapped_schema)
            );
        }

        props.back()->object.properties.emplace_back(
            object_property(
                field_name,
                Required::no,
                "",
                obj
            )
        );
    }

    void SchemaWriteVisitorBase::handle(const std::string& field_name, DoubleFieldType::Value type)
    {
        auto obj = Object({}, OneOf({
            variant<DoubleFieldType>(DoubleFieldType::Value::ignored, type, {}),
            variant<DoubleFieldType>(DoubleFieldType::Value::constant, type,
            {
                numeric_property<double>(keys::value, Required::yes, "", 0, Bound<double>::unused(), Bound<double>::unused())
            })
        }));

        const auto mapped_schema = this->get_mapped_double_schema();
        if(mapped_schema) {
            obj.one_of.variants.push_back(
                variant_obj<DoubleFieldType>(DoubleFieldType::Value::mapped, type, mapped_schema)
            );
        }

        props.back()->object.properties.emplace_back(
            object_property(
                field_name,
                Required::no,
                "",
                obj
            )
        );
    }


    void SchemaWriteVisitorBase::handle(const std::string& field_name, StringFieldType::Value type)
    {
        if(type == StringFieldType::Value::primary_uuid) {
            props.back()->object.properties.emplace_back(
                object_property(
                    field_name,
                    Required::yes,
                    "",
                    Object({
                        enum_property<StringFieldType>({StringFieldType::Value::primary_uuid}, Required::yes, "", StringFieldType::Value::primary_uuid),
                        string_property(
                            keys::value,
                            Required::yes,
                            "",
                            "",
                            StringFormat::Uuid
                        )
                    })
                )
            );

            recursive_required();
        }
        else if(type == StringFieldType::Value::generated_uuid) {
            props.back()->object.properties.emplace_back(
                object_property(
                    field_name,
                    Required::yes,
                    "",
                    Object({
                        enum_property<StringFieldType>({StringFieldType::Value::generated_uuid}, Required::yes, "", StringFieldType::Value::generated_uuid)
                    })
                )
            );

            recursive_required();
        }
        else {
            auto obj = Object({}, OneOf({
                variant<StringFieldType>(StringFieldType::Value::ignored, type, {}),
                variant<StringFieldType>(StringFieldType::Value::constant_uuid, type,
                {
                    string_property(
                        keys::value,
                        Required::yes,
                        "",
                        "",
                        StringFormat::Uuid
                    )
                }),
                variant<StringFieldType>(StringFieldType::Value::constant, type,
                {
                    string_property(
                        keys::value,
                        Required::yes,
                        "",
                        "",
                        StringFormat::None
                    )
                })
            }));

            const auto mapped_schema = this->get_mapped_string_schema();
            if(mapped_schema) {
                obj.one_of.variants.push_back(
                    variant_obj<StringFieldType>(StringFieldType::Value::mapped, type, mapped_schema)
                );
            }

            props.back()->object.properties.emplace_back(
                object_property(
                    field_name,
                    Required::no,
                    "",
                    obj
                )
            );
        }
    }

    void SchemaWriteVisitorBase::handle(const std::string& field_name, google::protobuf::EnumDescriptor const* descriptor, EnumFieldType::Value type)
    {
        auto enum_variants = std::vector<std::string>{};
        for(auto i = 0; i < descriptor->value_count(); ++i) {
            enum_variants.emplace_back(descriptor->value(i)->name());
        }

        auto obj = Object({}, OneOf({
            variant<EnumFieldType>(EnumFieldType::Value::ignored, type, {}),
            variant<EnumFieldType>(EnumFieldType::Value::constant, type,
            {
                enum_property(keys::value, get_enum_variants_from_proto(descriptor), Required::yes, "", "")
            })
        }));

        const auto mapped_schema = this->get_mapped_enum_schema(descriptor);
        if(mapped_schema) {
            obj.one_of.variants.push_back(
                variant_obj<EnumFieldType>(EnumFieldType::Value::mapped, type, mapped_schema)
            );
        }

        props.back()->object.properties.emplace_back(
            object_property(
                field_name,
                Required::no,
                "",
                obj
            )
        );
    }

    void SchemaWriteVisitorBase::handle(const std::string& field_name, QualityFieldType::Value type)
    {
        auto obj = Object({}, OneOf({
            variant<QualityFieldType>(QualityFieldType::Value::ignored, type, {})
        }));

        const auto mapped_schema = this->get_mapped_commonmodule_quality_schema();
        if(mapped_schema) {
            obj.one_of.variants.push_back(
                variant_obj<QualityFieldType>(QualityFieldType::Value::mapped, type, mapped_schema)
            );
        }

        props.back()->object.properties.emplace_back(
            object_property(
                field_name,
                Required::no,
                "",
                obj
            )
        );
    }

    void SchemaWriteVisitorBase::handle(const std::string& field_name, TimestampFieldType::Value type)
    {
        auto obj = Object({}, OneOf({
            variant<TimestampFieldType>(TimestampFieldType::Value::ignored, type, {}),
            variant<TimestampFieldType>(TimestampFieldType::Value::message, type, {})
        }));

        const auto mapped_schema = this->get_mapped_commonmodule_timestamp_schema();
        if(mapped_schema) {
            obj.one_of.variants.push_back(
                variant_obj<TimestampFieldType>(TimestampFieldType::Value::mapped, type, mapped_schema)
            );
        }

        props.back()->object.properties.emplace_back(
            object_property(
                field_name,
                Required::no,
                "",
                obj
            )
        );
    }

    void SchemaWriteVisitorBase::handle(const std::string& field_name, ControlTimestampFieldType::Value type)
    {
        props.back()->object.properties.emplace_back(
            object_property(
                field_name,
                Required::no,
                "",
                Object({}, OneOf({
                    variant<ControlTimestampFieldType>(ControlTimestampFieldType::Value::ignored, type, {})
                }))
            )
        );
    }

    void SchemaWriteVisitorBase::handle(const std::string& field_name, ClearingTimeFieldType::Value type)
    {
        auto obj = Object({}, OneOf({
            variant<ClearingTimeFieldType>(ClearingTimeFieldType::Value::ignored, type, {}),
            variant<ClearingTimeFieldType>(ClearingTimeFieldType::Value::message, type, {})
        }));

        const auto mapped_schema = this->get_mapped_commonmodule_clearingtime_schema();
        if(mapped_schema) {
            obj.one_of.variants.push_back(
                variant_obj<ClearingTimeFieldType>(ClearingTimeFieldType::Value::mapped, type, mapped_schema)
            );
        }

        props.back()->object.properties.emplace_back(
            object_property(
                field_name,
                Required::no,
                "",
                obj
            )
        );
    }

    void SchemaWriteVisitorBase::handle_repeated_schedule_parameter(const std::string& field_name)
    {
        const auto mapped_schema = this->get_mapped_schedule_parameter_schema();
        if(!mapped_schema) {
            return;
        }

        auto oneof = OneOf({});
        for (int i = 0; i < commonmodule::ScheduleParameterKind_descriptor()->value_count(); ++i) {
            oneof.variants.push_back(
                Variant(
                    {ConstantProperty(keys::scheduleParameterType, commonmodule::ScheduleParameterKind_descriptor()->value(i)->name())},
                    mapped_schema
                )
            );
        }

        props.back()->object.properties.emplace_back(
            array_property(
                field_name,
                Required::no,
                "A sequence of schedule parameters with enum + value. Each plugin specifies what to do with each enumeration value",
                Object(std::vector<property_ptr_t>(), std::move(oneof))
            )
        );
    }

    void SchemaWriteVisitorBase::recursive_required()
    {
        for(auto& prop : props) {
            prop->set_required();
        }
    }

    BoolFieldType::Value SchemaWriteVisitorBase::remap(BoolFieldType::Value type)
    {
        switch (type) {
        // it's impossible to provide intelligent defaults for constants, so let the user override it if they want a constant
        case (BoolFieldType::Value::constant):
            return BoolFieldType::Value::ignored;
        default:
            return type;
        }
    }

    Int32FieldType::Value SchemaWriteVisitorBase::remap(Int32FieldType::Value type)
    {
        switch (type) {
        // it's impossible to provide intelligent defaults for constants, so let the user override it if they want a constant
        case (Int32FieldType::Value::constant):
            return Int32FieldType::Value::ignored;
        default:
            return type;
        }
    }

    Int64FieldType::Value SchemaWriteVisitorBase::remap(Int64FieldType::Value type)
    {
        switch (type) {
        // it's impossible to provide intelligent defaults for constants, so let the user override it if they want a constant
        case (Int64FieldType::Value::constant):
            return Int64FieldType::Value::ignored;
        default:
            return type;
        }
    }

    FloatFieldType::Value SchemaWriteVisitorBase::remap(FloatFieldType::Value type)
    {
        switch (type) {
        // it's impossible to provide intelligent defaults for constants, so let the user override it if they want a constant
        case (FloatFieldType::Value::constant):
            return FloatFieldType::Value::ignored;
        default:
            return type;
        }
    }

    DoubleFieldType::Value SchemaWriteVisitorBase::remap(DoubleFieldType::Value type)
    {
        switch (type) {
        // it's impossible to provide intelligent defaults for constants, so let the user override it if they want a constant
        case (DoubleFieldType::Value::constant):
            return DoubleFieldType::Value::ignored;
        default:
            return type;
        }
    }

    StringFieldType::Value SchemaWriteVisitorBase::remap(StringFieldType::Value type)
    {
        switch (type) {
        // it's impossible to provide intelligent defaults for constants, so let the user override it if they want a constant
        case (StringFieldType::Value::constant):
        case (StringFieldType::Value::constant_uuid):
            return StringFieldType::Value::ignored;
        default:
            return type;
        }
    }

    EnumFieldType::Value SchemaWriteVisitorBase::remap(EnumFieldType::Value type)
    {
        switch (type) {
        // it's impossible to provide intelligent defaults for constants, so let the user override it if they want a constant
        case (EnumFieldType::Value::constant):
            return EnumFieldType::Value::ignored;
        default:
            return type;
        }
    }

    QualityFieldType::Value SchemaWriteVisitorBase::remap(QualityFieldType::Value type)
    {
        switch (type) {
        default:
            return type;
        }
    }

    TimestampFieldType::Value SchemaWriteVisitorBase::remap(TimestampFieldType::Value type)
    {
        switch (type) {
        default:
            return type;
        }
    }

    ControlTimestampFieldType::Value SchemaWriteVisitorBase::remap(ControlTimestampFieldType::Value type)
    {
        switch (type) {
        default:
            return type;
        }
    }

    ClearingTimeFieldType::Value SchemaWriteVisitorBase::remap(ClearingTimeFieldType::Value type)
    {
        switch (type) {
        default:
            return type;
        }
    }

}
}
