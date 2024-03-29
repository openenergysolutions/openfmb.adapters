// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "JSONSchemaPrinter.h"

#include "JSONOutput.h"

namespace adapter {
    namespace schema {

        void JSONSchemaPrinter::declare_schema(const std::string& schema_id, const std::string& title)
        {
            writer.write_property("$schema", "http://json-schema.org/draft-07/schema#");
            writer.write_property("$id", schema_id);
            writer.write_property("title", title);
            writer.write_property("type", "object");
            writer.begin_object_property("properties");
        }

        void JSONSchemaPrinter::close_document(const std::vector<property_ptr_t>& fields)
        {
           writer.end_object();

            // list required fields
           if(this->has_required_fields(fields)) {
                this->writer.begin_array("required");
                this->write_object_required(fields);
                this->writer.end_array();
            }

            // Write reference objects
            this->writer.begin_object_property("definitions");
            for(auto& it : references) {
                it.second.set_name(it.first);
                it.second.object.ref.reset();
                it.second.visit(*this);
            }
            this->writer.end_object();

           writer.close_document();
        }

        JSONSchemaPrinter::JSONSchemaPrinter(std::ostream &output, const std::string& schema_id, const std::string& title, bool pretty_print) : writer(output, pretty_print)
        {
            this->declare_schema(schema_id, title);
        }

        void JSONSchemaPrinter::begin(const ObjectProperty &prop) {
            this->writer.begin_object_property(prop.get_name());

            // Object is a reference, we will write it at root-level at a later stage
            if(prop.object.ref) {
                references.insert({prop.object.ref->ref_name, prop});

                // Write the pointer
                const auto name = "#/definitions/" + prop.object.ref->ref_name;
                this->writer.write_property("$ref", name);

                return;
            }

            this->writer.write_property("description", prop.get_description());
            this->writer.write_property("type", "object");
            this->writer.write_property("title", prop.get_name());
            this->writer.begin_object_property("properties");
        }

        void JSONSchemaPrinter::on_property(const ObjectRef& ref) {
            const auto name = "#/definitions/" + ref.ref_name.ref_name;
            this->writer.begin_object_property(ref.get_name());
            this->writer.write_property("$ref", name);
            this->writer.end_object();
        }

        void JSONSchemaPrinter::on_property(const BoolProperty& prop) {
            this->writer.begin_object_property(prop.get_name());
            this->writer.write_property("description", prop.get_description());
            this->writer.write_property("type", "boolean");
            this->writer.write_property("title", prop.get_name());
            this->writer.end_object();
        }

        void JSONSchemaPrinter::on_property(const StringProperty& prop) {
            this->writer.begin_object_property(prop.get_name());
            this->writer.write_property("description", prop.get_description());
            this->writer.write_property("type", "string");
            this->writer.write_property("title", prop.get_name());
            switch(prop.format) {
                case(StringFormat::Subject):
                    this->writer.write_property("pattern", "\\\\*|([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})");
                    break;
                case(StringFormat::Uuid):
                    this->writer.write_property("pattern", "[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}");
                    break;
                case(StringFormat::IPv4):
                    this->writer.write_property("format", "ipv4");
                    break;
                case(StringFormat::BitString):
                    this->writer.write_property("pattern", "[01]+");
                    break;
                case(StringFormat::MacAddress):
                    this->writer.write_property("pattern", "([0-9A-F]{2}[:-]){5}([0-9A-F]{2})");
                    break;
                case(StringFormat::None):
                    break;
                default:
                    throw std::runtime_error("unhandled string format");
            }

            this->writer.end_object();
        }

        void JSONSchemaPrinter::on_property(const EnumProperty& prop) {
            this->writer.begin_object_property(prop.get_name());
            
            this->writer.write_property("description", prop.get_description());
            this->writer.write_property("type", "string");
            this->writer.write_property("title", prop.get_name());

            this->writer.begin_array("enum");
            for(const auto& value : prop.values) {
                this->writer.write_scalar(value);
            }
            this->writer.end_array();

            this->writer.end_object();
        }

        void JSONSchemaPrinter::on_property(const ArrayProperty& prop) {
            this->writer.begin_object_property(prop.get_name());
            this->writer.write_property("description", prop.get_description());
            this->writer.write_property("type", "array");
            this->writer.write_property("title", prop.get_name());

            prop.array_items->visit(*this);

            this->writer.end_object();
        }

        void JSONSchemaPrinter::on_property(const NumericProperty<float> &prop) {
            this->writer.begin_object_property(prop.get_name());
            this->writer.write_property("description", prop.get_description());
            this->writer.write_property("type", "number");
            this->writer.write_property("title", prop.get_name());

            if(prop.min.valid) {
                this->writer.write_property("minimum", prop.min.value);
            }
            if(prop.max.valid) {
                this->writer.write_property("maximum", prop.max.value);
            }
            this->writer.end_object();
        }

        void JSONSchemaPrinter::on_property(const NumericProperty<double> &prop) {
            this->writer.begin_object_property(prop.get_name());
            this->writer.write_property("description", prop.get_description());
            this->writer.write_property("type", "number");
            this->writer.write_property("title", prop.get_name());

            if(prop.min.valid) {
                this->writer.write_property("minimum", prop.min.value);
            }
            if(prop.max.valid) {
                this->writer.write_property("maximum", prop.max.value);
            }
            this->writer.end_object();
        }

        void JSONSchemaPrinter::on_property(const NumericProperty<int64_t> &prop) {
            this->writer.begin_object_property(prop.get_name());
            this->writer.write_property("description", prop.get_description());
            this->writer.write_property("type", "integer");
            this->writer.write_property("title", prop.get_name());

            if(prop.min.valid) {
                this->writer.write_property("minimum", prop.min.value);
            }
            if(prop.max.valid) {
                this->writer.write_property("maximum", prop.max.value);
            }
            this->writer.end_object();
        }

        void JSONSchemaPrinter::on_property(const NumericProperty<uint16_t> &prop) {
            this->writer.begin_object_property(prop.get_name());
            this->writer.write_property("description", prop.get_description());
            this->writer.write_property("type", "integer");
            this->writer.write_property("title", prop.get_name());

            if(prop.min.valid) {
                this->writer.write_property("minimum", prop.min.value);
            }
            if(prop.max.valid) {
                this->writer.write_property("maximum", prop.max.value);
            }
            this->writer.end_object();
        }

        void JSONSchemaPrinter::end(const ObjectProperty &prop) {
            this->writer.end_object(); // end properties

            // Object is a reference, nothing else to do
            if(prop.object.ref) {
                return;
            }

            // write oneofs
            this->write_oneofs(prop.object);

            // list required fields
            if(this->has_required_fields(prop.object.properties)) {
                this->writer.begin_array("required");
                this->write_object_required(prop.object.properties);
                this->writer.end_array();
            }

            this->writer.end_object(); // end object
        }

        void JSONSchemaPrinter::write_oneofs(const Object& object)
        {
            if(!object.one_of.variants.empty()) {
                this->writer.begin_array("oneOf");

                for(const auto& variant : object.one_of.variants) {
                    this->writer.begin_object();

                    this->writer.begin_object_property("properties");
                    for(const auto& constants : variant.constant_values) {
                        this->writer.begin_object_property(constants.property_name);
                        this->writer.write_property("const", constants.value);
                        this->writer.end_object();
                    }

                    // properties for this variant
                    for(const auto& value : variant.obj->properties) {
                        value->visit(*this);
                    }
                    this->writer.end_object(); // end properties
                    this->write_oneofs(*variant.obj);

                    // required properties for this variant
                    this->writer.begin_array("required");
                    for(const auto& constant : variant.constant_values) {
                        this->writer.write_scalar(constant.property_name);
                    }
                    this->write_object_required(variant.obj->properties);
                    this->writer.end_array();

                    this->writer.end_object();
                }

                this->writer.end_array();
            }
        }

        bool JSONSchemaPrinter::has_required_fields(const std::vector<property_ptr_t>& fields)
        {
            for(const auto& field : fields) {
                if(field->is_required()) {
                    return true;
                }
            }
            return false;
        }

        void JSONSchemaPrinter::write_object_required(const std::vector<property_ptr_t>& fields)
        {
            for(const auto& field : fields) {
                if(field->is_required()) {
                    writer.write_scalar(field->get_name());
                }
            }
        }

    }
}
