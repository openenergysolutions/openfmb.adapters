
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

        property_ptr_t string_property(const std::string& name, Required required, const std::string& description, const std::string& default_value, StringFormat format)
        {
            return std::make_shared<StringProperty>(PropertyMetadata(required, name, description), default_value, format);
        }

        property_ptr_t object_property(const std::string& name, Required required, const std::string& description, std::initializer_list<property_ptr_t> properties, std::unique_ptr<OneOf> one_of)
        {
            return std::make_shared<ObjectProperty>(PropertyMetadata(required, name, description), properties, std::move(one_of));
        }

    }
}


