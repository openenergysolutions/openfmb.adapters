
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
            IProperty(std::string name, bool required) : name(std::move(name)), required(required) {}

            const std::string name;
            const bool required;

            virtual void visit(IVisitor& visitor) = 0;
        };

        using property_ptr_t = std::unique_ptr<IProperty>;

        class StringProperty : public IProperty {
        public:
            StringProperty(std::string name, bool required) : IProperty(std::move(name), required) {}

            void visit(IVisitor& visitor) override;
        };

        template <class T>
        class NumericProperty : public IProperty {
        public:
            Bound<T> min;
            Bound<T> max;

            NumericProperty(std::string name, bool required, Bound<T> min, Bound<T> max)
              :
                 IProperty(std::move(name), required),
                 min(min),
                 max(max)
            {}

            void visit(IVisitor& visitor) override;
        };

        class ObjectProperty : public IProperty {
        public:
            const std::vector<property_ptr_t> fields;

            ObjectProperty(std::string name, bool required, std::vector<property_ptr_t> fields)   :
                    IProperty(std::move(name), required),
                    fields(std::move(fields))
            {}

            void visit(IVisitor& visitor) override;
        };

        class IVisitor {
        public:
            virtual ~IVisitor() = default;

            virtual void begin(const ObjectProperty&) = 0;
            virtual void on_property(const StringProperty&) = 0;
            virtual void on_property(const NumericProperty<float>&) = 0;
            virtual void on_property(const NumericProperty<int64_t>&) = 0;
            virtual void end(const ObjectProperty&) = 0;
        };

        template <class T>
        void NumericProperty<T>::visit(IVisitor& visitor) {
            visitor.on_property(*this);
        }


        /// ---------  DSL for building up complex schemas -----------

        property_ptr_t string_property(std::string name, bool required)
        {
            return std::make_unique<StringProperty>(std::move(name), required);
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
