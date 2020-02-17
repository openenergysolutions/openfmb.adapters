
#ifndef OPENFMB_ADAPTER_SCHEMAUTIL_TYPES_H
#define OPENFMB_ADAPTER_SCHEMAUTIL_TYPES_H

#include <memory>
#include <vector>

namespace adapter {
    namespace schema {

        enum class Required {
            yes,
            no
        };

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
            const Required required;
            const std::string description;

        public:
            PropertyBase(std::string name, Required required, std::string description)
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
                return this->required == Required::yes;
            }
        };

        template <class T>
        class TypedPropertyBase  : public PropertyBase {
            const T default_value;

        public:
            TypedPropertyBase(const std::string& name, Required required, const T& default_value, const std::string& description) :
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

            StringProperty(const std::string& name, Required required, const std::string& default_value, StringFormat format, const std::string& description) :
                    TypedPropertyBase<std::string>(name, required, default_value, description),
                    format(format)
            {}

            void visit(IVisitor& visitor) override;
        };

        template <class T>
        class NumericProperty : public TypedPropertyBase<T> {
        public:
            Bound<T> min;
            Bound<T> max;

            NumericProperty(const std::string& name, Required required, const T& default_value, const std::string& description, Bound<T> min, Bound<T> max) :
                 TypedPropertyBase<T>(name, required, default_value, description),
                 min(min),
                 max(max)
            {}

            void visit(IVisitor& visitor) override;
        };

        class ObjectProperty : public PropertyBase {
        public:
            const std::vector<property_ptr_t> fields;

            ObjectProperty(const std::string& name, Required required, const std::string& description, std::vector<property_ptr_t> fields)   :
                    PropertyBase(name, required, description),
                    fields(std::move(fields))
            {}

            void visit(IVisitor& visitor) override;
        };

        class IVisitor {
        public:
            virtual ~IVisitor() = default;

            virtual void begin(const ObjectProperty& prop) = 0;
            virtual void on_property(const StringProperty& prop) = 0;
            virtual void on_property(const NumericProperty<float>& prop) = 0;
            virtual void on_property(const NumericProperty<int64_t>& prop) = 0;
            virtual void on_property(const NumericProperty<uint16_t>& prop) = 0;
            virtual void end(const ObjectProperty& prop) = 0;
        };

        template <class T>
        void NumericProperty<T>::visit(IVisitor& visitor) {
            visitor.on_property(*this);
        }

    }
}

#endif //OPENFMB_ADAPTER_TYPES_H
