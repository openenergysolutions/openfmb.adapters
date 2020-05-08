
#ifndef OPENFMB_ADAPTER_JSONWRITER_H
#define OPENFMB_ADAPTER_JSONWRITER_H

#include "JSONOutput.h"

#include <ostream>
#include <vector>

namespace adapter {
    namespace schema {

    class JSONWriter final {

        enum class IndentType {
            object,
            array
        };

        std::ostream& output;
        const bool pretty_print;
        bool closed = false;
        bool allow_delimiter = false;
        bool needs_new_line = false;
        std::vector<IndentType> indent;

        void print_indent();
        void flush_state(bool needs_delimiter);
        void end_indent(IndentType type);

    public:

        explicit JSONWriter(std::ostream &output, bool pretty_print);

        template <class T>
        void write_property(const std::string& name, const T& value);

        template <class T>
        void write_scalar(const T& value);

        void begin_object_property(const std::string& name);

        void begin_object();

        void end_object();

        void begin_array(const std::string& name);

        void end_array();

        void close_document();
    };

    template <class T>
    void JSONWriter::write_property(const std::string& name, const T& value)
    {
        this->flush_state(true);
        this->print_indent();
        this->output << output::property(name, value, pretty_print);
        this->needs_new_line = this->allow_delimiter = true;
    }

    template <class T>
    void JSONWriter::write_scalar(const T& value)
    {
        if(this->indent.empty() && this->indent.back() != JSONWriter::IndentType::array) {
            throw std::runtime_error("can only write scalars as elements of an array");
        }

        this->flush_state(true);
        this->print_indent();

        if(output::is_type_quoted<T>()) {
            output << output::quoted(value);
        } else {
            output << value;
        }

        this->needs_new_line = this->allow_delimiter = true;
    }



}}

#endif //OPENFMB_ADAPTER_JSONWRITER_H
