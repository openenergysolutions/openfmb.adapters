
#ifndef OPENFMB_ADAPTER_IMUTABLEMODELVISITOR_H
#define OPENFMB_ADAPTER_IMUTABLEMODELVISITOR_H

#include "IAccessor.h"

#include <google/protobuf/descriptor.h>
#include <string>

namespace adapter {
template <class P>
class IConfigModelVisitor {

public:
    /**
         * start traversing a message field
         *
         * @param field_name the name of the field inside the message
         * @param descriptor Protobuf message descriptor for the referenced field
         *
         * @return true if the field should be traversed, false to terminate traversal
         */
    virtual bool start_message_field(const std::string& field_name, google::protobuf::Descriptor const* descriptor) = 0;

    /**
         * Start traversing a repeated message field
         *
         * @param field_name the name of the field inside the message
         * @param descriptor Protobuf message descriptor for the referenced field
         * @return number of times to traverse the repeated field
         */
    virtual int start_repeated_message_field(const std::string& field_name, google::protobuf::Descriptor const* descriptor) = 0;

    virtual void start_iteration(int i) = 0;

    virtual void end_iteration() = 0;

    /**
         * Called when a previously started message/repeated field iteration completes. Called even
         * if start_message_field(..) returned false or start_repeated_message_field returns 0
         */
    virtual void end_message_field() = 0;

    // --- handlers for the various primitive types ---

    virtual void handle(const std::string& field_name, const setter_t<P, bool>& setter) = 0;
    virtual void handle(const std::string& field_name, const setter_t<P, int32_t>& setter) = 0;
    virtual void handle(const std::string& field_name, const setter_t<P, uint32_t>& setter) = 0;
    virtual void handle(const std::string& field_name, const setter_t<P, int64_t>& setter) = 0;
    virtual void handle(const std::string& field_name, const setter_t<P, uint64_t>& setter) = 0;
    virtual void handle(const std::string& field_name, const setter_t<P, float>& setter) = 0;
    virtual void handle(const std::string& field_name, const setter_t<P, std::string>& setter) = 0;
    virtual void handle(const std::string& field_name, const setter_t<P, int>& setter, google::protobuf::EnumDescriptor const* descriptor) = 0;
};
}

#endif
