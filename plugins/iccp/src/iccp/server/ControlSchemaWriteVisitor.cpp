// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "ControlSchemaWriteVisitor.h"

#include "adapter-util/ConfigStrings.h"
#include "schema-util/Builder.h"

#include "iccp/ConfigStrings.h"
#include "iccp/generated/CommandPointType.h"

using namespace adapter::schema;

namespace adapter {
    namespace iccp {
        namespace server {

            ControlSchemaWriteVisitor::ControlSchemaWriteVisitor()
                    : SchemaWriteVisitorBase()
            {
            }

            // --- map write function from base class ---

            std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_mapped_bool_schema()
            {                
                return std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
                        Variant({ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::none)}, {}),
                        Variant({ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::command)},
                        {                                                        
                            string_property(
                                keys::name, 
                                Required::yes, 
                                "ICCP point name of control command", 
                                "", 
                                StringFormat::None
                            ),
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
                        Variant({ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::command_sbo)},
                        {
                            string_property(
                                keys::name,
                                Required::yes,
                                "ICCP point name of control command",
                                "",
                                StringFormat::None
                            ),
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
                        Variant({ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::set_point_discrete)},
                        {
                            string_property(
                                keys::name,
                                Required::yes,
                                "ICCP point name of control command",
                                "",
                                StringFormat::None
                            ),
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
                        Variant({ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::set_point_discrete_sbo)},
                        {
                            string_property(
                                keys::name,
                                Required::yes,
                                "ICCP point name of control command",
                                "",
                                StringFormat::None
                            ),
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
                        Variant({ ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::set_point_real) },
                        {
                            string_property(
                                keys::name,
                                Required::yes,
                                "ICCP point name of control command",
                                "",
                                StringFormat::None
                            ),
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
                        Variant({ ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::set_point_real_sbo) },
                        {
                            string_property(
                                keys::name,
                                Required::yes,
                                "ICCP point name of control command",
                                "",
                                StringFormat::None
                            ),
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
                    Variant({ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::none)}, {}),
                    Variant({ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::command)},
                    {                        
                        string_property(
                            keys::name,
                            Required::yes,
                            "ICCP point name of control command",
                            "",
                            StringFormat::None
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
                                numeric_property<int64_t>(
                                    util::keys::value,
                                    Required::yes,
                                    "Value to update",
                                    0,
                                    Bound<int64_t>::unused(),
                                    Bound<int64_t>::unused()
                                )
                            })
                        )
                    }),
                    Variant({ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::command_sbo)},
                    {
                        string_property(
                            keys::name,
                            Required::yes,
                            "ICCP point name of control command",
                            "",
                            StringFormat::None
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
                                numeric_property<int64_t>(
                                    util::keys::value,
                                    Required::yes,
                                    "Value to update",
                                    0,
                                    Bound<int64_t>::unused(),
                                    Bound<int64_t>::unused()
                                )
                            })
                        )
                    }),
                    Variant({ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::set_point_discrete)},
                    {
                        string_property(
                            keys::name,
                            Required::yes,
                            "ICCP point name of control command",
                            "",
                            StringFormat::None
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
                                numeric_property<int64_t>(
                                    util::keys::value,
                                    Required::yes,
                                    "Value to update",
                                    0,
                                    Bound<int64_t>::unused(),
                                    Bound<int64_t>::unused()
                                )
                            })
                        )
                    }),
                    Variant({ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::set_point_discrete_sbo)},
                    {
                        string_property(
                            keys::name,
                            Required::yes,
                            "ICCP point name of control command",
                            "",
                            StringFormat::None
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
                                numeric_property<int64_t>(
                                    util::keys::value,
                                    Required::yes,
                                    "Value to update",
                                    0,
                                    Bound<int64_t>::unused(),
                                    Bound<int64_t>::unused()
                                )
                            })
                        )
                    }),
                    Variant({ ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::set_point_real) },
                    {
                        string_property(
                            keys::name,
                            Required::yes,
                            "ICCP point name of control command",
                            "",
                            StringFormat::None
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
                                    "Value to update",
                                    0.0f,
                                    Bound<float>::unused(),
                                    Bound<float>::unused()
                                )
                            })
                        )
                    }),
                    Variant({ ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::set_point_real_sbo)},
                    {
                        string_property(
                            keys::name,
                            Required::yes,
                            "ICCP point name of control command",
                            "",
                            StringFormat::None
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
                                    "Value to update",
                                    0.0f,
                                    Bound<float>::unused(),
                                    Bound<float>::unused()
                                )
                            })
                        )
                    }),
                }));
            }

            std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_numeric_schema()
            {
                return std::make_shared<Object>(std::vector<property_ptr_t>(), OneOf({
                        Variant({ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::none)}, {}),
                        Variant({ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::command)},
                        {
                            string_property(
                                keys::name,
                                Required::yes,
                                "ICCP point name of control command",
                                "",
                                StringFormat::None
                            )
                            
                        }),
                        Variant({ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::command_sbo)},
                        {
                            string_property(
                                keys::name,
                                Required::yes,
                                "ICCP point name of control command",
                                "",
                                StringFormat::None
                            )
                        }),
                        Variant({ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::set_point_discrete)},
                        {
                            string_property(
                                keys::name,
                                Required::yes,
                                "ICCP point name of control command",
                                "",
                                StringFormat::None
                            )
                        }),
                        Variant({ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::set_point_discrete_sbo)},
                        {
                            string_property(
                                keys::name,
                                Required::yes,
                                "ICCP point name of control command",
                                "",
                                StringFormat::None
                            )
                        }),
                        Variant({ ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::set_point_real) },
                        {
                            string_property(
                                keys::name,
                                Required::yes,
                                "ICCP point name of control command",
                                "",
                                StringFormat::None
                            )
                        }),
                        Variant({ ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::set_point_real_sbo) },
                        {
                            string_property(
                                keys::name,
                                Required::yes,
                                "ICCP point name of control command",
                                "",
                                StringFormat::None
                            )
                        })
                    }));
            }
        }
    }
}
