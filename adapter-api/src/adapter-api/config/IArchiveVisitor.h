
#ifndef OPENFMB_ADAPTER_IARCHIVEVISITOR_H
#define OPENFMB_ADAPTER_IARCHIVEVISITOR_H

#include "commonmodule/commonmodule.pb.h"

#include <string>

namespace adapter
{
    /**
     * An interface used to traverse an OpenFMB message,
     * witch callback values for measurement values
     */
    class IArchiveVisitor
    {

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

        /// --- handlers for measurement types ---

        virtual void handle(const std::string& field_name, const commonmodule::MV& value) = 0;
        virtual void handle(const std::string& field_name, const commonmodule::CMV& value) = 0;
        virtual void handle(const std::string& field_name, const commonmodule::BCR& value) = 0;
        virtual void handle(const std::string& field_name, const commonmodule::StatusDPS& value) = 0;
    };


}

#endif
