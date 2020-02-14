
#include "schema-util/JSONSchemaPrinter.h"

#include "schema-util/JSONOutput.h"

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
            //this->writer.begin_object(prop.get_name());
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

        void JSONSchemaPrinter::on_property(const BoundedProperty<float> &prop) {
            this->writer.write_property(prop.get_name(), prop.get_default_value());
        }

        void JSONSchemaPrinter::on_property(const BoundedProperty<int64_t> &prop) {
            this->writer.write_property(prop.get_name(), prop.get_default_value());
        }

        void JSONSchemaPrinter::on_property(const BoundedProperty<uint16_t> &prop) {
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
            //this->writer.end_object();
        }

    }
}


