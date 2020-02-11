
#ifndef OPENFMB_ADAPTER_JSONSCHEMAPRINTER_H
#define OPENFMB_ADAPTER_JSONSCHEMAPRINTER_H

#include "Types.h"

#include <ostream>

namespace adapter {
    namespace schema {

    class JSONSchemaPrinter : public IVisitor {
        size_t indent = 0;
        std::ostream& output;


        void print_indent();

    public:

        explicit JSONSchemaPrinter(std::ostream &output);

        void begin(const ObjectProperty &prop) override;

        void on_property(const TypedProperty <std::string> &prop) override;

        void on_property(const BoundedProperty<float> &prop) override;

        void on_property(const BoundedProperty <int64_t> &prop) override;

        void on_property(const BoundedProperty <uint16_t> &prop) override;

        void end(const ObjectProperty &prop) override;
    };

}}

#endif //OPENFMB_ADAPTER_JSONSCHEMAPRINTER_H
