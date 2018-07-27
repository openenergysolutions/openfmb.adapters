
#ifndef OPENFMB_ADAPTER_IMESSAGEVISITOR_H
#define OPENFMB_ADAPTER_IMESSAGEVISITOR_H

#include <cstdint>
#include <string>

#include <google/protobuf/descriptor.h>

namespace adapter {
/**
     * An interface used to traverse an OpenFMB message,
     * witch callback values for measurement values
     */
class IMessageVisitor {

public:
    /**
         * start traversing a message field
         *
         * @param field_name the name of the field inside the message
         */
    virtual void start_message_field(const std::string& field_name) = 0;

    /**
         * stop traversing a previously started message field
         */
    virtual void end_message_field() = 0;

    /**
         * Start an iteration in a sequence
         * @param i the iteration count, begins at zero
         */
    virtual void start_iteration(int i) = 0;

    /**
         * End a current iteration
         */
    virtual void end_iteration() = 0;

    /// --- handlers for primitive types ---

    virtual void handle(const std::string& field_name, bool value) = 0;
    virtual void handle(const std::string& field_name, int32_t value) = 0;
    virtual void handle(const std::string& field_name, uint32_t value) = 0;
    virtual void handle(const std::string& field_name, int64_t value) = 0;
    virtual void handle(const std::string& field_name, uint64_t value) = 0;
    virtual void handle(const std::string& field_name, float value) = 0;
    virtual void handle(const std::string& field_name, const std::string& value) = 0;
    virtual void handle(const std::string& field_name, int value, const google::protobuf::EnumDescriptor& descriptor) = 0;
};
}

#endif
