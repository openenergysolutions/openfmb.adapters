
#ifndef OPENFMB_ADAPTER_JSONSCHEMAPRINTER_H
#define OPENFMB_ADAPTER_JSONSCHEMAPRINTER_H

#include "Types.h"

#include "JSONWriter.h"

namespace adapter {
    namespace schema {

    class JSONSchemaPrinter final : public IVisitor {

        JSONWriter writer;

        // called after construction
        void declare_schema(std::string schema_id);

    public:

        JSONSchemaPrinter(std::ostream &output, std::string schema_id);

        void close_document();

        // ----- implement IVisitor -------

        void begin(const ObjectProperty &prop) override;

        void on_property(const TypedProperty <std::string> &prop) override;

        void on_property(const BoundedProperty<float> &prop) override;

        void on_property(const BoundedProperty <int64_t> &prop) override;

        void on_property(const BoundedProperty <uint16_t> &prop) override;

        void end(const ObjectProperty &prop) override;
    };

}}

#endif //OPENFMB_ADAPTER_JSONSCHEMAPRINTER_H
