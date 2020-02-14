
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
            this->writer.begin_object(prop.get_name());
        }

        void JSONSchemaPrinter::on_property(const TypedProperty<std::string> &prop) {
            this->writer.write_property(prop.get_name(), prop.get_default_value());
        }

        void JSONSchemaPrinter::on_property(const BoundedProperty<float> &prop) {
            this->writer.write_property(prop.get_name(), prop.get_default_value());
        }

        void JSONSchemaPrinter::on_property(const BoundedProperty<int64_t> &prop) {
            this->writer.write_property(prop.get_name(), prop.get_default_value());
        }

        void JSONSchemaPrinter::on_property(const BoundedProperty<uint16_t> &prop) {
            this->writer.write_property(prop.get_name(), prop.get_default_value());
        }

        void JSONSchemaPrinter::end(const ObjectProperty &prop) {
            this->writer.end_object();
        }

    }
}


