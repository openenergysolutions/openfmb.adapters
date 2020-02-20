
#ifndef OPENFMB_ADAPTER_SCHEMAUTIL_TYPES_H
#define OPENFMB_ADAPTER_SCHEMAUTIL_TYPES_H

#include "IProperty.h"

#include <memory>
#include <vector>
#include <map>
#include <set>

namespace adapter {
    namespace schema {

        enum class Required {
            yes,
            no
        };

        struct PropertyMetadata {
            const Required required;
            const std::string name;
            const std::string description;

            PropertyMetadata(
                    Required required,
                    std::string name,
                    std::string description
            ) :
                    required(required),
                    name(std::move(name)),
                    description(std::move(description)) {}
        };

        template<class T>
        struct Bound {
            Bound(bool valid, T value) : valid(valid), value(value) {}

            static Bound unused() {
                return Bound(false, T{});
            }

            static Bound from(T value) {
                return Bound(true, value);
            }

            const bool valid;
            const T value;
        };

        class Object {
        public:
            /// Collection of all properties in an object
            const std::vector<property_ptr_t> properties;

            explicit Object(std::vector<property_ptr_t> properties) : properties(std::move(properties)) {}

            Object(const std::initializer_list<property_ptr_t> &properties) : properties(properties) {}
        };


        class PropertyBase : public IProperty {
            const PropertyMetadata metadata;

        public:
            explicit PropertyBase(PropertyMetadata metadata): metadata(std::move(metadata)) {}

            const std::string &get_description() const override {
                return this->metadata.description;
            }

            const std::string &get_name() const override {
                return this->metadata.name;
            }

            bool is_required() const override {
                return this->metadata.required == Required::yes;
            }
        };

        template<class T>
        class TypedPropertyBase : public PropertyBase {
            const T default_value;

        public:
            TypedPropertyBase(const PropertyMetadata& metadata, T default_value) :
                    PropertyBase(metadata),
                    default_value(std::move(default_value))
            {}

            const T &get_default_value() const {
                return this->default_value;
            }
        };

        enum class StringFormat {
            None,
            IPv4
        };

        class StringProperty : public TypedPropertyBase<std::string> {

        public:

            const StringFormat format;

            StringProperty(const PropertyMetadata& metadata, const std::string &default_value, StringFormat format) :
                    TypedPropertyBase<std::string>(metadata, default_value),
                    format(format)
            {}

            void visit(IVisitor &visitor) override;
        };

        class EnumProperty : public TypedPropertyBase<std::string> {
        public:
            const std::vector<std::string> values;

            EnumProperty(const PropertyMetadata& metadata, const std::string &default_value, std::vector<std::string> values) :
                    TypedPropertyBase<std::string>(metadata, default_value),
                    values(std::move(values))
            {}

            void visit(IVisitor &visitor) override;
        };

        template<class T>
        class NumericProperty : public TypedPropertyBase<T> {
        public:
            Bound<T> min;
            Bound<T> max;

            NumericProperty(const PropertyMetadata& metadata, const T &default_value, Bound<T> min, Bound<T> max) :
                    TypedPropertyBase<T>(metadata, default_value),
                    min(min),
                    max(max) {}

            void visit(IVisitor &visitor) override;
        };

        class ObjectProperty : public PropertyBase {
        public:
            const Object object;

            ObjectProperty(const PropertyMetadata& metadata, Object object) :
                    PropertyBase(metadata),
                    object(std::move(object)) {}

            void visit(IVisitor &visitor) override;
        };

        template<class Enum>
        struct Variant {
            typename Enum::value value;
            std::set<property_ptr_t> properties;

            static Variant from(typename Enum::value value, std::initializer_list<property_ptr_t> properties) {
                std::set<property_ptr_t> props;
                for (const auto &p : properties) {
                    if (props.count(p) > 0) {
                        throw std::runtime_error("duplicate property in enum variant");
                    }
                    props.insert(p);
                }
                return Variant{value, std::move(props)};
            }
        };

        template<class Enum>
        using enum_variant_map_t = std::map<typename Enum::Value, std::set<property_ptr_t>>;

        using enum_string_map_t = std::map<std::string, std::set<property_ptr_t>>;

        class IVisitor {
        public:
            virtual ~IVisitor() = default;

            virtual void begin(const ObjectProperty &prop) = 0;

            virtual void on_property(const StringProperty &prop) = 0;

            virtual void on_property(const EnumProperty &prop) = 0;

            virtual void on_property(const NumericProperty<float> &prop) = 0;

            virtual void on_property(const NumericProperty<int64_t> &prop) = 0;

            virtual void on_property(const NumericProperty<uint16_t> &prop) = 0;

            virtual void end(const ObjectProperty &prop) = 0;
        };

        template<class T>
        void NumericProperty<T>::visit(IVisitor &visitor) {
            visitor.on_property(*this);
        }

    }
}

#endif //OPENFMB_ADAPTER_TYPES_H
