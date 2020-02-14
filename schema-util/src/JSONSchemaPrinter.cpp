
#include "schema-util/JSONSchemaPrinter.h"

#include "schema-util/JSONOutput.h"

namespace adapter {
    namespace schema {

        void JSONSchemaPrinter::print_indent() {
            for (auto i = 0; i < indent; ++i) {
                this->output << "    ";
            }
        }

        void JSONSchemaPrinter::declare_schema(std::string schema_id)
        {
            this->output << "{" << std::endl;
            ++indent;
            this->print_indent();
            this->output << output::property("$schema", "http://json-schema.org/schema#") << std::endl;
            this->print_indent();
            this->output << output::property("id", schema_id) << std::endl;
            this->print_indent();
            this->output << output::begin_object("properties") << std::endl;
            ++indent;
        }

        void JSONSchemaPrinter::finalize_schema()
        {
            // close the properties tag
            --indent;
            this->print_indent();
            this->output << "}" << std::endl;

            //close the main schema braces
            --indent;
            this->print_indent();
            this->output << "}" << std::endl;
        }


        JSONSchemaPrinter::JSONSchemaPrinter(std::ostream &output, std::string schema_id) : output(output)
        {
            this->declare_schema(std::move(schema_id));
        }

        JSONSchemaPrinter::~JSONSchemaPrinter()
        {
            this->finalize_schema();
        }

        void JSONSchemaPrinter::begin(const ObjectProperty &prop) {
            print_indent();
            this->output << output::begin_object(prop.get_name()) << std::endl;
            ++indent;
        }

        void JSONSchemaPrinter::on_property(const TypedProperty<std::string> &prop) {
            print_indent();
            this->output << output::property(prop.get_name(), prop.get_default_value()) << std::endl;
        }

        void JSONSchemaPrinter::on_property(const BoundedProperty<float> &prop) {
            print_indent();
            this->output << output::property(prop.get_name(), prop.get_default_value()) << std::endl;
        }

        void JSONSchemaPrinter::on_property(const BoundedProperty<int64_t> &prop) {
            print_indent();
            this->output << output::property(prop.get_name(), prop.get_default_value()) << std::endl;
        }

        void JSONSchemaPrinter::on_property(const BoundedProperty<uint16_t> &prop) {
            print_indent();
            this->output << output::property(prop.get_name(), prop.get_default_value()) << std::endl;
        }

        void JSONSchemaPrinter::end(const ObjectProperty &prop) {
            --indent;
            print_indent();
            this->output << "}" << std::endl;
        }

    }
}


