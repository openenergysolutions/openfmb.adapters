
#include "ControlSchemaWriteVisitor.h"

#include "adapter-util/ConfigStrings.h"
#include "schema-util/Builder.h"

#include "ConfigStrings.h"
#include "generated/BitwiseOperation.h"
#include "generated/OutputType.h"

using namespace adapter::schema;

namespace adapter {
namespace modbus {
namespace master {

    ControlSchemaWriteVisitor::ControlSchemaWriteVisitor()
        : SchemaWriteVisitorBase()
    {
    }

    // --- map write function from base class ---

    std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_mapped_bool_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>({
            array_property(
                util::keys::when_true,
                Required::yes,
                "Actions to perform when the value is true",
                get_action_schema()
            ),
            array_property(
                util::keys::when_false,
                Required::yes,
                "Actions to perform when the value is false",
                get_action_schema()
            )
        }));
    }

    std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_mapped_int32_schema()
    {
        return get_numeric_schema();
    }

    std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_mapped_int64_schema()
    {
        return get_numeric_schema();
    }

    std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_mapped_float_schema()
    {
        return get_numeric_schema();
    }

    std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_mapped_double_schema()
    {
        return get_numeric_schema();
    }

    std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_mapped_enum_schema(google::protobuf::EnumDescriptor const* descriptor)
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>({
            array_property(
                util::keys::mapping,
                Required::yes,
                "Mapping from the OpenFMB enums to actions to perform",
                Object({
                    enum_property(
                        util::keys::name,
                        get_enum_variants_from_proto(descriptor),
                        Required::yes,
                        "OpenFMB enum variant",
                        descriptor->value(0)->name()
                    ),
                    array_property(
                        util::keys::outputs,
                        Required::yes,
                        "Actions to perform",
                        get_action_schema()
                    )
                })
            )
        }));
    }

    std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_mapped_schedule_parameter_schema()
    {
        return get_numeric_schema();
    }

    schema::Object ControlSchemaWriteVisitor::get_action_schema()
    {
        return Object({}, OneOf({
            Variant({ConstantProperty::from_enum<OutputType>(OutputType::Value::none)}, {}),
            Variant({ConstantProperty::from_enum<OutputType>(OutputType::Value::write_single_coil)}, {
                string_property(
                    util::keys::command_id,
                    Required::yes,
                    "Command ID",
                    "some-command-id",
                    StringFormat::None
                ),
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
                    "Boolean value to write to the coil",
                    false
                )
            }),
            Variant({ConstantProperty::from_enum<OutputType>(OutputType::Value::flip_single_coil)}, {
                string_property(
                    util::keys::command_id,
                    Required::yes,
                    "Command ID",
                    "some-command-id",
                    StringFormat::None
                ),
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "Index of the coil to flip",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                )
            }),
            Variant({ConstantProperty::from_enum<OutputType>(OutputType::Value::write_single_register_uint16)}, {
                string_property(
                    util::keys::command_id,
                    Required::yes,
                    "Command ID",
                    "some-command-id",
                    StringFormat::None
                ),
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "Index of the register to write",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                numeric_property<int64_t>(
                    util::keys::value,
                    Required::yes,
                    "Value to write to the register",
                    0,
                    Bound<int64_t>::from(0),
                    Bound<int64_t>::from(65535)
                )
            }),
            Variant({ConstantProperty::from_enum<OutputType>(OutputType::Value::write_single_register_int16)}, {
                string_property(
                    util::keys::command_id,
                    Required::yes,
                    "Command ID",
                    "some-command-id",
                    StringFormat::None
                ),
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "Index of the register to write",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                numeric_property<int64_t>(
                    util::keys::value,
                    Required::yes,
                    "Value to write to the register",
                    0,
                    Bound<int64_t>::from(-32768),
                    Bound<int64_t>::from(32767)
                )
            }),
            Variant({ConstantProperty::from_enum<OutputType>(OutputType::Value::write_multiple_registers_uint32)}, {
                string_property(
                    util::keys::command_id,
                    Required::yes,
                    "Command ID",
                    "some-command-id",
                    StringFormat::None
                ),
                numeric_property<uint16_t>(
                    keys::lower_index,
                    Required::yes,
                    "Index of the register that will contain the LSBs",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                numeric_property<uint16_t>(
                    keys::upper_index,
                    Required::yes,
                    "Index of the register that will contain the MSBs",
                    1,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                numeric_property<int64_t>(
                    util::keys::value,
                    Required::yes,
                    "Value to write to the register",
                    0,
                    Bound<int64_t>::from(0),
                    Bound<int64_t>::from(4294967295)
                )
            }),
            Variant({ConstantProperty::from_enum<OutputType>(OutputType::Value::write_multiple_registers_int32)}, {
                string_property(
                    util::keys::command_id,
                    Required::yes,
                    "Command ID",
                    "some-command-id",
                    StringFormat::None
                ),
                numeric_property<uint16_t>(
                    keys::lower_index,
                    Required::yes,
                    "Index of the register that will contain the LSBs",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                numeric_property<uint16_t>(
                    keys::upper_index,
                    Required::yes,
                    "Index of the register that will contain the MSBs",
                    1,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                numeric_property<int64_t>(
                    util::keys::value,
                    Required::yes,
                    "Value to write to the register",
                    0,
                    Bound<int64_t>::from(-2147483648),
                    Bound<int64_t>::from(2147483647)
                )
            }),
            Variant({ConstantProperty::from_enum<OutputType>(OutputType::Value::write_multiple_registers_float32)}, {
                string_property(
                    util::keys::command_id,
                    Required::yes,
                    "Command ID",
                    "some-command-id",
                    StringFormat::None
                ),
                numeric_property<uint16_t>(
                    keys::lower_index,
                    Required::yes,
                    "Index of the register that will contain the LSBs",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                numeric_property<uint16_t>(
                    keys::upper_index,
                    Required::yes,
                    "Index of the register that will contain the MSBs",
                    1,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                numeric_property<float>(
                    util::keys::value,
                    Required::yes,
                    "Value to write to the register",
                    0.0f,
                    Bound<float>::unused(),
                    Bound<float>::unused()
                )
            }),
            Variant({ConstantProperty::from_enum<OutputType>(OutputType::Value::read_and_modify_register)}, std::make_shared<Object>(std::vector<property_ptr_t>({
                string_property(
                    util::keys::command_id,
                    Required::yes,
                    "Command ID",
                    "some-command-id",
                    StringFormat::None
                )
            }),
            OneOf({
                Variant({ConstantProperty::from_enum<BitwiseOperation>(BitwiseOperation::Value::set_bit)}, {
                    numeric_property<uint16_t>(
                        util::keys::index,
                        Required::yes,
                        "Index of the register to write",
                        0,
                        Bound<uint16_t>::from(0),
                        Bound<uint16_t>::from(65535)
                    ),
                    numeric_property<int64_t>(
                        keys::bit,
                        Required::yes,
                        "Bit to set",
                        0,
                        Bound<int64_t>::from(0),
                        Bound<int64_t>::from(16)
                    ),
                }),
                Variant({ConstantProperty::from_enum<BitwiseOperation>(BitwiseOperation::Value::clear_bit)}, {
                    numeric_property<uint16_t>(
                        util::keys::index,
                        Required::yes,
                        "Index of the register to write",
                        0,
                        Bound<uint16_t>::from(0),
                        Bound<uint16_t>::from(65535)
                    ),
                    numeric_property<int64_t>(
                        keys::bit,
                        Required::yes,
                        "Bit to clear",
                        0,
                        Bound<int64_t>::from(0),
                        Bound<int64_t>::from(16)
                    ),
                }),
                Variant({ConstantProperty::from_enum<BitwiseOperation>(BitwiseOperation::Value::set_masked_bits)}, {
                    numeric_property<uint16_t>(
                        util::keys::index,
                        Required::yes,
                        "Index of the register to write",
                        0,
                        Bound<uint16_t>::from(0),
                        Bound<uint16_t>::from(65535)
                    ),
                    numeric_property<uint16_t>(
                        keys::mask,
                        Required::yes,
                        "Mask to set",
                        0,
                        Bound<uint16_t>::from(0),
                        Bound<uint16_t>::from(65535)
                    ),
                }),
                Variant({ConstantProperty::from_enum<BitwiseOperation>(BitwiseOperation::Value::clear_masked_bits)}, {
                    numeric_property<uint16_t>(
                        util::keys::index,
                        Required::yes,
                        "Index of the register to write",
                        0,
                        Bound<uint16_t>::from(0),
                        Bound<uint16_t>::from(65535)
                    ),
                    numeric_property<uint16_t>(
                        keys::mask,
                        Required::yes,
                        "Mask to clear",
                        0,
                        Bound<uint16_t>::from(0),
                        Bound<uint16_t>::from(65535)
                    ),
                }),
            })))
        }));
    }

    std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_numeric_schema()
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

        return std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
            Variant({ConstantProperty::from_enum<OutputType>(OutputType::Value::none)}, {}),
            Variant({ConstantProperty::from_enum<OutputType>(OutputType::Value::write_single_register_uint16)}, mapping_16bit),
            Variant({ConstantProperty::from_enum<OutputType>(OutputType::Value::write_single_register_int16)}, mapping_16bit),
            Variant({ConstantProperty::from_enum<OutputType>(OutputType::Value::write_multiple_registers_uint32)}, mapping_32bit),
            Variant({ConstantProperty::from_enum<OutputType>(OutputType::Value::write_multiple_registers_int32)}, mapping_32bit),
            Variant({ConstantProperty::from_enum<OutputType>(OutputType::Value::write_multiple_registers_float32)}, mapping_32bit)
        }));
    }

}
}
}
