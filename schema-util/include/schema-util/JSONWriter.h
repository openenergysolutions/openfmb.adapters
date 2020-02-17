
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
        bool closed = false;
        bool allow_delimiter = false;
        bool needs_new_line = false;
        std::vector<IndentType> indent;

        void print_indent();
        void flush_state(bool needs_delimiter);
        void end_indent(IndentType type);

    public:

        explicit JSONWriter(std::ostream &output);

        template <class T>
        void write_property(const std::string& name, const T& value);

        void begin_object(const std::string& name);

        void end_object();

        void close_document();
    };

    template <class T>
    void JSONWriter::write_property(const std::string& name, const T& value)
    {
        this->flush_state(true);
        this->print_indent();
        this->output << output::property(name, value);
        this->needs_new_line = this->allow_delimiter = true;
    }



}}

#endif //OPENFMB_ADAPTER_JSONWRITER_H
