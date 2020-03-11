
#include "ControlSchemaWriteVisitor.h"

#include "adapter-util/ConfigStrings.h"
#include "schema-util/Builder.h"

#include "ConfigStrings.h"
#include "generated/CommandSourceType.h"
#include "generated/ProfileAction.h"
#include "generated/RegisterMapping.h"

using namespace adapter::schema;

namespace adapter {
namespace modbus {
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
            Variant({ConstantProperty::from_enum<CommandSourceType>(CommandSourceType::Value::coil)},
            {
                enum_property<ProfileAction>(
                    Required::yes,
                    "Action to perform when command is received",
                    ProfileAction::Value::clear_and_update
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
                    util::keys::negate,
                    Required::yes,
                    "Negate the boolean value before updating the Modbus point",
                    false
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

    std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_mapped_enum_schema(google::protobuf::EnumDescriptor const* descriptor)
    {
        return std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
            Variant({ConstantProperty::from_enum<CommandSourceType>(CommandSourceType::Value::none)}, {}),
            Variant({ConstantProperty::from_enum<CommandSourceType>(CommandSourceType::Value::holding_register)},
            {
                enum_property<ProfileAction>(
                    Required::yes,
                    "Action to perform when command is received",
                    ProfileAction::Value::clear_and_update
                ),
                numeric_property<uint16_t>(
                    util::keys::index,
                    Required::yes,
                    "Index of the holding register",
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
                        numeric_property<uint16_t>(
                            util::keys::value,
                            Required::yes,
                            "Holding register value",
                            0,
                            Bound<uint16_t>::from(0),
                            Bound<uint16_t>::from(65535)
                        )
                    })
                )
            })
        }));
    }

    std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_numeric_schema()
    {
        const auto mapping_16bit = std::make_shared<Object>(std::vector<property_ptr_t>({
            enum_property<ProfileAction>(
                Required::yes,
                "Action to perform when command is received",
                ProfileAction::Value::clear_and_update
            ),
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
            enum_property<ProfileAction>(
                Required::yes,
                "Action to perform when command is received",
                ProfileAction::Value::clear_and_update
            ),
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
            Variant({ConstantProperty::from_enum<CommandSourceType>(CommandSourceType::Value::none)}, {}),
            Variant({ConstantProperty::from_enum<CommandSourceType>(CommandSourceType::Value::holding_register)}, register_mapping)
        }));
    }

}
}
}
