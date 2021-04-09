// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "JSONWriter.h"

namespace adapter {
    namespace schema {

        void JSONWriter::print_indent()
        {
            if(pretty_print) {
                for (auto i = 0; i <= this->indent.size(); ++i) {
                    this->output << "    ";
                }
            }
        }

        void JSONWriter::flush_state(bool needs_delimiter)
        {
            if(this->closed) {
                throw std::runtime_error("document closed");
            }

            if(needs_delimiter && this->allow_delimiter) {
                this->output << ",";
            }

            this->allow_delimiter = false;

            if(this->needs_new_line && pretty_print) {
                this->output << std::endl;
            }

            this->needs_new_line = false;
        }
        void JSONWriter::end_indent(IndentType type)
        {
            if(this->indent.empty()) {
                throw std::runtime_error("no indent to pop");
            }

            if(this->indent.back() != type) {
                throw std::runtime_error("mismatched indent types");
            }

            this->indent.pop_back();
        }


        JSONWriter::JSONWriter(std::ostream &output, bool pretty_print) : output(output), pretty_print(pretty_print)
        {
            this->output << std::boolalpha;
            this->output << "{";
            if(pretty_print) {
                this->output << std::endl;
            }
        }

        void JSONWriter::begin_object_property(const std::string &name)
        {
            this->flush_state(true);

            this->print_indent();
            this->output << output::begin_object(name, pretty_print);
            this->indent.push_back(IndentType::object);
            this->needs_new_line = true;
            this->allow_delimiter = false;
        }

        void JSONWriter::begin_object()
        {
            this->flush_state(true);

            this->print_indent();
            this->output << "{";
            if(pretty_print) {
                this->output << std::endl;
            }
            this->indent.push_back(IndentType::object);
            this->needs_new_line = false;
            this->allow_delimiter = false;
        }


        void JSONWriter::end_object()
        {
            this->flush_state(false);
            this->end_indent(IndentType::object);
            this->print_indent();
            this->output << "}";
            this->needs_new_line = true;
            this->allow_delimiter = true;
        }

        void JSONWriter::begin_array(const std::string& name)
        {
            this->flush_state(true);
            this->print_indent();
            this->output << output::begin_array(name, pretty_print);
            this->indent.push_back(IndentType::array);
            this->needs_new_line = true;
            this->allow_delimiter = false;

        }

        void JSONWriter::end_array()
        {
            this->flush_state(false);
            this->end_indent(IndentType::array);
            this->print_indent();
            this->output << "]";
            this->needs_new_line = true;
            this->allow_delimiter = true;
        }

        void JSONWriter::close_document()
        {
            if(!this->indent.empty()) {
                throw std::runtime_error("can't close indented document");
            }

            this->flush_state(false);

            this->output << "}" << std::endl;
            this->closed = true;
        }

    }
}


