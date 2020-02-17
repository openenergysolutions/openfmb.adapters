
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
            virtual const std::string& get_description() const = 0;
            virtual bool is_required() const = 0;
            virtual void visit(IVisitor& visitor) = 0;
        };

        using property_ptr_t = std::shared_ptr<IProperty>;

        class PropertyBase  : public IProperty {
            const std::string name;
            const bool required;
            const std::string description;

        public:
            PropertyBase(std::string name, bool required, std::string description)
                :
                name(std::move(name)),
                required(required),
                description(std::move(description))
            {}

            const std::string& get_description() const override {
                return this->description;
            }

            const std::string &get_name() const override {
                return this->name;
            }

            bool is_required() const override {
                return this->required;
            }
        };

        template <class T>
        class TypedPropertyBase  : public PropertyBase {
            const T default_value;

        public:
            TypedPropertyBase(const std::string& name, bool required, const T& default_value, const std::string& description) :
                    PropertyBase(name, required, description),
                    default_value(default_value)
            {}

            const T& get_default_value() const {
                return this->default_value;
            }
        };

        enum class StringFormat {
            None,
            IPv4
        };

        class StringProperty  : public TypedPropertyBase<std::string> {

        public:

            const StringFormat format;

            StringProperty(const std::string& name, bool required, const std::string& default_value, StringFormat format, const std::string& description) :
                    TypedPropertyBase<std::string>(name, required, default_value, description),
                    format(format)
            {}

            void visit(IVisitor& visitor) override;
        };

        template <class T>
        class BoundedProperty : public TypedPropertyBase<T> {
        public:
            Bound<T> min;
            Bound<T> max;

            BoundedProperty(const std::string& name, bool required, const T& default_value, const std::string& description, Bound<T> min, Bound<T> max) :
                 TypedPropertyBase<T>(name, required, default_value, description),
                 min(min),
                 max(max)
            {}

            void visit(IVisitor& visitor) override;
        };

        class ObjectProperty : public PropertyBase {
        public:
            const std::vector<property_ptr_t> fields;

            ObjectProperty(std::string name, bool required, std::string description, std::vector<property_ptr_t> fields)   :
                    PropertyBase(std::move(name), required, std::move(description)),
                    fields(std::move(fields))
            {}

            void visit(IVisitor& visitor) override;
        };

        class IVisitor {
        public:
            virtual ~IVisitor() = default;

            virtual void begin(const ObjectProperty& prop) = 0;
            virtual void on_property(const StringProperty& prop) = 0;
            virtual void on_property(const BoundedProperty<float>& prop) = 0;
            virtual void on_property(const BoundedProperty<int64_t>& prop) = 0;
            virtual void on_property(const BoundedProperty<uint16_t>& prop) = 0;
            virtual void end(const ObjectProperty& prop) = 0;
        };

        template <class T>
        void BoundedProperty<T>::visit(IVisitor& visitor) {
            visitor.on_property(*this);
        }


        /// ---------  DSL for building up complex schemas -----------

        property_ptr_t string_property(const std::string& name, bool required, const std::string& default_value, StringFormat format, const std::string& description);

        template<class T>
        property_ptr_t bounded_property(const std::string& name, bool required, T default_value, const std::string& description, Bound<T> min, Bound<T> max)
        {
            return std::make_unique<BoundedProperty<T>>(name, required, default_value, description, min, max);
        }

        template <class ... Properties>
        property_ptr_t object_property(const std::string& name, bool required, const std::string& description, Properties... properties)
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

#endif //OPENFMB_ADAPTER_TYPES_H
