
#ifndef OPENFMB_ADAPTER_SCHEMAUTIL_BUILDER_H
#define OPENFMB_ADAPTER_SCHEMAUTIL_BUILDER_H

#include "Types.h"

#include <ostream>
#include <initializer_list>

namespace adapter {
    namespace schema {

        void write_schema(std::ostream& ostream, const std::string& id, std::initializer_list<property_ptr_t> properties);

        /// ---------  DSL for building up complex schemas -----------

        property_ptr_t string_property(const std::string& name, Required required, const std::string& description, const std::string& default_value, StringFormat format);

        property_ptr_t object_property(const std::string& name, Required required, const std::string& description, Object object);

        property_ptr_t array_property(const std::string& name, Required required, const std::string& description, Object object);

        template <class Enum>
        std::shared_ptr<TypedEnumProperty<Enum>> enum_property(Required required, const std::string& description, typename Enum::Value default_value)
        {
            std::vector<std::string> values;
            for(auto value : Enum::values) {
                values.push_back(Enum::to_string(value));
            }

            return std::make_shared<TypedEnumProperty<Enum>>(PropertyMetadata(required, Enum::label, description), Enum::to_string(default_value), std::move(values));
        }

        template<class T>
        property_ptr_t numeric_property(const std::string& name, Required required, const std::string& description, T default_value, Bound<T> min, Bound<T> max)
        {
            return std::make_shared<NumericProperty<T>>(PropertyMetadata(required, name, description), default_value, min, max);
        }

    }
}

#endif //OPENFMB_ADAPTER_SCHEMAUTIL_BUILDER_H
