
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
        //out << YAML::Key << field_name;
        //out << YAML::BeginSeq;

        return 1;
    }

    void SchemaWriteVisitorBase::start_iteration(int i)
    {
        //out << YAML::BeginMap;
    }

    void SchemaWriteVisitorBase::end_iteration()
    {
        //out << YAML::EndMap;
    }

    void SchemaWriteVisitorBase::end_repeated_message_field()
    {
        //out << YAML::EndSeq;
    }

    void SchemaWriteVisitorBase::handle(const std::string& field_name, BoolFieldType::Value type)
    {
        props.back()->object.properties.emplace_back(
            object_property(
                field_name,
                Required::no,
                "",
                Object({}, OneOf({
                    Variant({ConstantProperty::from_enum<BoolFieldType>(BoolFieldType::Value::ignored)}, {}),
                    Variant({ConstantProperty::from_enum<BoolFieldType>(BoolFieldType::Value::constant)},
                    {
                        bool_property(keys::value, Required::yes, "", false)
                    }),
                    Variant({ConstantProperty::from_enum<BoolFieldType>(BoolFieldType::Value::mapped)}, this->get_mapped_bool_schema())
                }))
            )
        );
    }

    void SchemaWriteVisitorBase::handle(const std::string& field_name, Int32FieldType::Value type)
    {
        props.back()->object.properties.emplace_back(
            object_property(
                field_name,
                Required::no,
                "",
                Object({}, OneOf({
                    Variant({ConstantProperty::from_enum<Int32FieldType>(Int32FieldType::Value::ignored)}, {}),
                    Variant({ConstantProperty::from_enum<Int32FieldType>(Int32FieldType::Value::constant)},
                    {
                        numeric_property<int64_t>(keys::value, Required::yes, "", 0, Bound<int64_t>::unused(), Bound<int64_t>::unused())
                    }),
                    Variant({ConstantProperty::from_enum<Int32FieldType>(Int32FieldType::Value::mapped)}, this->get_mapped_int32_schema())
                }))
            )
        );
    }

    void SchemaWriteVisitorBase::handle(const std::string& field_name, Int64FieldType::Value type)
    {
        props.back()->object.properties.emplace_back(
            object_property(
                field_name,
                Required::no,
                "",
                Object({}, OneOf({
                    Variant({ConstantProperty::from_enum<Int64FieldType>(Int64FieldType::Value::ignored)}, {}),
                    Variant({ConstantProperty::from_enum<Int64FieldType>(Int64FieldType::Value::constant)},
                    {
                        numeric_property<int64_t>(keys::value, Required::yes, "", 0, Bound<int64_t>::unused(), Bound<int64_t>::unused())
                    }),
                    Variant({ConstantProperty::from_enum<Int64FieldType>(Int64FieldType::Value::mapped)}, this->get_mapped_int64_schema())
                }))
            )
        );
    }

    void SchemaWriteVisitorBase::handle(const std::string& field_name, FloatFieldType::Value type)
    {
        props.back()->object.properties.emplace_back(
            object_property(
                field_name,
                Required::no,
                "",
                Object({}, OneOf({
                    Variant({ConstantProperty::from_enum<FloatFieldType>(FloatFieldType::Value::ignored)}, {}),
                    Variant({ConstantProperty::from_enum<FloatFieldType>(FloatFieldType::Value::constant)},
                    {
                        numeric_property<float>(keys::value, Required::yes, "", 0, Bound<float>::unused(), Bound<float>::unused())
                    }),
                    Variant({ConstantProperty::from_enum<FloatFieldType>(FloatFieldType::Value::mapped)}, this->get_mapped_string_schema())
                }))
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
        }
        else if(type == StringFieldType::Value::generated_uuid) {
            props.back()->object.properties.emplace_back(
                object_property(
                    field_name,
                    Required::no,
                    "",
                    Object({
                        enum_property<StringFieldType>({StringFieldType::Value::generated_uuid}, Required::yes, "", StringFieldType::Value::generated_uuid)
                    })
                )
            );
        }
        else {
            props.back()->object.properties.emplace_back(
                object_property(
                    field_name,
                    Required::no,
                    "",
                    Object({}, OneOf{
                        Variant({ConstantProperty::from_enum<StringFieldType>(StringFieldType::Value::ignored)}, {}),
                        Variant({ConstantProperty::from_enum<StringFieldType>(StringFieldType::Value::constant_uuid)},
                        {
                            string_property(
                                keys::value,
                                Required::yes,
                                "",
                                "",
                                StringFormat::Uuid
                            )
                        }),
                        Variant({ConstantProperty::from_enum<StringFieldType>(StringFieldType::Value::constant)},
                        {
                            string_property(
                                keys::value,
                                Required::yes,
                                "",
                                "",
                                StringFormat::None
                            )
                        }),
                        Variant({ConstantProperty::from_enum<StringFieldType>(StringFieldType::Value::mapped)}, this->get_mapped_string_schema())
                    })
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

        props.back()->object.properties.emplace_back(
            object_property(
                field_name,
                Required::no,
                "",
                Object({}, OneOf({
                    Variant({ConstantProperty::from_enum<EnumFieldType>(EnumFieldType::Value::ignored)}, {}),
                    Variant({ConstantProperty::from_enum<EnumFieldType>(EnumFieldType::Value::constant)},
                    {
                        enum_property(keys::value, get_enum_variants_from_proto(descriptor), Required::yes, "", "")
                    }),
                    Variant({ConstantProperty::from_enum<EnumFieldType>(EnumFieldType::Value::mapped)}, this->get_mapped_enum_schema(descriptor))
                }))
            )
        );
    }

    void SchemaWriteVisitorBase::handle(const std::string& field_name, QualityFieldType::Value type)
    {
        props.back()->object.properties.emplace_back(
            object_property(
                field_name,
                Required::no,
                "",
                Object({}, OneOf({
                    Variant({ConstantProperty::from_enum<QualityFieldType>(QualityFieldType::Value::ignored)}, {}),
                    Variant({ConstantProperty::from_enum<QualityFieldType>(QualityFieldType::Value::mapped)}, this->get_mapped_commonmodule_quality_schema())
                }))
            )
        );
    }

    void SchemaWriteVisitorBase::handle(const std::string& field_name, TimestampFieldType::Value type)
    {
        props.back()->object.properties.emplace_back(
            object_property(
                field_name,
                Required::no,
                "",
                Object({}, OneOf({
                    Variant({ConstantProperty::from_enum<TimestampFieldType>(TimestampFieldType::Value::ignored)}, {}),
                    Variant({ConstantProperty::from_enum<TimestampFieldType>(TimestampFieldType::Value::message)}, {}),
                    Variant({ConstantProperty::from_enum<TimestampFieldType>(TimestampFieldType::Value::mapped)}, this->get_mapped_commonmodule_timestamp_schema())
                }))
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
                    Variant({ConstantProperty::from_enum<ControlTimestampFieldType>(ControlTimestampFieldType::Value::ignored)}, {})
                }))
            )
        );
    }

    void SchemaWriteVisitorBase::handle_repeated_schedule_parameter(const std::string& field_name)
    {
        //out << YAML::Key << field_name << YAML::Comment("A sequence of schedule parameters w/ enum + value. Each plugin specifies what to do with each enumeration value");
        //out << YAML::BeginSeq;

        for (int i = 0; i < commonmodule::ScheduleParameterKind_descriptor()->value_count(); ++i) {
            //out << YAML::BeginMap;
            //out << YAML::Key << keys::scheduleParameterType << YAML::Value << commonmodule::ScheduleParameterKind_descriptor()->value(i)->name();
            this->get_mapped_schedule_parameter_schema();
            //out << YAML::EndMap;
        }

        //out << YAML::EndSeq;
    }

}
}
