
#ifndef OPENFMB_ADAPTER_SCHEMAUTIL_BUILDER_H
#define OPENFMB_ADAPTER_SCHEMAUTIL_BUILDER_H

#include "Types.h"

#include <ostream>
#include <vector>

namespace adapter {
    namespace schema {

        void write_schema(std::ostream& ostream, const std::string& id, std::vector<property_ptr_t> properties, bool pretty_print);

        /// ---------  DSL for building up complex schemas -----------

        property_ptr_t bool_property(const std::string& name, Required required, const std::string& description, bool default_value);

        property_ptr_t string_property(const std::string& name, Required required, const std::string& description, const std::string& default_value, StringFormat format);

        std::shared_ptr<ObjectProperty> object_property(const std::string& name, Required required, const std::string& description, Object object);

        std::shared_ptr<ArrayProperty> array_property(const std::string& name, Required required, const std::string& description, Object object);

        std::shared_ptr<ArrayProperty> string_array_property(const std::string& name, Required required, const std::string& description, const std::string& default_value, StringFormat format);

        template <class Enum>
        std::shared_ptr<TypedEnumProperty<Enum>> enum_property(Required required, const std::string& description, typename Enum::Value default_value)
        {
            std::vector<std::string> values;
            for(auto value : Enum::values) {
                values.push_back(Enum::to_string(value));
            }

            return std::make_shared<TypedEnumProperty<Enum>>(PropertyMetadata(required, Enum::label, description), Enum::to_string(default_value), std::move(values));
        }

        template <class Enum>
        std::shared_ptr<TypedEnumProperty<Enum>> enum_property(std::initializer_list<typename Enum::Value> valid_values, Required required, const std::string& description, typename Enum::Value default_value)
        {
            std::vector<std::string> values;
            for(auto value : valid_values) {
                values.push_back(Enum::to_string(value));
            }

            return std::make_shared<TypedEnumProperty<Enum>>(PropertyMetadata(required, Enum::label, description), Enum::to_string(default_value), std::move(values));
        }

        std::shared_ptr<EnumProperty> enum_property(const std::string& label, const std::vector<std::string>& valid_values, Required required, const std::string& description, const std::string& default_value);

        template<class T>
        property_ptr_t numeric_property(const std::string& name, Required required, const std::string& description, T default_value, Bound<T> min, Bound<T> max)
        {
            return std::make_shared<NumericProperty<T>>(PropertyMetadata(required, name, description), default_value, min, max);
        }

    }
}

#endif //OPENFMB_ADAPTER_SCHEMAUTIL_BUILDER_H
