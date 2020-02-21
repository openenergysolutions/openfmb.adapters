
#ifndef OPENFMB_ADAPTER_JSONSCHEMAPRINTER_H
#define OPENFMB_ADAPTER_JSONSCHEMAPRINTER_H

#include "schema-util/Types.h"

#include "JSONWriter.h"

namespace adapter {
    namespace schema {

    class JSONSchemaPrinter final : public IVisitor {

        JSONWriter writer;

        // called after construction
        void declare_schema(const std::string& schema_id);

    public:

        JSONSchemaPrinter(std::ostream &output, const std::string& schema_id);

        void close_document(const std::initializer_list<property_ptr_t>& fields);

        // ----- implement IVisitor -------

        void begin(const ObjectProperty &prop) override;

        void on_property(const StringProperty& prop) override;

        void on_property(const EnumProperty& prop) override;

        void on_property(const ArrayProperty& prop) override;

        void on_property(const NumericProperty<float> &prop) override;

        void on_property(const NumericProperty<int64_t> &prop) override;

        void on_property(const NumericProperty<uint16_t> &prop) override;

        void end(const ObjectProperty &prop) override;
    };

}}

#endif //OPENFMB_ADAPTER_JSONSCHEMAPRINTER_H

