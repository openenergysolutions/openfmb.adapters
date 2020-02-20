
#ifndef OPENFMB_ADAPTER_SCHEMAUTIL_TYPES_H
#define OPENFMB_ADAPTER_SCHEMAUTIL_TYPES_H

#include "IProperty.h"

#include <memory>
#include <utility>
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

        struct ConstantProperty {
            const property_ptr_t property;
            const std::string value;

            ConstantProperty(property_ptr_t property, std::string value) :
                property(std::move(property)),
                value(std::move(value))
            {}
        };

        class Variant {
        public:
            const std::vector<ConstantProperty> constant_values;
            const std::vector<property_ptr_t> required_values;

            Variant(const std::initializer_list<ConstantProperty> &constant_values,
                    const std::initializer_list<property_ptr_t> &required_values)
                    : constant_values(constant_values),
                      required_values(required_values)
                      {}
        };

        class OneOf {
        public:
            const std::vector<Variant> variants;

            OneOf(const std::initializer_list<Variant> &variants) : variants(variants) {}
        };

        class ObjectProperty : public PropertyBase {
        public:
            const Object object;
            const std::unique_ptr<OneOf> one_of;

            ObjectProperty(const PropertyMetadata& metadata, Object object, std::unique_ptr<OneOf> one_of) :
                    PropertyBase(metadata),
                    object(std::move(object)),
                    one_of(std::move(one_of))
            {}

            void visit(IVisitor &visitor) override;
        };

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
