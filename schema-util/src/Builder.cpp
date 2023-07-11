// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "schema-util/Builder.h"

#include "JSONSchemaPrinter.h"

namespace adapter {
    namespace schema {

        void write_schema(std::ostream& ostream, const std::string& id, const std::string& title, std::vector<property_ptr_t> properties, bool pretty_print)
        {
            JSONSchemaPrinter printer(ostream, id, title, pretty_print);

            for(const auto& prop : properties) {
                prop->visit(printer);
            }

            printer.close_document(properties);
        }

        property_ptr_t bool_property(const std::string& name, Required required, const std::string& description, bool default_value)
        {
            return std::make_shared<BoolProperty>(PropertyMetadata(required, name, description), default_value);
        }

        property_ptr_t string_property(const std::string& name, Required required, const std::string& description, const std::string& default_value, StringFormat format)
        {
            return std::make_shared<StringProperty>(PropertyMetadata(required, name, description), default_value, format);
        }

        std::shared_ptr<ObjectProperty> object_property(const std::string& name, Required required, const std::string& description, Object object)
        {
            return std::make_shared<ObjectProperty>(PropertyMetadata(required, name, description), std::move(object));
        }

        std::shared_ptr<ArrayProperty> array_property(const std::string& name, Required required, const std::string& description, Object object)
        {
            return std::make_shared<ArrayProperty>(PropertyMetadata(required, name, description), object_property("items", Required::yes, "", std::move(object)));
        }

        std::shared_ptr<ArrayProperty> ref_array_property(const std::string& name, Required required, const std::string& description, const ObjectRefName& ref_name)
        {
            return std::make_shared<ArrayProperty>(PropertyMetadata(required, name, description), std::make_shared<ObjectRef>(PropertyMetadata(Required::yes, "items", ""), ref_name));
        }

        std::shared_ptr<ArrayProperty> string_array_property(const std::string& name, Required required, const std::string& description, const std::string& default_value, StringFormat format)
        {
            return std::make_shared<ArrayProperty>(PropertyMetadata(required, name, description), string_property("items", Required::yes, "", default_value, format));
        }

        std::shared_ptr<EnumProperty> enum_property(const std::string& label, const std::vector<std::string>& valid_values, Required required, const std::string& description, const std::string& default_value)
        {
            std::vector<std::string> values;
            for(auto value : valid_values) {
                values.push_back(value);
            }

            return std::make_shared<EnumProperty>(PropertyMetadata(required, label, description), default_value, std::move(values));
        }

    }
}
