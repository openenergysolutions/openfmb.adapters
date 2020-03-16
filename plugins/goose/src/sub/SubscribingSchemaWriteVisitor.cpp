#include "sub/SubscribingSchemaWriteVisitor.h"

#include "ConfigStrings.h"
#include "adapter-api/Exception.h"
#include "adapter-util/ConfigStrings.h"
#include "schema-util/Builder.h"

#include "generated/QualityMappingType.h"

using namespace adapter::schema;

namespace adapter {
namespace goose {

    SubscribingSchemaWriteVisitor::SubscribingSchemaWriteVisitor()
    {
    }

    std::shared_ptr<schema::Object> SubscribingSchemaWriteVisitor::get_mapped_bool_schema()
    {
        return get_name_schema();
    }

    std::shared_ptr<schema::Object> SubscribingSchemaWriteVisitor::get_mapped_int32_schema()
    {
        return get_name_schema();
    }

    std::shared_ptr<schema::Object> SubscribingSchemaWriteVisitor::get_mapped_int64_schema()
    {
        return get_name_schema();
    }

    std::shared_ptr<schema::Object> SubscribingSchemaWriteVisitor::get_mapped_float_schema()
    {
        return get_name_schema();
    }

    std::shared_ptr<schema::Object> SubscribingSchemaWriteVisitor::get_mapped_string_schema()
    {
        return get_name_schema();
    }

    std::shared_ptr<schema::Object> SubscribingSchemaWriteVisitor::get_mapped_enum_schema(google::protobuf::EnumDescriptor const* descriptor)
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>({
            string_property(
                keys::name,
                Required::yes,
                "Name of the property in the GOOSE mapping",
                "",
                StringFormat::None
            ),
            array_property(
                util::keys::mapping,
                Required::yes,
                "Mapping of the enum variants",
                Object({
                    enum_property(
                        util::keys::name,
                        get_enum_variants_from_proto(descriptor),
                        Required::yes,
                        "OpenFMB enum variant",
                        descriptor->value(0)->name()
                    ),
                    string_property(
                        util::keys::value,
                        Required::yes,
                        "Bitstring value",
                        "0001",
                        StringFormat::BitString
                    )
                })
            )
        }));
    }

    std::shared_ptr<schema::Object> SubscribingSchemaWriteVisitor::get_mapped_commonmodule_quality_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>({
            string_property(
                keys::name,
                Required::yes,
                "Name of the property in the GOOSE mapping",
                "",
                StringFormat::None
            )
        }), OneOf({
            Variant({ConstantProperty::from_enum<QualityMappingType>(QualityMappingType::Value::copy)}, {}),
            Variant({ConstantProperty::from_enum<QualityMappingType>(QualityMappingType::Value::constant)}, {
                string_property(
                    keys::quality_id,
                    Required::yes,
                    "Quality template ID",
                    "some-quality-template",
                    StringFormat::None
                )
            }),
            Variant({ConstantProperty::from_enum<QualityMappingType>(QualityMappingType::Value::constant_if_absent)}, {
                string_property(
                    keys::quality_id,
                    Required::yes,
                    "Quality template ID",
                    "some-quality-template",
                    StringFormat::None
                )
            })
        }));
    }

    std::shared_ptr<schema::Object> SubscribingSchemaWriteVisitor::get_mapped_commonmodule_timestamp_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>({
            string_property(
                keys::name,
                Required::yes,
                "Name of the property in the GOOSE mapping",
                "",
                StringFormat::None
            ),
            string_property(
                keys::timequality_name,
                Required::no,
                "Name of the property in the GOOSE mapping",
                "",
                StringFormat::None
            )
        }), OneOf({
            Variant({ConstantProperty::from_enum<QualityMappingType>(QualityMappingType::Value::copy)}, {}),
            Variant({ConstantProperty::from_enum<QualityMappingType>(QualityMappingType::Value::constant)}, {
                string_property(
                    keys::quality_id,
                    Required::yes,
                    "Quality template ID",
                    "some-quality-template",
                    StringFormat::None
                )
            }),
            Variant({ConstantProperty::from_enum<QualityMappingType>(QualityMappingType::Value::constant_if_absent)}, {
                string_property(
                    keys::quality_id,
                    Required::yes,
                    "Quality template ID",
                    "some-quality-template",
                    StringFormat::None
                )
            })
        }));
    }

    std::shared_ptr<schema::Object> SubscribingSchemaWriteVisitor::get_name_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>({
            string_property(
                keys::name,
                Required::yes,
                "Name of the property in the GOOSE mapping",
                "",
                StringFormat::None
            )
        }));
    }

} // namespace goose
} // namespace adapter