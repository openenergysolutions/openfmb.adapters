
#ifndef OPENFMB_ADAPTER_IPROTOVISITOR_H
#define OPENFMB_ADAPTER_IPROTOVISITOR_H

#include "commonmodule/commonmodule.pb.h"
#include "switchmodule/switchmodule.pb.h"

#include <string>
#include <functional>

namespace adapter
{

    template <class Type, class Profile>
    using getter_t = std::function<Type* (Profile&)>;

    /**
     * A callback class used to traverse an openFMB protobuf message hierarchy
     *
     * This is used for both generating default configurations and reading configurations
     */
    template <class Profile>
    class IProtoVisitor
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
         * The number of repetitions
         * @param field_name
         * @return
         */
        virtual int start_repeated_message_field(const std::string& field_name) = 0;

        virtual void start_iteration(int i) = 0;

        virtual void end_iteration() = 0;

        /**
         * End iteration over a repeated field
         */
        virtual void end_repeated_message_field() = 0;

        /// --- handlers for measurement types ---

        virtual void handle(const std::string& field_name, getter_t<commonmodule::MV, Profile> getter) = 0;
        virtual void handle(const std::string& field_name, getter_t<commonmodule::CMV, Profile> getter) = 0;
        virtual void handle(const std::string& field_name, getter_t<commonmodule::BCR, Profile> getter) = 0;
        virtual void handle(const std::string& field_name, getter_t<commonmodule::StatusDPS, Profile> getter) = 0;

        /// --- handlers for other types of fields ---
        virtual void handle(const std::string& field_name, getter_t<commonmodule::MessageInfo, Profile> getter) = 0;
        virtual void handle(const std::string& field_name, getter_t<commonmodule::IdentifiedObject, Profile> getter) = 0;
        virtual void handle(const std::string& field_name, getter_t<commonmodule::ConductingEquipment, Profile> getter) = 0;

        /// --- Ignore these for now everywhere until we know what they do ---
        virtual void handle(const std::string& field_name, getter_t<commonmodule::ConductingEquipmentTerminalReading, Profile> getter) {}
        virtual void handle(const std::string& field_name, getter_t<commonmodule::ENG_CalcMethodKind, Profile> getter) {}
        virtual void handle(const std::string& field_name, getter_t<commonmodule::ENG_PFSignKind, Profile> getter) {}
        virtual void handle(const std::string& field_name, getter_t<commonmodule::ENS_BehaviourModeKind, Profile> getter) {}
        virtual void handle(const std::string& field_name, getter_t<commonmodule::ENS_DynamicTestKind, Profile> getter) {}
        virtual void handle(const std::string& field_name, getter_t<commonmodule::ENS_HealthKind, Profile> getter) {}


    };


}

#endif //OPENFMB_ADAPTER_IPROTOVISITOR_H
