
#include "schema-util/Types.h"

namespace adapter {
    namespace schema {

        template <>
        std::string TypedPropertyBase<std::string>::get_schema_type_name()
        {
            return "string";
        }

        void ObjectProperty::visit(IVisitor& visitor) {
            visitor.begin(*this);
            for(auto& field : this->fields) {
                field->visit(visitor);
            }
            visitor.end(*this);
        }

        void add_properties(std::vector<property_ptr_t>& vector) {}

    }
}

