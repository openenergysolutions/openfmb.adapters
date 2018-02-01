
#ifndef OPENFMB_ADAPTER_IPROTOVISITOR_H
#define OPENFMB_ADAPTER_IPROTOVISITOR_H

#include <initializer_list>
#include <string>

#include "HelperTypedefs.h"

namespace adapter {

    /**
     * A callback class used to traverse an openFMB protobuf message hierarchy
     *
     * This is used for both generating default configurations and reading configurations
     */
    template <class Profile>
    class IProtoVisitor {

        public:

        /**
         * start traversing a message field
         *
         * @param field_name the name of the field inside the message
         */
        virtual void start_message_field(const std::string& field_name) = 0;

        virtual void handle(const std::string& field_name, mv_getter_t<Profile> getter) = 0;
        virtual void handle(const std::string& field_name, cmv_getter_t<Profile> getter) = 0;
        virtual void handle(const std::string& field_name, bcr_getter_t<Profile> getter) = 0;


        /**
         * stop traversing a previously started message field
         */
        virtual void end_message_field() = 0;
    };
}

#endif //OPENFMB_ADAPTER_IPROTOVISITOR_H