
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

        void StringProperty::visit(IVisitor& visitor) {
            visitor.on_property(*this);
        }

    }
}

