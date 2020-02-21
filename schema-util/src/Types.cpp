
#include "schema-util/Types.h"

namespace adapter {
    namespace schema {

        void ObjectProperty::visit(IVisitor& visitor) {
            visitor.begin(*this);
            for(auto& field : this->object.properties) {
                field->visit(visitor);
            }
            visitor.end(*this);
        }

        void ArrayProperty::visit(IVisitor &visitor) {
            visitor.on_property(*this);
        }

        void StringProperty::visit(IVisitor& visitor) {
            visitor.on_property(*this);
        }

        void EnumProperty::visit(IVisitor &visitor) {
            visitor.on_property(*this);
        }

    }
}

