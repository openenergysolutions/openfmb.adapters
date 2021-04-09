// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "MeasurementSchemaWriteVisitor.h"

#include "adapter-util/ConfigStrings.h"
#include "schema-util/Builder.h"

#include "dnp3/ConfigStrings.h"
#include "dnp3/generated/SourceType.h"

using namespace adapter::schema;

namespace adapter {
namespace dnp3 {
namespace master {

    MeasurementSchemaWriteVisitor::MeasurementSchemaWriteVisitor()
        : SchemaWriteVisitorBase()
    {
    }

    // --- map write function from base class ---

    std::shared_ptr<schema::Object> MeasurementSchemaWriteVisitor::get_mapped_bool_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::none)}, {}),
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::binary)},
            {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "DNP3 index of the binary input",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                )
            })
        }));
    }

    std::shared_ptr<schema::Object> MeasurementSchemaWriteVisitor::get_mapped_int32_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::none)}, {}),
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::analog)},
            {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "DNP3 index of the analog input",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                numeric_property<float>(
                    util::keys::scale,
                    Required::yes,
                    "scaling factor",
                    1.0f,
                    Bound<float>::unused(),
                    Bound<float>::unused()
                )
            }),
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::counter)},
            {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "DNP3 index of the counter",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                numeric_property<float>(
                    util::keys::scale,
                    Required::yes,
                    "scaling factor",
                    1.0f,
                    Bound<float>::unused(),
                    Bound<float>::unused()
                )
            })
        }));
    }

    std::shared_ptr<schema::Object> MeasurementSchemaWriteVisitor::get_mapped_int64_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::none)}, {}),
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::analog)},
            {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "DNP3 index of the analog input",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                numeric_property<float>(
                    util::keys::scale,
                    Required::yes,
                    "scaling factor",
                    1.0f,
                    Bound<float>::unused(),
                    Bound<float>::unused()
                )
            }),
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::counter)},
            {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "DNP3 index of the counter",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                numeric_property<float>(
                    util::keys::scale,
                    Required::yes,
                    "scaling factor",
                    1.0f,
                    Bound<float>::unused(),
                    Bound<float>::unused()
                )
            })
        }));
    }

    std::shared_ptr<schema::Object> MeasurementSchemaWriteVisitor::get_mapped_float_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::none)}, {}),
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::analog)},
            {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "DNP3 index of the analog input",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                numeric_property<float>(
                    util::keys::scale,
                    Required::yes,
                    "scaling factor",
                    1.0f,
                    Bound<float>::unused(),
                    Bound<float>::unused()
                )
            })
        }));
    }

    std::shared_ptr<schema::Object> MeasurementSchemaWriteVisitor::get_mapped_double_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
                Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::none)}, {}),
                Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::analog)},
                        {
                        numeric_property<uint16_t>(
                            util::keys::index,
                            Required::yes,
                            "DNP3 index of the analog input",
                            0,
                            Bound<uint16_t>::from(0),
                            Bound<uint16_t>::from(65535)
                        ),
                        numeric_property<double>(
                            util::keys::scale,
                            Required::yes,
                            "scaling factor",
                            1.0f,
                            Bound<double>::unused(),
                            Bound<double>::unused()
                        )
                    })
            }));
    }

    std::shared_ptr<schema::Object> MeasurementSchemaWriteVisitor::get_mapped_enum_schema(google::protobuf::EnumDescriptor const* descriptor)
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::none)}, {}),
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::binary)},
            {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "DNP3 index of the binary input",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                enum_property(
                    util::keys::when_true,
                    get_enum_variants_from_proto(descriptor),
                    Required::yes,
                    "enum value when the binary input is true",
                    descriptor->value(0)->name()
                ),
                enum_property(
                    util::keys::when_false,
                    get_enum_variants_from_proto(descriptor),
                    Required::yes,
                    "enum value when the binary input is false",
                    descriptor->value(1)->name()
                )
            }),
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::counter)},
            {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "DNP3 index of the counter",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                array_property(
                    util::keys::mapping,
                    Required::yes,
                    "mapping from the DNP3 value to the enum variant",
                    Object({
                        numeric_property<int64_t>(
                            util::keys::value,
                            Required::yes,
                            "counter value",
                            0,
                            Bound<int64_t>::from(0),
                            Bound<int64_t>::from(4294967295)
                        ),
                        enum_property(
                            util::keys::name,
                            get_enum_variants_from_proto(descriptor),
                            Required::yes,
                            "enum variant",
                            descriptor->value(0)->name()
                        ),
                    })
                )
            }),
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::analog)},
            {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "DNP3 index of the analog input",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                array_property(
                    util::keys::mapping,
                    Required::yes,
                    "mapping from the DNP3 value to the enum variant",
                    Object({
                        numeric_property<float>(
                            util::keys::value,
                            Required::yes,
                            "analog input value",
                            0.0f,
                            Bound<float>::unused(),
                            Bound<float>::unused()
                        ),
                        enum_property(
                            util::keys::name,
                            get_enum_variants_from_proto(descriptor),
                            Required::yes,
                            "enum variant",
                            descriptor->value(0)->name()
                        ),
                    })
                )
            })
        }));
    }

}
}
}
