// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "ServerSchemaWriteVisitor.h"

#include "adapter-api/Exception.h"
#include "adapter-util/ConfigStrings.h"
#include "iccp/ConfigStrings.h"
#include "schema-util/Builder.h"

#include "iccp/generated/QualityMappingType.h"
#include "iccp/generated/IndicationPointType.h"

using namespace adapter::schema;

namespace adapter {
namespace iccp {

    ServerSchemaWriteVisitor::ServerSchemaWriteVisitor()
    {
    }

    std::shared_ptr<schema::Object> ServerSchemaWriteVisitor::get_mapped_bool_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>({
            string_property(
                keys::name,
                Required::yes,
                "Name of the data point in the ICCP mapping",
                "",
                StringFormat::None),
            
            }),
            OneOf({
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::none) }, {}),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::discrete) }, {
                    numeric_property<int64_t>(
                        util::keys::when_true,
                        Required::yes,
                        "Value to map to true",
                        0,
                        Bound<int64_t>::unused(),
                        Bound<int64_t>::unused()
                    ),
                    numeric_property<int64_t>(
                        util::keys::when_false,
                        Required::yes,
                        "Value to map to false",
                        0,
                        Bound<int64_t>::unused(),
                        Bound<int64_t>::unused()
                    )
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::discrete_q) }, {
                    numeric_property<int64_t>(
                        util::keys::when_true,
                        Required::yes,
                        "Value to map to true",
                        0,
                        Bound<int64_t>::unused(),
                        Bound<int64_t>::unused()
                    ),
                    numeric_property<int64_t>(
                        util::keys::when_false,
                        Required::yes,
                        "Value to map to false",
                        0,
                        Bound<int64_t>::unused(),
                        Bound<int64_t>::unused()
                    )
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::discrete_q_t) }, {
                    numeric_property<int64_t>(
                        util::keys::when_true,
                        Required::yes,
                        "Value to map to true",
                        0,
                        Bound<int64_t>::unused(),
                        Bound<int64_t>::unused()
                    ),
                    numeric_property<int64_t>(
                        util::keys::when_false,
                        Required::yes,
                        "Value to map to false",
                        0,
                        Bound<int64_t>::unused(),
                        Bound<int64_t>::unused()
                    )
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::discrete_q_t_ext) }, {
                    numeric_property<int64_t>(
                        util::keys::when_true,
                        Required::yes,
                        "Value to map to true",
                        0,
                        Bound<int64_t>::unused(),
                        Bound<int64_t>::unused()
                    ),
                    numeric_property<int64_t>(
                        util::keys::when_false,
                        Required::yes,
                        "Value to map to false",
                        0,
                        Bound<int64_t>::unused(),
                        Bound<int64_t>::unused()
                    )
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::discrete_ext) }, {
                    numeric_property<int64_t>(
                        util::keys::when_true,
                        Required::yes,
                        "Value to map to true",
                        0,
                        Bound<int64_t>::unused(),
                        Bound<int64_t>::unused()
                    ),
                    numeric_property<int64_t>(
                        util::keys::when_false,
                        Required::yes,
                        "Value to map to false",
                        0,
                        Bound<int64_t>::unused(),
                        Bound<int64_t>::unused()
                    )
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::real) }, {
                    numeric_property<int64_t>(
                        util::keys::when_true,
                        Required::yes,
                        "Value to map to true",
                        0,
                        Bound<int64_t>::unused(),
                        Bound<int64_t>::unused()
                    ),
                    numeric_property<float>(
                        util::keys::when_false,
                        Required::yes,
                        "Value to map to false",
                        0,
                        Bound<float>::unused(),
                        Bound<float>::unused()
                    )
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::real_q) }, {
                    numeric_property<float>(
                        util::keys::when_true,
                        Required::yes,
                        "Value to map to true",
                        0,
                        Bound<float>::unused(),
                        Bound<float>::unused()
                    ),
                    numeric_property<float>(
                        util::keys::when_false,
                        Required::yes,
                        "Value to map to false",
                        0,
                        Bound<float>::unused(),
                        Bound<float>::unused()
                    )
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::real_q_t) }, {
                    numeric_property<float>(
                        util::keys::when_true,
                        Required::yes,
                        "Value to map to true",
                        0,
                        Bound<float>::unused(),
                        Bound<float>::unused()
                    ),
                    numeric_property<float>(
                        util::keys::when_false,
                        Required::yes,
                        "Value to map to false",
                        0,
                        Bound<float>::unused(),
                        Bound<float>::unused()
                    )
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::real_q_t_ext) }, {
                    numeric_property<float>(
                        util::keys::when_true,
                        Required::yes,
                        "Value to map to true",
                        0,
                        Bound<float>::unused(),
                        Bound<float>::unused()
                    ),
                    numeric_property<float>(
                        util::keys::when_false,
                        Required::yes,
                        "Value to map to false",
                        0,
                        Bound<float>::unused(),
                        Bound<float>::unused()
                    )
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::real_ext) }, {
                    numeric_property<float>(
                        util::keys::when_true,
                        Required::yes,
                        "Value to map to true",
                        0,
                        Bound<float>::unused(),
                        Bound<float>::unused()
                    ),
                    numeric_property<float>(
                        util::keys::when_false,
                        Required::yes,
                        "Value to map to false",
                        0,
                        Bound<float>::unused(),
                        Bound<float>::unused()
                    )
                })
            })
        );
    }

    std::shared_ptr<schema::Object> ServerSchemaWriteVisitor::get_mapped_int32_schema()
    {
        return get_discrete_schema();
    }

    std::shared_ptr<schema::Object> ServerSchemaWriteVisitor::get_mapped_uint32_schema()
    {
        return get_discrete_schema();
    }

    std::shared_ptr<schema::Object> ServerSchemaWriteVisitor::get_mapped_int64_schema()
    {
        return get_discrete_schema();
    }

    std::shared_ptr<schema::Object> ServerSchemaWriteVisitor::get_mapped_uint64_schema()
    {
        return get_discrete_schema();
    }

    std::shared_ptr<schema::Object> ServerSchemaWriteVisitor::get_mapped_float_schema()
    {
        return get_real_schema();
    }

    std::shared_ptr<schema::Object> ServerSchemaWriteVisitor::get_mapped_double_schema()
    {
        return get_real_schema();
    }

    std::shared_ptr<schema::Object> ServerSchemaWriteVisitor::get_mapped_string_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>({}));
    }

    std::shared_ptr<schema::Object> ServerSchemaWriteVisitor::get_mapped_enum_schema(google::protobuf::EnumDescriptor const* descriptor)
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>({ 
            string_property(
                keys::name,
                Required::yes,
                "Name of the data point in the ICCP mapping",
                "",
                StringFormat::None),
            }),
            OneOf({ 
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::none) }, {}),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::discrete) }, {
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
                                descriptor->value(0)->name()),
                            numeric_property<int64_t>(
                                util::keys::value,
                                Required::yes,
                                "Value to map",
                                0,
                                Bound<int64_t>::unused(),
                                Bound<int64_t>::unused())

                    }))
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::discrete_q) }, {
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
                                descriptor->value(0)->name()),
                            numeric_property<int64_t>(
                                util::keys::value,
                                Required::yes,
                                "Value to map",
                                0,
                                Bound<int64_t>::unused(),
                                Bound<int64_t>::unused())

                    }))
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::discrete_q_t) }, {
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
                                descriptor->value(0)->name()),
                            numeric_property<int64_t>(
                                util::keys::value,
                                Required::yes,
                                "Value to map",
                                0,
                                Bound<int64_t>::unused(),
                                Bound<int64_t>::unused())

                    }))
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::discrete_q_t_ext) }, {
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
                                descriptor->value(0)->name()),
                            numeric_property<int64_t>(
                                util::keys::value,
                                Required::yes,
                                "Value to map",
                                0,
                                Bound<int64_t>::unused(),
                                Bound<int64_t>::unused())

                    }))
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::discrete_ext) }, {
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
                                descriptor->value(0)->name()),
                            numeric_property<int64_t>(
                                util::keys::value,
                                Required::yes,
                                "Value to map",
                                0,
                                Bound<int64_t>::unused(),
                                Bound<int64_t>::unused())

                    }))
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::real) }, {
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
                                descriptor->value(0)->name()),
                            numeric_property<float>(
                                util::keys::value,
                                Required::yes,
                                "Value to map",
                                0,
                                Bound<float>::unused(),
                                Bound<float>::unused())

                    }))
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::real_q) }, {
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
                                descriptor->value(0)->name()),
                            numeric_property<float>(
                                util::keys::value,
                                Required::yes,
                                "Value to map",
                                0,
                                Bound<float>::unused(),
                                Bound<float>::unused())

                    }))
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::real_q_t) }, {
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
                                descriptor->value(0)->name()),
                            numeric_property<float>(
                                util::keys::value,
                                Required::yes,
                                "Value to map",
                                0,
                                Bound<float>::unused(),
                                Bound<float>::unused())

                    }))
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::real_q_t_ext) }, {
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
                                descriptor->value(0)->name()),
                            numeric_property<float>(
                                util::keys::value,
                                Required::yes,
                                "Value to map",
                                0,
                                Bound<float>::unused(),
                                Bound<float>::unused())

                    }))
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::real_ext) }, {
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
                                descriptor->value(0)->name()),
                            numeric_property<float>(
                                util::keys::value,
                                Required::yes,
                                "Value to map",
                                0,
                                Bound<float>::unused(),
                                Bound<float>::unused())

                    }))
                })
            })
        );
    }

    std::shared_ptr<schema::Object> ServerSchemaWriteVisitor::get_mapped_commonmodule_quality_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>({ 
            string_property(
                keys::name,
                Required::yes,
                "Name of the data point in the ICCP mapping",
                "",
                StringFormat::None) }),
            OneOf({ Variant({ ConstantProperty::from_enum<QualityMappingType>(QualityMappingType::Value::copy) }, {}),
                    Variant({ ConstantProperty::from_enum<QualityMappingType>(QualityMappingType::Value::constant) }, { string_property(keys::quality_id, Required::yes, "Quality template ID", "some-quality-template", StringFormat::None) }),
                    Variant({ ConstantProperty::from_enum<QualityMappingType>(QualityMappingType::Value::constant_if_absent) }, { string_property(keys::quality_id, Required::yes, "Quality template ID", "some-quality-template", StringFormat::None) }) 
         }));
    }

    std::shared_ptr<schema::Object> ServerSchemaWriteVisitor::get_mapped_commonmodule_timestamp_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>({ 
            string_property(
                keys::name,
                Required::yes,
                "Name of the data point in the ICCP mapping",
                "",
                StringFormat::None),
            })
        );
    }

    std::shared_ptr<schema::Object> ServerSchemaWriteVisitor::get_discrete_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>({ 
            string_property(
                keys::name,
                Required::yes,
                "Name of the data point in the ICCP mapping",
                "",
                StringFormat::None)

            }),
            OneOf({ Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::none) }, {}),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::discrete) }, {
                    numeric_property<float>(
                        util::keys::scale,
                        Required::yes,
                        "Scaling factor",
                        1.0f,
                        Bound<float>::unused(),
                        Bound<float>::unused()
                    )
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::discrete_q) }, {
                    numeric_property<float>(
                        util::keys::scale,
                        Required::yes,
                        "Scaling factor",
                        1.0f,
                        Bound<float>::unused(),
                        Bound<float>::unused()
                    )
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::discrete_q_t) }, {
                    numeric_property<float>(
                        util::keys::scale,
                        Required::yes,
                        "Scaling factor",
                        1.0f,
                        Bound<float>::unused(),
                        Bound<float>::unused()
                    )
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::discrete_q_t_ext) }, {
                    numeric_property<float>(
                        util::keys::scale,
                        Required::yes,
                        "Scaling factor",
                        1.0f,
                        Bound<float>::unused(),
                        Bound<float>::unused()
                    )
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::discrete_ext) }, {
                    numeric_property<float>(
                        util::keys::scale,
                        Required::yes,
                        "Scaling factor",
                        1.0f,
                        Bound<float>::unused(),
                        Bound<float>::unused()
                    )
                })
            })
        );
    }

    std::shared_ptr<schema::Object> ServerSchemaWriteVisitor::get_real_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>({
            string_property(
                keys::name,
                Required::yes,
                "Name of the data point in the ICCP mapping",
                "",
                StringFormat::None)

            }),
            OneOf({ Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::none) }, {}),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::real) }, {
                    numeric_property<float>(
                        util::keys::scale,
                        Required::yes,
                        "Scaling factor",
                        1.0f,
                        Bound<float>::unused(),
                        Bound<float>::unused()
                    )
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::real_q) }, {
                    numeric_property<float>(
                        util::keys::scale,
                        Required::yes,
                        "Scaling factor",
                        1.0f,
                        Bound<float>::unused(),
                        Bound<float>::unused()
                    )
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::real_q_t) }, {
                    numeric_property<float>(
                        util::keys::scale,
                        Required::yes,
                        "Scaling factor",
                        1.0f,
                        Bound<float>::unused(),
                        Bound<float>::unused()
                    )
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::real_q_t_ext) }, {
                    numeric_property<float>(
                        util::keys::scale,
                        Required::yes,
                        "Scaling factor",
                        1.0f,
                        Bound<float>::unused(),
                        Bound<float>::unused()
                    )
                }),
                Variant({ ConstantProperty::from_enum<IndicationPointType>(IndicationPointType::Value::real_ext) }, {
                    numeric_property<float>(
                        util::keys::scale,
                        Required::yes,
                        "Scaling factor",
                        1.0f,
                        Bound<float>::unused(),
                        Bound<float>::unused()
                    )
                })
            })
        );
    }

} // namespace iccp
} // namespace adapter
