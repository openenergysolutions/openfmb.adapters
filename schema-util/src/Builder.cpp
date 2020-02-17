
#include "schema-util/Builder.h"

#include "JSONSchemaPrinter.h"

namespace adapter {
    namespace schema {

        void write_schema(std::ostream& ostream, const std::string& id, std::initializer_list<property_ptr_t> properties)
        {
            JSONSchemaPrinter printer(ostream, id);

            for(const auto& prop : properties) {
                prop->visit(printer);
            }

            printer.close_document(properties);
        }

        property_ptr_t string_property(const std::string& name, Required required, const std::string& default_value, StringFormat format, const std::string& description)
        {
            return std::make_unique<StringProperty>(name, required, default_value, format, description);
        }

        void add_properties(std::vector<property_ptr_t>& vector) {}

    }
}


