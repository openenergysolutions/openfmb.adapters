
#include "schema-util/Types.h"

namespace adapter {
    namespace schema {


        void StringProperty::visit(IVisitor& visitor) {
            visitor.on_property(*this);
        }

        void ObjectProperty::visit(IVisitor& visitor) {
            visitor.on_property(*this);
        }



    }
}

