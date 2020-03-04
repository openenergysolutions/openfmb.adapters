
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
                case(StringFormat::Uuid):
                    this->writer.write_property("pattern", "[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}");
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

            prop.array_items->visit(*this);

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

            // list required fields
            this->writer.begin_array("required");
            this->write_object_required(prop.object);
            this->writer.end_array();

            // write oneofs
            this->end_object(prop.object);

            this->writer.end_object(); // end object
        }

        void JSONSchemaPrinter::end_object(const Object& object)
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
                    this->end_object(*variant.obj);

                    // required properties for this variant
                    this->writer.begin_array("required");
                    for(const auto& constant : variant.constant_values) {
                        this->writer.write_scalar(constant.property_name);
                    }
                    this->write_object_required(*variant.obj);
                    this->writer.end_array();

                    this->writer.end_object();
                }

                this->writer.end_array();
            }
        }

        void JSONSchemaPrinter::write_object_required(const Object& object)
        {
            for(const auto& field : object.properties) {
                if(field->is_required()) {
                    writer.write_scalar(field->get_name());
                }
            }
        }

    }
}
