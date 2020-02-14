
#include "schema-util/JSONWriter.h"

namespace adapter {
    namespace schema {

        void JSONWriter::print_indent()
        {
            for (auto i = 0; i < indent; ++i) {
                this->output << "    ";
            }
        }

        JSONWriter::JSONWriter(std::ostream &output) : output(output)
        {
            this->output << "{" << std::endl;
        }

        void JSONWriter::begin_object(const std::string& name)
        {
            switch(this->last_action) {
                case(LastAction::close_document):
                    throw std::runtime_error("document closed");
                case(LastAction::end_object):
                case(LastAction::write_property):
                    this->output << "," << std::endl;
                    break;
                default:
                    break;
            }

            this->print_indent();
            this->output << output::begin_object(name) << std::endl;

            ++this->indent;
            this->last_action = LastAction::begin_object;
        }

        void JSONWriter::end_object()
        {
            switch(this->last_action) {
                case(LastAction::close_document):
                    throw std::runtime_error("document closed");
                case(LastAction::write_property):
                    this->output << std::endl;
                default:
                    break;
            }


            --this->indent;
            this->last_action = LastAction::end_object;
            this->print_indent();
            this->output << "}";
        }

        void JSONWriter::close_document()
        {
            switch(this->last_action) {
                case(LastAction::close_document):
                    throw std::runtime_error("document already closed");
                case(LastAction::end_object):
                case(LastAction::write_property):
                    this->output << std::endl;
                    break;
                default:
                    break;
            }

            if(this->indent != 1) {
                throw std::runtime_error("cannot close document with unterminated objects (indent != 1)");
            }

            this->output << "}" << std::endl;
            this->indent = 0;
            this->last_action = LastAction::close_document;
        }

    }
}


