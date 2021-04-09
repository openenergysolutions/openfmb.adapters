// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "GooseStructureConfigVisitor.h"

#include "adapter-api/Exception.h"
#include "schema-util/Builder.h"
#include "generated/Type.h"

namespace adapter {
namespace goose {

    void GooseStructureConfigVisitor::visit(const YAML::Node& node)
    {
        const auto mark = node.Mark();
        if (!node.IsSequence()) {
            throw api::Exception("Expected sequence at line: ", mark.line + 1);
        }

        for (auto it = node.begin(); it != node.end(); ++it) {
            if (!it->IsMap()) {
                throw api::Exception("Expected map at line: ", mark.line + 1);
            }

            auto map = *it;
            auto type_str = map.begin()->first.as<std::string>();
            auto type = Type::from_string(type_str);
            if (type == Type::Value::ignored) {
                on_ignore();
            } else {
                if (map.size() != 1) {
                    throw api::Exception("Expected exactly one element in map at line: ", mark.line + 1);
                }
                auto value = map.begin()->second;

                switch (type) {
                case Type::Value::structure:
                    on_structure(value);
                    break;
                case Type::Value::array:
                    on_array(value);
                    break;
                case Type::Value::boolean:
                    on_bool(value);
                    break;
                case Type::Value::integer:
                    on_integer(value);
                    break;
                case Type::Value::floating:
                    on_floating(value);
                    break;
                case Type::Value::visible_string:
                    on_visible_string(value);
                    break;
                case Type::Value::mms_string:
                    on_mms_string(value);
                    break;
                case Type::Value::bitstring:
                    on_bitstring(value);
                    break;
                case Type::Value::generalized_time:
                    on_generalized_time(value);
                    break;
                case Type::Value::binary_time:
                    on_binary_time(value);
                    break;
                case Type::Value::utc_time:
                    on_utc_time(value);
                    break;
                default:
                    throw api::Exception{ "Unsupported GOOSE type at line ", mark.line + 1 };
                }
            }
        }
    }

    schema::Object GooseStructureConfigVisitor::get_schema()
    {
        using namespace adapter::schema;

        const auto ref_name = ObjectRefName("goose-struct");

        return Object::create_ref(ref_name, std::vector<property_ptr_t>(), OneOf{
            Variant({}, {
                string_property(
                    Type::ignored,
                    Required::yes,
                    "Value is ignored",
                    "ignored",
                    StringFormat::None
                )
            }),
            Variant({}, {
                ref_array_property(
                    Type::structure,
                    Required::yes,
                    "Structure of values",
                    ref_name
                )
            }),
            Variant({}, {
                ref_array_property(
                    Type::array,
                    Required::yes,
                    "Array of values",
                    ref_name
                )
            }),
            Variant({}, {
                string_property(
                    Type::boolean,
                    Required::yes,
                    "true or false value",
                    "bool1",
                    StringFormat::None
                )
            }),
            Variant({}, {
                string_property(
                    Type::integer,
                    Required::yes,
                    "Int64 value",
                    "int1",
                    StringFormat::None
                )
            }),
            Variant({}, {
                string_property(
                    Type::floating,
                    Required::yes,
                    "Double-precision floating point value",
                    "float1",
                    StringFormat::None
                )
            }),
            Variant({}, {
                string_property(
                    Type::visible_string,
                    Required::yes,
                    "ASCII string",
                    "str1",
                    StringFormat::None
                )
            }),
            Variant({}, {
                string_property(
                    Type::mms_string,
                    Required::yes,
                    "UTF8 string",
                    "str1",
                    StringFormat::None
                )
            }),
            Variant({}, {
                string_property(
                    Type::bitstring,
                    Required::yes,
                    "Bitstring value",
                    "bitstring1",
                    StringFormat::None
                )
            }),
            Variant({}, {
                string_property(
                    Type::generalized_time,
                    Required::yes,
                    "Datetime possibly with timezone calculations. Precise to the milliseconds.",
                    "datetime1",
                    StringFormat::None
                )
            }),
            Variant({}, {
                string_property(
                    Type::binary_time,
                    Required::yes,
                    "Datetime based on epoch or 1984. Date and time after midnight are stored separately. Precise to the second.",
                    "datetime1",
                    StringFormat::None
                )
            }),
            Variant({}, {
                string_property(
                    Type::utc_time,
                    Required::yes,
                    "Datetime based on epoch. Precise to the microseconds.",
                    "datetime1",
                    StringFormat::None
                )
            }),
        });
    }

} // namespace goose
} // namespace adapter
