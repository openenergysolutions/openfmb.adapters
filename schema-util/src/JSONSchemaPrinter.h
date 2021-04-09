// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_JSONSCHEMAPRINTER_H
#define OPENFMB_ADAPTER_JSONSCHEMAPRINTER_H

#include "schema-util/Types.h"

#include "JSONWriter.h"

#include <unordered_map>

namespace adapter {
    namespace schema {

    class JSONSchemaPrinter final : public IVisitor {

        JSONWriter writer;
        std::unordered_map<std::string, ObjectProperty> references;

        // called after construction
        void declare_schema(const std::string& schema_id);

        void write_oneofs(const Object& object);
        bool has_required_fields(const std::vector<property_ptr_t>& fields);
        void write_object_required(const std::vector<property_ptr_t>& fields);

    public:

        JSONSchemaPrinter(std::ostream &output, const std::string& schema_id, bool pretty_print);

        void close_document(const std::vector<property_ptr_t>& fields);

        // ----- implement IVisitor -------

        void begin(const ObjectProperty &prop) override;

        void on_property(const ObjectRef& ref) override;

        void on_property(const BoolProperty& prop) override;

        void on_property(const StringProperty& prop) override;

        void on_property(const EnumProperty& prop) override;

        void on_property(const ArrayProperty& prop) override;

        void on_property(const NumericProperty<float> &prop) override;

        void on_property(const NumericProperty<double> &prop) override;

        void on_property(const NumericProperty<int64_t> &prop) override;

        void on_property(const NumericProperty<uint16_t> &prop) override;

        void end(const ObjectProperty &prop) override;
    };

}}

#endif //OPENFMB_ADAPTER_JSONSCHEMAPRINTER_H

