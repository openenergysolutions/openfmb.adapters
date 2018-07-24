
#ifndef OPENFMB_ADAPTER_IMODELVISITOR_H
#define OPENFMB_ADAPTER_IMODELVISITOR_H

#include "IMessageFieldHandler.h"

namespace adapter {

class IModelVisitor : public IMessageFieldHandler {

public:
    // --- handlers for the various primitive types ---

    virtual void handle_bool(const std::string& field_name) = 0;
    virtual void handle_int32(const std::string& field_name) = 0;
    virtual void handle_int64(const std::string& field_name) = 0;
    virtual void handle_float(const std::string& field_name) = 0;
    virtual void handle_string(const std::string& field_name) = 0;
    virtual void handle_enum(const std::string& field_name, google::protobuf::EnumDescriptor const* descriptor) = 0;
};
}

#endif
