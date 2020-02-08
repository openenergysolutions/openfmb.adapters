
#ifndef OPENFMB_ADAPTER_TYPES_H
#define OPENFMB_ADAPTER_TYPES_H

#include <memory>
#include <vector>

namespace adapter {
    namespace schema {

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
            virtual void on_property(const StringProperty&) = 0;
            virtual void on_property(const ObjectProperty&) = 0;
        };



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
