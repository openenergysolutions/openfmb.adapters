// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

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

        enum class Default {
            yes,
            no
        };

        struct PropertyMetadata {
            Required required;
            std::string name;
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

        struct ConstantProperty {
            const std::string property_name;
            const std::string value;

            ConstantProperty(std::string property_name, std::string value) :
                    property_name(std::move(property_name)),
                    value(std::move(value))
            {}

            template <typename Enum>
            static ConstantProperty from_enum(typename Enum::Value value) {
                return ConstantProperty(Enum::label, Enum::to_string(value));
            }
        };

        class Object;

        class Variant {
        public:
            std::vector<ConstantProperty> constant_values;
            std::shared_ptr<Object> obj;
            const Default is_default;

            Variant(const std::vector<ConstantProperty> &constant_values,
                    const std::initializer_list<property_ptr_t> &required_values,
                    Default is_default = Default::no)
                    : constant_values(constant_values),
                      obj(std::make_shared<Object>(required_values)),
                      is_default(is_default)
            {}

            Variant(const std::vector<ConstantProperty> &constant_values,
                    std::shared_ptr<Object> obj,
                    Default is_default = Default::no)
                    : constant_values(constant_values),
                      obj(std::move(obj)),
                      is_default(is_default)
            {}
        };

        class OneOf {
        public:
            std::vector<Variant> variants;

            OneOf() = default;
            OneOf(const std::initializer_list<Variant> &variants) : variants(variants) {}
        };

        class ObjectRefName {
        public:
            const std::string ref_name;

            ObjectRefName(std::string ref_name) : ref_name(std::move(ref_name)) {}
        };

        class Object {
        public:
            /// Collection of all properties in an object
            std::vector<property_ptr_t> properties;
            OneOf one_of;
            std::shared_ptr<ObjectRefName> ref;

            explicit Object(std::vector<property_ptr_t> properties) : properties(std::move(properties)) {}

            Object(std::vector<property_ptr_t> properties, OneOf one_of) : properties(std::move(properties)), one_of(std::move(one_of)) {}

            static Object create_ref(ObjectRefName ref_name, std::vector<property_ptr_t> properties, OneOf one_of) {
                auto obj = Object(properties, one_of);
                obj.ref = std::make_shared<ObjectRefName>(ref_name);
                return obj;
            }
        };

        class PropertyBase : public IProperty {
            PropertyMetadata metadata;

        public:
            explicit PropertyBase(PropertyMetadata metadata): metadata(std::move(metadata)) {}

            const std::string &get_description() const override {
                return this->metadata.description;
            }

            const std::string &get_name() const override {
                return this->metadata.name;
            }

            void set_name(const std::string& name) {
                this->metadata.name = name;
            }

            bool is_required() const override {
                return this->metadata.required == Required::yes;
            }

            void set_required() override {
                this->metadata.required = Required::yes;
            }
        };

        class ObjectRef : public PropertyBase {
        public:
            const ObjectRefName ref_name;

            ObjectRef(const PropertyMetadata& metadata, ObjectRefName ref_name) :
                PropertyBase(metadata),
                ref_name(std::move(ref_name))
            {}

            void visit(IVisitor& visitor) override;
        };

        class ArrayProperty : public PropertyBase {
        public:

            property_ptr_t array_items;

            ArrayProperty(const PropertyMetadata &metadata, property_ptr_t arrayItems) :
                PropertyBase(metadata),
                array_items(std::move(arrayItems))
            {}

            void visit(IVisitor &visitor) override;
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

        class BoolProperty : public TypedPropertyBase<bool> {

        public:

            BoolProperty(const PropertyMetadata& metadata, bool default_value) :
                    TypedPropertyBase<bool>(metadata, default_value)
            {}

            void visit(IVisitor &visitor) override;
        };



        enum class StringFormat {
            None,
            IPv4,
            Uuid,
            Subject,
            BitString,
            MacAddress
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

        template <class Enum>
        class TypedEnumProperty: public EnumProperty {
        public:
            TypedEnumProperty(const PropertyMetadata& metadata, const std::string &default_value, const std::vector<std::string>& values) :
                    EnumProperty(metadata, default_value, values)
            {}

            ConstantProperty when(typename Enum::Value value) {
                return ConstantProperty(this->get_name(), Enum::to_string(value));
            }
        };

        template<class T>
        class NumericProperty : public TypedPropertyBase<T> {
        public:
            const Bound<T> min;
            const Bound<T> max;

            NumericProperty(const PropertyMetadata& metadata, const T &default_value, Bound<T> min, Bound<T> max) :
                    TypedPropertyBase<T>(metadata, default_value),
                    min(min),
                    max(max) {}

            void visit(IVisitor &visitor) override;
        };



        class ObjectProperty : public PropertyBase {
        public:
            Object object;

            ObjectProperty(const PropertyMetadata& metadata, Object object) :
                    PropertyBase(metadata),
                    object(std::move(object))
            {}

            void visit(IVisitor &visitor) override;
        };

        class IVisitor {
        public:
            virtual ~IVisitor() = default;

            virtual void begin(const ObjectProperty &prop) = 0;

            virtual void on_property(const ObjectRef & ref) = 0;

            virtual void on_property(const BoolProperty &prop) = 0;

            virtual void on_property(const StringProperty &prop) = 0;

            virtual void on_property(const EnumProperty &prop) = 0;

            virtual void on_property(const ArrayProperty& prop) = 0;

            virtual void on_property(const NumericProperty<float> &prop) = 0;

            virtual void on_property(const NumericProperty<double> &prop) = 0;

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
