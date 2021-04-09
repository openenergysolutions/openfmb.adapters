// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "MeasurementSchemaWriteVisitor.h"

#include "adapter-util/ConfigStrings.h"
#include "schema-util/Builder.h"

#include "ConfigStrings.h"
#include "generated/EnumMappingType.h"
#include "generated/RegisterMapping.h"
#include "generated/SourceType.h"

using namespace adapter::schema;

namespace adapter {
namespace modbus {
namespace master {

    MeasurementSchemaWriteVisitor::MeasurementSchemaWriteVisitor()
        : SchemaWriteVisitorBase()
    {
    }

    // --- map write function from base class ---

    std::shared_ptr<schema::Object> MeasurementSchemaWriteVisitor::get_mapped_bool_schema()
    {
        const auto bit_mapping = std::make_shared<Object>(std::vector<property_ptr_t>({
            numeric_property<uint16_t>(
                util::keys::index,
                Required::yes,
                "Index of the point",
                0,
                Bound<uint16_t>::from(0),
                Bound<uint16_t>::from(65535)
            ),
            bool_property(
                keys::invert,
                Required::yes,
                "invert the boolean value",
                false
            )
        }));

        const auto register_mapping = std::make_shared<Object>(std::vector<property_ptr_t>({
            numeric_property<uint16_t>(
                util::keys::index,
                Required::yes,
                "Index of the point",
                0,
                Bound<uint16_t>::from(0),
                Bound<uint16_t>::from(65535)
            ),
            numeric_property<uint16_t>(
                keys::mask,
                Required::yes,
                "Mask of the register",
                1,
                Bound<uint16_t>::from(0),
                Bound<uint16_t>::from(65535)
            ),
            bool_property(
                keys::invert,
                Required::yes,
                "invert the boolean value",
                false
            )
        }));

        return std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::none)}, {}),
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::coil)}, bit_mapping),
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::discrete_input)}, bit_mapping),
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::holding_register)}, register_mapping),
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::input_register)}, register_mapping),
        }));
    }

    std::shared_ptr<schema::Object> MeasurementSchemaWriteVisitor::get_mapped_int32_schema()
    {
        return get_numeric_schema();
    }

    std::shared_ptr<schema::Object> MeasurementSchemaWriteVisitor::get_mapped_int64_schema()
    {
        return get_numeric_schema();
    }

    std::shared_ptr<schema::Object> MeasurementSchemaWriteVisitor::get_mapped_float_schema()
    {
        return get_numeric_schema();
    }

    std::shared_ptr<schema::Object> MeasurementSchemaWriteVisitor::get_mapped_double_schema()
    {
        return get_numeric_schema();
    }

    std::shared_ptr<schema::Object> MeasurementSchemaWriteVisitor::get_mapped_enum_schema(google::protobuf::EnumDescriptor const* descriptor)
    {
        const auto bit_mapping = std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
            Variant({ConstantProperty::from_enum<EnumMappingType>(EnumMappingType::Value::none)}, {}),
            Variant({ConstantProperty::from_enum<EnumMappingType>(EnumMappingType::Value::single_bit)}, {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "Index of the point",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                enum_property(
                    util::keys::when_true,
                    get_enum_variants_from_proto(descriptor),
                    Required::yes,
                    "Enum variant when the bit is true",
                    descriptor->value(0)->name()
                ),
                enum_property(
                    util::keys::when_false,
                    get_enum_variants_from_proto(descriptor),
                    Required::yes,
                    "Enum variant when the bit is false",
                    descriptor->value(0)->name()
                )
            })
        }));

        const auto register_mapping = std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
            Variant({ConstantProperty::from_enum<EnumMappingType>(EnumMappingType::Value::none)}, {}),
            Variant({ConstantProperty::from_enum<EnumMappingType>(EnumMappingType::Value::single_register)}, {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "Index of the register",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                numeric_property<uint16_t>(
                    keys::mask,
                    Required::yes,
                    "Mask to apply before the mapping",
                    1,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                array_property(
                    util::keys::mapping,
                    Required::yes,
                    "Mapping from the register value to the OpenFMB enum variant",
                    Object({
                        enum_property(
                            util::keys::name,
                            get_enum_variants_from_proto(descriptor),
                            Required::yes,
                            "Enum variant",
                            descriptor->value(0)->name()
                        ),
                        numeric_property<uint16_t>(
                            util::keys::value,
                            Required::yes,
                            "Register value",
                            1,
                            Bound<uint16_t>::from(0),
                            Bound<uint16_t>::from(65535)
                        )
                    })
                )
            }),
            Variant({ConstantProperty::from_enum<EnumMappingType>(EnumMappingType::Value::multiple_register)}, {
                array_property(
                    keys::bits,
                    Required::yes,
                    "Bits to extract from the registers",
                    Object({
                        numeric_property<uint16_t>(
                            util::keys::index,
                            Required::yes,
                            "Index of the register",
                            0,
                            Bound<uint16_t>::from(0),
                            Bound<uint16_t>::from(65535)
                        ),
                        numeric_property<uint16_t>(
                            keys::bit,
                            Required::yes,
                            "Bit to extract",
                            0,
                            Bound<uint16_t>::from(0),
                            Bound<uint16_t>::from(16)
                        ),
                    })
                ),
                array_property(
                    util::keys::mapping,
                    Required::yes,
                    "Mapping from the extracted value to the OpenFMB enum variant",
                    Object({
                        string_property(
                            keys::pattern,
                            Required::yes,
                            "Pattern to match",
                            "0000000000000001",
                            StringFormat::BitString
                        ),
                        enum_property(
                            util::keys::value,
                            get_enum_variants_from_proto(descriptor),
                            Required::yes,
                            "Enum variant",
                            descriptor->value(0)->name()
                        )
                    })
                )
            })
        }));

        return std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::none)}, {}),
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::coil)}, bit_mapping),
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::discrete_input)}, bit_mapping),
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::holding_register)}, register_mapping),
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::input_register)}, register_mapping)
        }));
    }

    std::shared_ptr<schema::Object> MeasurementSchemaWriteVisitor::get_numeric_schema()
    {
        const auto mapping_16bit = std::make_shared<Object>(std::vector<property_ptr_t>({
            numeric_property<uint16_t>(
                util::keys::index,
                Required::yes,
                "Index of the point",
                0,
                Bound<uint16_t>::from(0),
                Bound<uint16_t>::from(65535)
            ),
            numeric_property<float>(
                util::keys::scale,
                Required::yes,
                "Scaling factor",
                1.0f,
                Bound<float>::unused(),
                Bound<float>::unused()
            )
        }));

        const auto mapping_32bit = std::make_shared<Object>(std::vector<property_ptr_t>({
            numeric_property<uint16_t>(
                keys::lower_index,
                Required::yes,
                "Index of the point containing the two LSB",
                0,
                Bound<uint16_t>::from(0),
                Bound<uint16_t>::from(65535)
            ),
            numeric_property<uint16_t>(
                keys::upper_index,
                Required::yes,
                "Index of the point containing the two LSB",
                0,
                Bound<uint16_t>::from(0),
                Bound<uint16_t>::from(65535)
            ),
            numeric_property<float>(
                util::keys::scale,
                Required::yes,
                "Scaling factor",
                1.0f,
                Bound<float>::unused(),
                Bound<float>::unused()
            )
        }));

        const auto mapping_32bit_modulus = std::make_shared<Object>(std::vector<property_ptr_t>({
            numeric_property<uint16_t>(
                keys::lower_index,
                Required::yes,
                "Index of the point containing the two LSB",
                0,
                Bound<uint16_t>::from(0),
                Bound<uint16_t>::from(65535)
            ),
            numeric_property<uint16_t>(
                keys::upper_index,
                Required::yes,
                "Index of the point containing the two LSB",
                0,
                Bound<uint16_t>::from(0),
                Bound<uint16_t>::from(65535)
            ),
            numeric_property<int64_t>(
                keys::modulus,
                Required::yes,
                "Modulus to apply",
                0,
                Bound<int64_t>::from(0),
                Bound<int64_t>::from(2147483647)
            ),
            numeric_property<float>(
                util::keys::scale,
                Required::yes,
                "Scaling factor",
                1.0f,
                Bound<float>::unused(),
                Bound<float>::unused()
            )
        }));

        const auto register_mapping = std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
            Variant({ConstantProperty::from_enum<RegisterMapping>(RegisterMapping::Value::sint16)}, mapping_16bit),
            Variant({ConstantProperty::from_enum<RegisterMapping>(RegisterMapping::Value::uint16)}, mapping_16bit),
            Variant({ConstantProperty::from_enum<RegisterMapping>(RegisterMapping::Value::sint32)}, mapping_32bit),
            Variant({ConstantProperty::from_enum<RegisterMapping>(RegisterMapping::Value::uint32)}, mapping_32bit),
            Variant({ConstantProperty::from_enum<RegisterMapping>(RegisterMapping::Value::sint32_with_modulus)}, mapping_32bit_modulus),
            Variant({ConstantProperty::from_enum<RegisterMapping>(RegisterMapping::Value::uint32_with_modulus)}, mapping_32bit_modulus),
            Variant({ConstantProperty::from_enum<RegisterMapping>(RegisterMapping::Value::float32)}, mapping_32bit),
        }));

        return std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::none)}, {}),
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::holding_register)}, register_mapping),
            Variant({ConstantProperty::from_enum<SourceType>(SourceType::Value::input_register)}, register_mapping)
        }));
    }

}
}
}
