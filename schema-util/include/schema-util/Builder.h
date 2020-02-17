
#ifndef OPENFMB_ADAPTER_SCHEMAUTIL_BUILDER_H
#define OPENFMB_ADAPTER_SCHEMAUTIL_BUILDER_H

#include "Types.h"

#include <ostream>
#include <initializer_list>

namespace adapter {
    namespace schema {

        void write_schema(std::ostream& ostream, const std::string& id, std::initializer_list<property_ptr_t> properties);

        /// ---------  DSL for building up complex schemas -----------

        property_ptr_t string_property(const std::string& name, Required required, const std::string& default_value, StringFormat format, const std::string& description);

        template<class T>
        property_ptr_t numeric_property(const std::string& name, Required required, T default_value, const std::string& description, Bound<T> min, Bound<T> max)
        {
            return std::make_unique<NumericProperty<T>>(name, required, default_value, description, min, max);
        }

        template <class ... Properties>
        property_ptr_t object_property(const std::string& name, Required required, const std::string& description, Properties... properties)
        {
            std::vector<property_ptr_t> fields;
            add_properties(fields, properties ...);
            return std::make_unique<ObjectProperty>(name, required, description, std::move(fields));
        }

        template <class P, class ... Properties>
        void add_properties(std::vector<property_ptr_t>& vector, P property, Properties... properties)
        {
            vector.emplace_back(property);
            add_properties(vector, properties ...);
        }

        // base case
        void add_properties(std::vector<property_ptr_t>& vector);

    }
}

#endif //OPENFMB_ADAPTER_SCHEMAUTIL_BUILDER_H
