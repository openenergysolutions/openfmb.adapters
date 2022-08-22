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
    namespace client {

        ControlSchemaWriteVisitor::ControlSchemaWriteVisitor()
            : SchemaWriteVisitorBase()
        {
        }

        // --- map write function from base class ---

        std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_mapped_bool_schema()
        {
            return std::make_shared<Object>(std::vector<property_ptr_t>{
                array_property(
                    keys::when_true_command,
                    Required::yes,
                    "ICCP commands to execute when the boolean is true",
                    get_boolean_schema()),
                array_property(
                    keys::when_false_command,
                    Required::yes,
                    "ICCP commands to execute when the boolean is false",
                    get_boolean_schema()) });
        }

        std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_mapped_int32_schema()
        {
            return get_control_schema();
        }

        std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_mapped_uint32_schema()
        {
            return get_control_schema();
        }

        std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_mapped_int64_schema()
        {
            return get_control_schema();
        }

        std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_mapped_uint64_schema()
        {
            return get_control_schema();
        }

        std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_mapped_float_schema()
        {
            return get_control_schema();
        }

        std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_mapped_double_schema()
        {
            return get_control_schema();
        }

        std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_mapped_enum_schema(google::protobuf::EnumDescriptor const* descriptor)
        {
            return std::make_shared<Object>(std::vector<property_ptr_t>{
                array_property(
                    util::keys::mapping,
                    Required::yes,
                    "mapping from the enum to ICCP commands",
                    Object({ enum_property(
                                 util::keys::name,
                                 get_enum_variants_from_proto(descriptor),
                                 Required::yes,
                                 "enum value to map",
                                 descriptor->value(0)->name()),
                             array_property(
                                 util::keys::outputs,
                                 Required::yes,
                                 "ICCP commands to execute",
                                 get_enum_schema()) })) });
        }

        std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_mapped_schedule_parameter_schema()
        {
            return get_control_schema();
        }

        schema::Object ControlSchemaWriteVisitor::get_boolean_schema()
        {
            return Object({}, OneOf({
                                  Variant({ ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::command) }, {
                                                                                                                                   string_property(keys::name, Required::yes, "ICCP point name of control command", "", StringFormat::None),
                                                                                                                                   numeric_property<int64_t>(keys::value, Required::yes, "Value to be written", 0, Bound<int64_t>::unused(), Bound<int64_t>::unused()),
                                                                                                                                   string_property(util::keys::command_id, Required::yes, "command ID", "some-command-id", StringFormat::None),
                                                                                                                               }),
                                  Variant({ ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::command_sbo) }, {
                                                                                                                                       string_property(keys::name, Required::yes, "ICCP point name of control command", "", StringFormat::None),
                                                                                                                                       numeric_property<int64_t>(keys::value, Required::yes, "Value to be written", 0, Bound<int64_t>::unused(), Bound<int64_t>::unused()),
                                                                                                                                       string_property(util::keys::command_id, Required::yes, "command ID", "some-command-id", StringFormat::None),
                                                                                                                                   }),
                                  Variant({ ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::set_point_discrete) }, {
                                                                                                                                              string_property(keys::name, Required::yes, "ICCP point name of control command", "", StringFormat::None),
                                                                                                                                              numeric_property<int64_t>(keys::value, Required::yes, "Value to be written", 0, Bound<int64_t>::unused(), Bound<int64_t>::unused()),
                                                                                                                                              string_property(util::keys::command_id, Required::yes, "command ID", "some-command-id", StringFormat::None),
                                                                                                                                          }),
                                  Variant({ ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::set_point_discrete_sbo) }, {
                                                                                                                                                  string_property(keys::name, Required::yes, "ICCP point name of control command", "", StringFormat::None),
                                                                                                                                                  numeric_property<int64_t>(keys::value, Required::yes, "Value to be written", 0, Bound<int64_t>::unused(), Bound<int64_t>::unused()),
                                                                                                                                                  string_property(util::keys::command_id, Required::yes, "command ID", "some-command-id", StringFormat::None),
                                                                                                                                              }),
                                  Variant({ ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::set_point_real) }, {
                                                                                                                                          string_property(keys::name, Required::yes, "ICCP point name of control command", "", StringFormat::None),
                                                                                                                                          numeric_property<float>(keys::value, Required::yes, "Value to be written", 0.0f, Bound<float>::unused(), Bound<float>::unused()),
                                                                                                                                          string_property(util::keys::command_id, Required::yes, "command ID", "some-command-id", StringFormat::None),
                                                                                                                                      }),
                                  Variant({ ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::set_point_real_sbo) }, {
                                                                                                                                              string_property(keys::name, Required::yes, "ICCP point name of control command", "", StringFormat::None),
                                                                                                                                              numeric_property<float>(keys::value, Required::yes, "Value to be written", 0.0f, Bound<float>::unused(), Bound<float>::unused()),
                                                                                                                                              string_property(util::keys::command_id, Required::yes, "command ID", "some-command-id", StringFormat::None),
                                                                                                                                          }),
                              }));
        }

        schema::Object ControlSchemaWriteVisitor::get_enum_schema()
        {
            return Object({}, OneOf({
                                  Variant({ ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::command) }, {
                                                                                                                                   string_property(keys::name, Required::yes, "ICCP point name of control command", "", StringFormat::None),
                                                                                                                                   string_property(util::keys::command_id, Required::yes, "command ID", "some-command-id", StringFormat::None),
                                                                                                                                   numeric_property<int64_t>(keys::value, Required::yes, "Value to be written", 0, Bound<int64_t>::unused(), Bound<int64_t>::unused()),
                                                                                                                               }),
                                  Variant({ ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::command_sbo) }, {
                                                                                                                                       string_property(keys::name, Required::yes, "ICCP point name of control command", "", StringFormat::None),
                                                                                                                                       string_property(util::keys::command_id, Required::yes, "command ID", "some-command-id", StringFormat::None),
                                                                                                                                       numeric_property<int64_t>(keys::value, Required::yes, "Value to be written", 0, Bound<int64_t>::unused(), Bound<int64_t>::unused()),
                                                                                                                                   }),
                                  Variant({ ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::set_point_discrete) }, {
                                                                                                                                              string_property(keys::name, Required::yes, "ICCP point name of control command", "", StringFormat::None),
                                                                                                                                              string_property(util::keys::command_id, Required::yes, "command ID", "some-command-id", StringFormat::None),
                                                                                                                                              numeric_property<int64_t>(keys::value, Required::yes, "Value to be written", 0, Bound<int64_t>::unused(), Bound<int64_t>::unused()),
                                                                                                                                          }),
                                  Variant({ ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::set_point_discrete_sbo) }, {
                                                                                                                                                  string_property(keys::name, Required::yes, "ICCP point name of control command", "", StringFormat::None),
                                                                                                                                                  string_property(util::keys::command_id, Required::yes, "command ID", "some-command-id", StringFormat::None),
                                                                                                                                                  numeric_property<int64_t>(keys::value, Required::yes, "Value to be written", 0, Bound<int64_t>::unused(), Bound<int64_t>::unused()),
                                                                                                                                              }),
                                  Variant({ ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::set_point_real) }, {
                                                                                                                                          string_property(keys::name, Required::yes, "ICCP point name of control command", "", StringFormat::None),
                                                                                                                                          string_property(util::keys::command_id, Required::yes, "command ID", "some-command-id", StringFormat::None),
                                                                                                                                          numeric_property<float>(keys::value, Required::yes, "Value to be written", 0, Bound<float>::unused(), Bound<float>::unused()),
                                                                                                                                      }),
                                  Variant({ ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::set_point_real_sbo) }, {
                                                                                                                                              string_property(keys::name, Required::yes, "ICCP point name of control command", "", StringFormat::None),
                                                                                                                                              string_property(util::keys::command_id, Required::yes, "command ID", "some-command-id", StringFormat::None),
                                                                                                                                              numeric_property<float>(keys::value, Required::yes, "Value to be written", 0, Bound<float>::unused(), Bound<float>::unused()),
                                                                                                                                          }),
                              }));
        }

        std::shared_ptr<schema::Object> ControlSchemaWriteVisitor::get_control_schema()
        {
            return std::make_shared<schema::Object>(std::vector<property_ptr_t>{
                array_property(
                    util::keys::outputs,
                    Required::yes,
                    "ICCP commands to execute",
                    Object({}, OneOf({
                                   Variant({ ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::command) }, { string_property(keys::name, Required::yes, "ICCP point name of control command", "", StringFormat::None), string_property(util::keys::command_id, Required::yes, "command ID", "some-command-id", StringFormat::None), numeric_property<float>(util::keys::scale, Required::yes, "scaling to apply", 1.0f, Bound<float>::unused(), Bound<float>::unused()) }),
                                   Variant({ ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::command_sbo) }, { string_property(keys::name, Required::yes, "ICCP point name of control command", "", StringFormat::None), string_property(util::keys::command_id, Required::yes, "command ID", "some-command-id", StringFormat::None), numeric_property<float>(util::keys::scale, Required::yes, "scaling to apply", 1.0f, Bound<float>::unused(), Bound<float>::unused()) }),
                                   Variant({ ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::set_point_real) }, { string_property(keys::name, Required::yes, "ICCP point name of control command", "", StringFormat::None), string_property(util::keys::command_id, Required::yes, "command ID", "some-command-id", StringFormat::None), numeric_property<float>(util::keys::scale, Required::yes, "scaling to apply", 1.0f, Bound<float>::unused(), Bound<float>::unused()) }),
                                   Variant({ ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::set_point_real_sbo) }, { string_property(keys::name, Required::yes, "ICCP point name of control command", "", StringFormat::None), string_property(util::keys::command_id, Required::yes, "command ID", "some-command-id", StringFormat::None), numeric_property<float>(util::keys::scale, Required::yes, "scaling to apply", 1.0f, Bound<float>::unused(), Bound<float>::unused()) }),
                                   Variant({ ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::set_point_discrete) }, { string_property(keys::name, Required::yes, "ICCP point name of control command", "", StringFormat::None), string_property(util::keys::command_id, Required::yes, "command ID", "some-command-id", StringFormat::None), numeric_property<float>(util::keys::scale, Required::yes, "scaling to apply", 1.0f, Bound<float>::unused(), Bound<float>::unused()) }),
                                   Variant({ ConstantProperty::from_enum<CommandPointType>(CommandPointType::Value::set_point_discrete_sbo) }, { string_property(keys::name, Required::yes, "ICCP point name of control command", "", StringFormat::None), string_property(util::keys::command_id, Required::yes, "command ID", "some-command-id", StringFormat::None), numeric_property<float>(util::keys::scale, Required::yes, "scaling to apply", 1.0f, Bound<float>::unused(), Bound<float>::unused()) }),
                               }))) });
        }

    }
}
}
