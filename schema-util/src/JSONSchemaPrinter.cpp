
#include "JSONSchemaPrinter.h"

#include "JSONOutput.h"

namespace adapter {
    namespace schema {

        void JSONSchemaPrinter::declare_schema(const std::string& schema_id)
        {
            writer.write_property("$schema", "http://json-schema.org/schema#");
            writer.write_property("id", schema_id);
            writer.begin_object_property("properties");
        }

        void JSONSchemaPrinter::close_document(const std::vector<property_ptr_t>& fields)
        {
           writer.end_object();
           writer.begin_array("required");
           for(const auto& field: fields) {
               if(field->is_required()) {
                   writer.write_scalar(field->get_name());
               }
           }
           writer.end_array();
           writer.close_document();
        }

        JSONSchemaPrinter::JSONSchemaPrinter(std::ostream &output, const std::string& schema_id) : writer(output)
        {
            this->declare_schema(schema_id);
        }

        void JSONSchemaPrinter::begin(const ObjectProperty &prop) {
            this->writer.begin_object_property(prop.get_name());
            this->writer.write_property("description", prop.get_description());
            this->writer.write_property("type", "object");
            this->writer.begin_object_property("properties");
        }

        void JSONSchemaPrinter::on_property(const BoolProperty& prop) {
            this->writer.begin_object_property(prop.get_name());
            this->writer.write_property("description", prop.get_description());
            this->writer.write_property("type", "boolean");
            this->writer.end_object();
        }

        void JSONSchemaPrinter::on_property(const StringProperty& prop) {
            this->writer.begin_object_property(prop.get_name());
            this->writer.write_property("description", prop.get_description());
            this->writer.write_property("type", "string");
            switch(prop.format) {
                case(StringFormat::Subject):
                    this->writer.write_property("pattern", "\\\\*|([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})");
                    break;
                case(StringFormat::IPv4):
                    this->writer.write_property("format", "ipv4");
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

            ObjectProperty object(PropertyMetadata(Required::yes, "items", ""), prop.array_type);
            object.visit(*this);

            this->writer.end_object();
        }

        void JSONSchemaPrinter::on_property(const NumericProperty<float> &prop) {
            this->writer.begin_object_property(prop.get_name());
            this->writer.write_property("description", prop.get_description());
            this->writer.write_property("type", "number");
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

            if(prop.object.one_of.variants.empty()) {
                this->writer.begin_array("required");
                for(const auto& field : prop.object.properties) {  // list required fields
                    if(field->is_required()) {
                        writer.write_scalar(field->get_name());
                    }
                }
                this->writer.end_array();
            }
            else {
                this->writer.begin_array("oneOf");

                for(const auto& variant : prop.object.one_of.variants) {
                    this->writer.begin_object();

                    // constant properties for this variant
                    this->writer.begin_object_property("properties");
                    for(const auto& constants : variant.constant_values) {
                        this->writer.begin_object_property(constants.property_name);
                        this->writer.write_property("const", constants.value);
                        this->writer.end_object();
                    }
                    this->writer.end_object();

                    // required properties for this variant
                    this->writer.begin_array("required");
                    for(const auto& required : variant.required_values) {
                        this->writer.write_scalar(required->get_name());
                    }
                    this->writer.end_array();

                    this->writer.end_object();
                }

                this->writer.end_array();
            }

            this->writer.end_object(); // end object
        }



    }
}


