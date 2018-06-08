
#ifndef OPENFMB_ADAPTER_IMODELVISITOR_H
#define OPENFMB_ADAPTER_IMODELVISITOR_H

#include "commonmodule/commonmodule.pb.h"
#include "switchmodule/switchmodule.pb.h"

#include "IAccessor.h"

#include <string>

namespace adapter
{
    /**
     * A callback class used to traverse the abstract model of an OpenFMB profile
     *
     * Provides callback methods used to extract values from a concrete message.
     */
    template <class T>
    class IModelVisitor
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

        virtual void handle(const std::string& field_name, Accessor<commonmodule::MV, T> accessor) = 0;
        virtual void handle(const std::string& field_name, Accessor<commonmodule::CMV, T> accessor) = 0;
        virtual void handle(const std::string& field_name, Accessor<commonmodule::BCR, T> accessor) = 0;
        virtual void handle(const std::string& field_name, Accessor<commonmodule::StatusDPS, T> accessor) = 0;
        virtual void handle(const std::string& field_name, Accessor<commonmodule::StatusSPS, T> accessor) = 0;
        virtual void handle(const std::string& field_name, Accessor<commonmodule::ControlDPC, T> accessor) = 0;
        virtual void handle(const std::string& field_name, Accessor<google::protobuf::FloatValue, T> accessor) = 0;
        virtual void handle(const std::string& field_name, PrimitiveAccessor<commonmodule::StateKind, T> accessor) = 0;

        /// --- handlers for control types ---
        virtual void handle(const std::string& field_name, Accessor<commonmodule::ControlValue, T> accessor) = 0;
        virtual void handle(const std::string& field_name, Accessor<commonmodule::CheckConditions, T> accessor) = 0;
        virtual void handle(const std::string& field_name, Accessor<switchmodule::SwitchCSG, T> accessor) = 0;

        /// --- handlers for meta-data fields used by all profiles ---
        virtual void handle(const std::string& field_name, Accessor<commonmodule::MessageInfo, T> accessor) = 0;
        virtual void handle(const std::string& field_name, Accessor<commonmodule::IdentifiedObject, T> accessor) = 0;
        virtual void handle(const std::string& field_name, Accessor<commonmodule::ConductingEquipment, T> accessor) = 0;

    };


}

#endif
