
#include "schema-util/Types.h"

namespace adapter {
    namespace schema {

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

