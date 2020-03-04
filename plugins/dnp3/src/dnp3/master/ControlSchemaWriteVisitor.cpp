
#include "ControlSchemaWriteVisitor.h"

#include "adapter-util/ConfigStrings.h"
#include "schema-util/Builder.h"

#include "dnp3/ConfigStrings.h"
#include "dnp3/generated/CommandActionType.h"
#include "dnp3/generated/SourceType.h"

using namespace adapter::schema;

namespace adapter {
namespace dnp3 {
namespace master {

    ControlSchemaWriteVisitor::ControlSchemaWriteVisitor()
        : SchemaWriteVisitorBase()
    {
    }

    // --- map write function from base class ---

    std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_mapped_bool_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>{
            array_property(
                util::keys::when_true,
                Required::yes,
                "DNP3 commands to execute when the boolean is true",
                get_action_schema()
            ),
            array_property(
                util::keys::when_false,
                Required::yes,
                "DNP3 commands to execute when the boolean is false",
                get_action_schema()
            )
        });
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

    std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_mapped_enum_schema(google::protobuf::EnumDescriptor const* descriptor)
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>{
            array_property(
                util::keys::mapping,
                Required::yes,
                "mapping from the enum to DNP3 commands",
                Object({
                    enum_property(
                        util::keys::name,
                        get_enum_variants_from_proto(descriptor),
                        Required::yes,
                        "enum value to map",
                        descriptor->value(0)->name()
                    ),
                    array_property(
                        util::keys::outputs,
                        Required::yes,
                        "DNP3 commands to execute",
                        get_action_schema()
                    )
                })
            )
        });
    }

    std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_mapped_schedule_parameter_schema()
    {
        return get_numeric_schema();
    }

    schema::Object ControlSchemaWriteVisitor::get_action_schema()
    {
        return Object({}, OneOf({
            Variant({ConstantProperty::from_enum<CommandActionType>(CommandActionType::Value::g12v1)},
            {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "DNP3 index of the binary output",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                string_property(
                    util::keys::command_id,
                    Required::yes,
                    "command ID",
                    "some-command-id",
                    StringFormat::None
                ),
                enum_property(
                    keys::control_code,
                    {
                        opendnp3::ControlCodeSpec::to_string(opendnp3::ControlCode::NUL),
                        opendnp3::ControlCodeSpec::to_string(opendnp3::ControlCode::NUL_CANCEL),
                        opendnp3::ControlCodeSpec::to_string(opendnp3::ControlCode::PULSE_ON),
                        opendnp3::ControlCodeSpec::to_string(opendnp3::ControlCode::PULSE_ON_CANCEL),
                        opendnp3::ControlCodeSpec::to_string(opendnp3::ControlCode::PULSE_OFF),
                        opendnp3::ControlCodeSpec::to_string(opendnp3::ControlCode::PULSE_OFF_CANCEL),
                        opendnp3::ControlCodeSpec::to_string(opendnp3::ControlCode::LATCH_ON),
                        opendnp3::ControlCodeSpec::to_string(opendnp3::ControlCode::LATCH_ON_CANCEL),
                        opendnp3::ControlCodeSpec::to_string(opendnp3::ControlCode::LATCH_OFF),
                        opendnp3::ControlCodeSpec::to_string(opendnp3::ControlCode::LATCH_OFF_CANCEL),
                        opendnp3::ControlCodeSpec::to_string(opendnp3::ControlCode::CLOSE_PULSE_ON),
                        opendnp3::ControlCodeSpec::to_string(opendnp3::ControlCode::CLOSE_PULSE_ON_CANCEL),
                        opendnp3::ControlCodeSpec::to_string(opendnp3::ControlCode::TRIP_PULSE_ON),
                        opendnp3::ControlCodeSpec::to_string(opendnp3::ControlCode::TRIP_PULSE_ON_CANCEL),
                    },
                    Required::yes,
                    "DNP3 CROB control code",
                    opendnp3::ControlCodeSpec::to_string(opendnp3::ControlCode::LATCH_OFF)
                ),
                numeric_property<int64_t>(
                    "count",
                    Required::yes,
                    "DNP3 CROB count",
                    1,
                    Bound<int64_t>::from(0),
                    Bound<int64_t>::from(255)
                ),
                numeric_property<int64_t>(
                    "on-time-ms",
                    Required::yes,
                    "DNP3 CROB on-time (in milliseconds)",
                    1,
                    Bound<int64_t>::from(0),
                    Bound<int64_t>::from(4294967295)
                ),
                numeric_property<int64_t>(
                    "off-time-ms",
                    Required::yes,
                    "DNP3 CROB off-time (in milliseconds)",
                    1,
                    Bound<int64_t>::from(0),
                    Bound<int64_t>::from(4294967295)
                )
            }),
            Variant({ConstantProperty::from_enum<CommandActionType>(CommandActionType::Value::g41v1)},
            {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "DNP3 index of the analog output",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                string_property(
                    util::keys::command_id,
                    Required::yes,
                    "command ID",
                    "some-command-id",
                    StringFormat::None
                ),
                numeric_property<int64_t>(
                    util::keys::value,
                    Required::yes,
                    "DNP3 analog output value",
                    0,
                    Bound<int64_t>::from(0),
                    Bound<int64_t>::from(4294967295)
                )
            }),
            Variant({ConstantProperty::from_enum<CommandActionType>(CommandActionType::Value::g41v2)},
            {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "DNP3 index of the analog output",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                string_property(
                    util::keys::command_id,
                    Required::yes,
                    "command ID",
                    "some-command-id",
                    StringFormat::None
                ),
                numeric_property<int64_t>(
                    util::keys::value,
                    Required::yes,
                    "DNP3 analog output value",
                    0,
                    Bound<int64_t>::from(0),
                    Bound<int64_t>::from(65535)
                )
            }),
            Variant({ConstantProperty::from_enum<CommandActionType>(CommandActionType::Value::g41v3)},
            {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "DNP3 index of the analog output",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                string_property(
                    util::keys::command_id,
                    Required::yes,
                    "command ID",
                    "some-command-id",
                    StringFormat::None
                ),
                numeric_property<float>(
                    util::keys::value,
                    Required::yes,
                    "DNP3 analog output value",
                    0.0f,
                    Bound<float>::unused(),
                    Bound<float>::unused()
                )
            }),
            Variant({ConstantProperty::from_enum<CommandActionType>(CommandActionType::Value::g41v4)},
            {
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "DNP3 index of the analog output",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                string_property(
                    util::keys::command_id,
                    Required::yes,
                    "command ID",
                    "some-command-id",
                    StringFormat::None
                ),
                numeric_property<float>(
                    util::keys::value,
                    Required::yes,
                    "DNP3 analog output value",
                    0.0f,
                    Bound<float>::unused(),
                    Bound<float>::unused()
                )
            })
        }));
    }

    std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_numeric_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>{
            array_property(
                util::keys::outputs,
                Required::yes,
                "DNP3 commands to execute",
                Object({}, OneOf({
                    Variant({ConstantProperty::from_enum<CommandActionType>(CommandActionType::Value::g41v1)},
                    {
                        string_property(
                            util::keys::command_id,
                            Required::yes,
                            "command ID",
                            "some-command-id",
                            StringFormat::None
                        ),
                        numeric_property<uint16_t>(
                            util::keys::index,
                            Required::yes,
                            "DNP3 index of the analog output",
                            0,
                            Bound<uint16_t>::from(0),
                            Bound<uint16_t>::from(65535)
                        ),
                        numeric_property<float>(
                            util::keys::scale,
                            Required::yes,
                            "scaling to apply",
                            0.0f,
                            Bound<float>::unused(),
                            Bound<float>::unused()
                        )
                    }),
                    Variant({ConstantProperty::from_enum<CommandActionType>(CommandActionType::Value::g41v2)},
                    {
                        string_property(
                            util::keys::command_id,
                            Required::yes,
                            "command ID",
                            "some-command-id",
                            StringFormat::None
                        ),
                        numeric_property<uint16_t>(
                            util::keys::index,
                            Required::yes,
                            "DNP3 index of the analog output",
                            0,
                            Bound<uint16_t>::from(0),
                            Bound<uint16_t>::from(65535)
                        ),
                        numeric_property<float>(
                            util::keys::scale,
                            Required::yes,
                            "scaling to apply",
                            0.0f,
                            Bound<float>::unused(),
                            Bound<float>::unused()
                        )
                    }),
                    Variant({ConstantProperty::from_enum<CommandActionType>(CommandActionType::Value::g41v3)},
                    {
                        string_property(
                            util::keys::command_id,
                            Required::yes,
                            "command ID",
                            "some-command-id",
                            StringFormat::None
                        ),
                        numeric_property<uint16_t>(
                            util::keys::index,
                            Required::yes,
                            "DNP3 index of the analog output",
                            0,
                            Bound<uint16_t>::from(0),
                            Bound<uint16_t>::from(65535)
                        ),
                        numeric_property<float>(
                            util::keys::scale,
                            Required::yes,
                            "scaling to apply",
                            0.0f,
                            Bound<float>::unused(),
                            Bound<float>::unused()
                        )
                    }),
                    Variant({ConstantProperty::from_enum<CommandActionType>(CommandActionType::Value::g41v4)},
                    {
                        string_property(
                            util::keys::command_id,
                            Required::yes,
                            "command ID",
                            "some-command-id",
                            StringFormat::None
                        ),
                        numeric_property<uint16_t>(
                            util::keys::index,
                            Required::yes,
                            "DNP3 index of the analog output",
                            0,
                            Bound<uint16_t>::from(0),
                            Bound<uint16_t>::from(65535)
                        ),
                        numeric_property<float>(
                            util::keys::scale,
                            Required::yes,
                            "scaling to apply",
                            0.0f,
                            Bound<float>::unused(),
                            Bound<float>::unused()
                        )
                    })
                }))
            )
        });
    }

}
}
}
