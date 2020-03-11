
#include "MeasurementSchemaWriteVisitor.h"

#include "adapter-util/ConfigStrings.h"
#include "schema-util/Builder.h"

#include "ConfigStrings.h"
#include "generated/DestinationType.h"
#include "generated/RegisterMapping.h"

using namespace adapter::schema;

namespace adapter {
namespace modbus {
namespace outstation {

    MeasurementSchemaWriteVisitor::MeasurementSchemaWriteVisitor()
        : SchemaWriteVisitorBase()
    {
    }

    // --- map write function from base class ---

    std::shared_ptr<schema::Object> MeasurementSchemaWriteVisitor::get_mapped_bool_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
            Variant({ConstantProperty::from_enum<DestinationType>(DestinationType::Value::none)}, {}),
            Variant({ConstantProperty::from_enum<DestinationType>(DestinationType::Value::coil)},
            {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "index of the coil",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                bool_property(
                    util::keys::negate,
                    Required::no,
                    "Negate the boolean value before updating the Modbus point",
                    false
                )
            }),
            Variant({ConstantProperty::from_enum<DestinationType>(DestinationType::Value::discrete_input)},
            {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "index of the discrete input",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                bool_property(
                    util::keys::negate,
                    Required::no,
                    "Negate the boolean value before updating the Modbus point",
                    false
                )
            })
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

    std::shared_ptr<schema::Object> MeasurementSchemaWriteVisitor::get_mapped_enum_schema(google::protobuf::EnumDescriptor const* descriptor)
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>({
            array_property(
                util::keys::mapping,
                Required::yes,
                "Mapping of the enum to actions",
                Object({
                    enum_property(
                        util::keys::name,
                        get_enum_variants_from_proto(descriptor),
                        Required::yes,
                        "OpenFMB enum variant to map",
                        descriptor->value(0)->name()
                    ),
                    array_property(
                        keys::actions,
                        Required::yes,
                        "Actions to perform",
                        Object({}, OneOf({
                            Variant({ConstantProperty::from_enum<DestinationType>(DestinationType::Value::coil)}, {
                                numeric_property<uint16_t>(
                                    util::keys::index,
                                    Required::yes,
                                    "Index of the coil",
                                    0,
                                    Bound<uint16_t>::from(0),
                                    Bound<uint16_t>::from(65535)
                                ),
                                bool_property(
                                    util::keys::value,
                                    Required::yes,
                                    "Value to write",
                                    false
                                )
                            }),
                            Variant({ConstantProperty::from_enum<DestinationType>(DestinationType::Value::discrete_input)}, {
                                numeric_property<uint16_t>(
                                    util::keys::index,
                                    Required::yes,
                                    "Index of the discrete input",
                                    0,
                                    Bound<uint16_t>::from(0),
                                    Bound<uint16_t>::from(65535)
                                ),
                                bool_property(
                                    util::keys::value,
                                    Required::yes,
                                    "Value to write",
                                    false
                                )
                            }),
                            Variant({ConstantProperty::from_enum<DestinationType>(DestinationType::Value::holding_register)}, {
                                numeric_property<uint16_t>(
                                    util::keys::index,
                                    Required::yes,
                                    "Index of the coil",
                                    0,
                                    Bound<uint16_t>::from(0),
                                    Bound<uint16_t>::from(65535)
                                ),
                                numeric_property<uint16_t>(
                                    util::keys::value,
                                    Required::yes,
                                    "Value to write",
                                    0,
                                    Bound<uint16_t>::from(0),
                                    Bound<uint16_t>::from(65535)
                                )
                            }),
                            Variant({ConstantProperty::from_enum<DestinationType>(DestinationType::Value::input_register)}, {
                                numeric_property<uint16_t>(
                                    util::keys::index,
                                    Required::yes,
                                    "Index of the coil",
                                    0,
                                    Bound<uint16_t>::from(0),
                                    Bound<uint16_t>::from(65535)
                                ),
                                numeric_property<uint16_t>(
                                    util::keys::value,
                                    Required::yes,
                                    "Value to write",
                                    0,
                                    Bound<uint16_t>::from(0),
                                    Bound<uint16_t>::from(65535)
                                )
                            })
                        }))
                    )
                })
            )
        }));
    }

    std::shared_ptr<schema::Object> MeasurementSchemaWriteVisitor::get_numeric_schema()
    {
        const auto mapping_16bit = std::make_shared<Object>(std::vector<property_ptr_t>({
            numeric_property<uint16_t>(
                util::keys::index,
                Required::yes,
                "index of the point",
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
        }));

        const auto mapping_32bit = std::make_shared<Object>(std::vector<property_ptr_t>({
            numeric_property<uint16_t>(
                keys::lower_index,
                Required::yes,
                "index of the point containing the two LSB",
                0,
                Bound<uint16_t>::from(0),
                Bound<uint16_t>::from(65535)
            ),
            numeric_property<uint16_t>(
                keys::upper_index,
                Required::yes,
                "index of the point containing the two LSB",
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
        }));

        const auto register_mapping = std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
            Variant({ConstantProperty::from_enum<RegisterMapping>(RegisterMapping::Value::sint16)}, mapping_16bit),
            Variant({ConstantProperty::from_enum<RegisterMapping>(RegisterMapping::Value::uint16)}, mapping_16bit),
            Variant({ConstantProperty::from_enum<RegisterMapping>(RegisterMapping::Value::sint32)}, mapping_32bit),
            Variant({ConstantProperty::from_enum<RegisterMapping>(RegisterMapping::Value::uint32)}, mapping_32bit),
            Variant({ConstantProperty::from_enum<RegisterMapping>(RegisterMapping::Value::float32)}, mapping_32bit),
        }));

        return std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
            Variant({ConstantProperty::from_enum<DestinationType>(DestinationType::Value::none)}, {}),
            Variant({ConstantProperty::from_enum<DestinationType>(DestinationType::Value::holding_register)}, register_mapping),
            Variant({ConstantProperty::from_enum<DestinationType>(DestinationType::Value::discrete_input)}, register_mapping)
        }));
    }

}
}
}
