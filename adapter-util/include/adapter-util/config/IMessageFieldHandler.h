// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_IMESSAGEFIELDHANDLER_H
#define OPENFMB_ADAPTER_IMESSAGEFIELDHANDLER_H

#include <google/protobuf/descriptor.h>

#include <string>

namespace adapter {
namespace util {

    class IMessageFieldHandler {

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
     * Called when a previously started message field iteration completes.
     */
        virtual void end_message_field() = 0;

        /**
     * Start traversing a repeated message field
     *
     * @param field_name the name of the field inside the message
     * @param descriptor Protobuf message descriptor for the referenced field
     * @return number of times to traverse the repeated field
     */
        virtual int start_repeated_message_field(const std::string& field_name, google::protobuf::Descriptor const* descriptor) = 0;

        /**
     * Called when a previously started repeated message field iteration completes.
     */
        virtual void end_repeated_message_field() = 0;

        /**
     * Begin an iteration inside a repeated message field
     * @param i
     */
        virtual void start_iteration(int i) = 0;

        /**
     * Called when an iteration ends
     */
        virtual void end_iteration() = 0;
    };
}
}

#endif // OPENFMB_ADAPTER_IMESSAGEFIELDHANDLER_H
