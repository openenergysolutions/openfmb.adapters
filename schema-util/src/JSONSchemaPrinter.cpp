
#include "JSONSchemaPrinter.h"

#include "JSONOutput.h"

namespace adapter {
    namespace schema {

        void JSONSchemaPrinter::declare_schema(std::string schema_id)
        {
            writer.write_property("$schema", "http://json-schema.org/schema#");
            writer.write_property("id", schema_id);
            writer.begin_object("properties");
        }

        void JSONSchemaPrinter::close_document()
        {
           writer.end_object();
           writer.close_document();
        }

        JSONSchemaPrinter::JSONSchemaPrinter(std::ostream &output, std::string schema_id) : writer(output)
        {
            this->declare_schema(std::move(schema_id));
        }

        void JSONSchemaPrinter::begin(const ObjectProperty &prop) {
            this->writer.begin_object(prop.get_name());
            this->writer.write_property("description", prop.get_description());
            this->writer.write_property("type", "object");
            this->writer.begin_object("properties");
        }

        void JSONSchemaPrinter::on_property(const StringProperty& prop) {
            this->writer.begin_object(prop.get_name());
            this->writer.write_property("description", prop.get_description());
            this->writer.write_property("type", "string");
            switch(prop.format) {
                case(StringFormat::IPv4):
                    this->writer.write_property("format", "ipv4");
                    break;
                default:
                    break;
            }

            this->writer.end_object();
        }

        void JSONSchemaPrinter::on_property(const NumericProperty<float> &prop) {
            this->writer.write_property(prop.get_name(), prop.get_default_value());
        }

        void JSONSchemaPrinter::on_property(const NumericProperty<int64_t> &prop) {
            this->writer.write_property(prop.get_name(), prop.get_default_value());
        }

        void JSONSchemaPrinter::on_property(const NumericProperty<uint16_t> &prop) {
            this->writer.begin_object(prop.get_name());
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
            this->writer.begin_array("required");
            for(const auto& field : prop.fields) {  // list required fields
                if(field->is_required()) {
                    writer.write_scalar(field->get_name());
                }
            }
            this->writer.end_array();
            this->writer.end_object(); // end object
        }

    }
}


