
#ifndef OPENFMB_ADAPTER_ITYPEDMODELVISITOR_H
#define OPENFMB_ADAPTER_ITYPEDMODELVISITOR_H

#include "IAccessor.h"
#include "IMessageFieldHandler.h"

#include <proto-api/commonmodule/commonmodule.pb.h>
#include <string>

namespace adapter {

template <class P>
class ITypedModelVisitor : public IMessageFieldHandler {

public:
    // --- handlers for the various primitive types ---
    virtual void handle(const std::string& field_name, const accessor_t<P, bool>& accessor) = 0;
    virtual void handle(const std::string& field_name, const accessor_t<P, int32_t>& accessor) = 0;
    virtual void handle(const std::string& field_name, const accessor_t<P, int64_t>& accessor) = 0;
    virtual void handle(const std::string& field_name, const accessor_t<P, float>& accessor) = 0;
    virtual void handle(const std::string& field_name, const accessor_t<P, std::string>& accessor) = 0;
    virtual void handle(const std::string& field_name, const accessor_t<P, int>& accessor, google::protobuf::EnumDescriptor const* descriptor) = 0;

    // --- handlers for terminal message types ---
    virtual void handle(const std::string& field_name, const message_accessor_t<P, commonmodule::Quality>& accessor) = 0;
    virtual void handle(const std::string& field_name, const message_accessor_t<P, commonmodule::Timestamp>& accessor) = 0;
    virtual void handle(const std::string& field_name, const message_accessor_t<P, commonmodule::ControlTimestamp>& accessor) = 0;
};
}

#endif
