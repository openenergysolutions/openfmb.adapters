
#ifndef OPENFMB_ADAPTER_JSONWRITER_H
#define OPENFMB_ADAPTER_JSONWRITER_H

#include <ostream>

#include "JSONOutput.h"

namespace adapter {
    namespace schema {

    class JSONWriter final {

        enum class LastAction {
            none,
            write_property,
            close_document,
            begin_object,
            end_object
        };

        LastAction last_action = LastAction::none;
        size_t indent = 1;
        std::ostream& output;

        void print_indent();

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
        switch(this->last_action) {
            case(LastAction::close_document):
                throw std::runtime_error("cannot write after close");
            case(LastAction::write_property):
                this->output << "," << std::endl;
                break;
            default:
                break;
        }

        this->print_indent();
        this->output << output::property(name, value);
        this->last_action = LastAction::write_property;
    }



}}

#endif //OPENFMB_ADAPTER_JSONWRITER_H
