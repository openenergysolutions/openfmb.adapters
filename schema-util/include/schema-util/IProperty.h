
#ifndef OPENFMB_ADAPTER_IPROPERTY_H
#define OPENFMB_ADAPTER_IPROPERTY_H

#include <string>
#include <memory>

namespace adapter {
    namespace schema {


    class IVisitor;

    class IProperty {
    public:

        virtual ~IProperty() = default;

        virtual const std::string& get_name() const = 0;

        virtual const std::string& get_description() const = 0;

        virtual bool is_required() const = 0;

        virtual void set_required() = 0;

        virtual void visit(IVisitor &visitor) = 0;
    };

    using property_ptr_t = std::shared_ptr<IProperty>;

}}

#endif //OPENFMB_ADAPTER_IPROPERTY_H
