
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

        property_ptr_t string_property(std::string name, bool required, std::string default_value, StringFormat format, std::string description)
        {
            return std::make_unique<StringProperty>(std::move(name), required, std::move(default_value), format, std::move(description));
        }

        void add_properties(std::vector<property_ptr_t>& vector) {}

    }
}

