
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

        void end_object(const Object& object);
        void write_object_required(const Object& object);

    public:

        JSONSchemaPrinter(std::ostream &output, const std::string& schema_id, bool pretty_print = false);

        void close_document(const std::vector<property_ptr_t>& fields);

        // ----- implement IVisitor -------

        void begin(const ObjectProperty &prop) override;

        void on_property(const BoolProperty& prop) override;

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

