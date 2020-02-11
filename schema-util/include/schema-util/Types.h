
#ifndef OPENFMB_ADAPTER_TYPES_H
#define OPENFMB_ADAPTER_TYPES_H

#include <memory>
#include <vector>

namespace adapter {
    namespace schema {

        template <class T>
        struct Bound {
            Bound(bool valid, T value) : valid(valid), value(value) {}

            static Bound unused() {
                return Bound(false, T {});
            }

            static Bound from(T value) {
                return Bound(true, value);
            }

            const bool valid;
            const T value;
        };

        class IVisitor;

        class IProperty {
           public:

            virtual ~IProperty() = default;
            virtual const std::string& get_name() const = 0;
            virtual bool is_required() const = 0;
            virtual void visit(IVisitor& visitor) = 0;
        };

        using property_ptr_t = std::unique_ptr<IProperty>;

        class PropertyBase  : public IProperty {
            const std::string name;
            const bool required;

        public:
            PropertyBase(std::string name, bool required) : name(std::move(name)), required(required) {}

            const std::string &get_name() const override {
                return this->name;
            }

            bool is_required() const override {
                return this->required;
            }
        };

        template <class T>
        class TypedProperty  : public PropertyBase {
            const T default_value;

        public:
            TypedProperty(std::string name, bool required, T default_value) :
                PropertyBase(std::move(name), required),
                default_value(std::move(default_value))
            {}

            const T& get_default_value() const {
                return this->default_value;
            }

            void visit(IVisitor& visitor) override;
        };

        template <class T>
        class BoundedProperty : public TypedProperty<T> {
        public:
            Bound<T> min;
            Bound<T> max;

            BoundedProperty(std::string name, bool required, T default_value, Bound<T> min, Bound<T> max) :
                 TypedProperty<T>(std::move(name), required, default_value),
                 min(min),
                 max(max)
            {}

            void visit(IVisitor& visitor) override;
        };

        class ObjectProperty : public PropertyBase {
        public:
            const std::vector<property_ptr_t> fields;

            ObjectProperty(std::string name, bool required, std::vector<property_ptr_t> fields)   :
                    PropertyBase(std::move(name), required),
                    fields(std::move(fields))
            {}

            void visit(IVisitor& visitor) override;
        };

        class IVisitor {
        public:
            virtual ~IVisitor() = default;

            virtual void begin(const ObjectProperty&) = 0;
            virtual void on_property(const TypedProperty<std::string>&) = 0;
            virtual void on_property(const BoundedProperty<float>&) = 0;
            virtual void on_property(const BoundedProperty<int64_t>&) = 0;
            virtual void end(const ObjectProperty&) = 0;
        };

        template <class T>
        void TypedProperty<T>::visit(IVisitor& visitor) {
            visitor.on_property(*this);
        }

        template <class T>
        void BoundedProperty<T>::visit(IVisitor& visitor) {
            visitor.on_property(*this);
        }


        /// ---------  DSL for building up complex schemas -----------

        property_ptr_t string_property(std::string name, bool required, std::string default_value)
        {
            return std::make_unique<TypedProperty<std::string>>(std::move(name), required, std::move(default_value));
        }

        template <class ... Properties>
        property_ptr_t object_property(const std::string& name, bool required, Properties... properties)
        {
            std::vector<property_ptr_t> fields;
            add_properties(properties ...);
            return std::make_unique<ObjectProperty>(name, required, std::move(fields));
        }

        template <class P, class ... Properties>
        void add_properties(std::vector<property_ptr_t>& vector, P property, Properties... properties)
        {
            vector.emplace_back(property);
            add_properties(vector, properties ...);
        }

        // base case
        template <class P, class ... Properties>
        void add_properties(std::vector<property_ptr_t>& vector) {}

    }
}

#endif //OPENFMB_ADAPTER_TYPES_H
