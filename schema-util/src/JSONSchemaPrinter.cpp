
#include "schema-util/JSONSchemaPrinter.h"

namespace adapter {
    namespace schema {

        void JSONSchemaPrinter::print_indent() {
            for (auto i = 0; i < indent; ++i) {
                this->output << "    ";
            }
        }

        JSONSchemaPrinter::JSONSchemaPrinter(std::ostream &output) : output(output) {}

        void JSONSchemaPrinter::begin(const ObjectProperty &prop) {
            print_indent();
            this->output << prop.get_name() << " {" << std::endl;
            ++indent;
        }

        void JSONSchemaPrinter::on_property(const TypedProperty<std::string> &prop) {
            print_indent();
            this->output << prop.get_name() << ": " << prop.get_default_value() << "," << std::endl;
        }

        void JSONSchemaPrinter::on_property(const BoundedProperty<float> &prop) {
            print_indent();
            this->output << prop.get_name() << "; " << prop.get_default_value() << "," << std::endl;
        }

        void JSONSchemaPrinter::on_property(const BoundedProperty<int64_t> &prop) {
            print_indent();
            this->output << prop.get_name() << ": " << prop.get_default_value() << "," << std::endl;
        }

        void JSONSchemaPrinter::on_property(const BoundedProperty<uint16_t> &prop) {
            print_indent();
            this->output << prop.get_name() << ": " << prop.get_default_value() << "," << std::endl;
        }

        void JSONSchemaPrinter::end(const ObjectProperty &prop) {
            this->output << "}" << std::endl;
            --indent;
        }

    }
}


