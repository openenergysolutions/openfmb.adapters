// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "ControlSchemaWriteVisitor.h"

#include "adapter-util/ConfigStrings.h"
#include "schema-util/Builder.h"

#include "dnp3/ConfigStrings.h"
#include "dnp3/generated/CommandSourceType.h"
#include "dnp3/generated/ProfileAction.h"

#include <opendnp3/gen/OperationType.h>
#include <opendnp3/gen/TripCloseCode.h>

using namespace adapter::schema;

namespace adapter {
namespace dnp3 {
namespace outstation {

    ControlSchemaWriteVisitor::ControlSchemaWriteVisitor()
        : SchemaWriteVisitorBase()
    {
    }

    // --- map write function from base class ---

    std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_mapped_bool_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
            Variant({ConstantProperty::from_enum<CommandSourceType>(CommandSourceType::Value::none)}, {}),
            Variant({ConstantProperty::from_enum<CommandSourceType>(CommandSourceType::Value::crob)},
            {
                enum_property<ProfileAction>(
                    Required::yes,
                    "Action to perform when command is received",
                    ProfileAction::Value::clear_and_update
                ),
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "DNP3 index of the binary output",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                array_property(
                    util::keys::mapping,
                    Required::yes,
                    "CROBs to map to the boolean value",
                    Object({
                        enum_property(
                            "operation-type",
                            {
                                opendnp3::OperationTypeSpec::to_string(opendnp3::OperationType::NUL),
                                opendnp3::OperationTypeSpec::to_string(opendnp3::OperationType::LATCH_ON),
                                opendnp3::OperationTypeSpec::to_string(opendnp3::OperationType::LATCH_OFF),
                                opendnp3::OperationTypeSpec::to_string(opendnp3::OperationType::PULSE_OFF),
                                opendnp3::OperationTypeSpec::to_string(opendnp3::OperationType::PULSE_ON),
                            },
                            Required::yes,
                            "DNP3 CROB 'operation type'",
                            opendnp3::OperationTypeSpec::to_string(opendnp3::OperationType::LATCH_OFF)
                        ),
                        enum_property(
                            "trip-close-code",
                            {
                                opendnp3::TripCloseCodeSpec::to_string(opendnp3::TripCloseCode::NUL),
                                opendnp3::TripCloseCodeSpec::to_string(opendnp3::TripCloseCode::TRIP),
                                opendnp3::TripCloseCodeSpec::to_string(opendnp3::TripCloseCode::CLOSE),
                            },
                            Required::yes,
                            "DNP3 CROB 'trip close code'",
                            opendnp3::TripCloseCodeSpec::to_string(opendnp3::TripCloseCode::NUL)
                        ),
                        bool_property(
                            util::keys::value,
                            Required::yes,
                            "Value to update to",
                            false
                        )
                    })
                )
            })
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
        return std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
            Variant({ConstantProperty::from_enum<CommandSourceType>(CommandSourceType::Value::none)}, {}),
            Variant({ConstantProperty::from_enum<CommandSourceType>(CommandSourceType::Value::analog_output)},
            {
                enum_property<ProfileAction>(
                    Required::yes,
                    "Action to perform when command is received",
                    ProfileAction::Value::clear_and_update
                ),
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "DNP3 index of the binary input",
                    0,
                    Bound<uint16_t>::from(0),
                    Bound<uint16_t>::from(65535)
                ),
                array_property(
                    util::keys::mapping,
                    Required::yes,
                    "Enum variant associated with each analog output value",
                    Object({
                        enum_property(
                            util::keys::name,
                            get_enum_variants_from_proto(descriptor),
                            Required::yes,
                            "OpenFMB enum variant",
                            descriptor->value(0)->name()
                        ),
                        numeric_property<float>(
                            util::keys::value,
                            Required::yes,
                            "Analog output value",
                            0.0f,
                            Bound<float>::unused(),
                            Bound<float>::unused()
                        )
                    })
                )
            })
        }));
    }

    std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_numeric_schema()
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
            Variant({ConstantProperty::from_enum<CommandSourceType>(CommandSourceType::Value::none)}, {}),
            Variant({ConstantProperty::from_enum<CommandSourceType>(CommandSourceType::Value::analog_output)},
            {
                enum_property<ProfileAction>(
                    Required::yes,
                    "Action to perform when command is received",
                    ProfileAction::Value::clear_and_update
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
                    "Scaling factor",
                    1.0f,
                    Bound<float>::unused(),
                    Bound<float>::unused()
                )
            })
        }));
    }

}
}
}
