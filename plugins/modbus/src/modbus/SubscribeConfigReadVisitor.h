
#ifndef OPENFMB_ADAPTER_MODBUS_SUBSCRIBECONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_MODBUS_SUBSCRIBECONFIGREADVISITOR_H

#include <adapter-api/config/ConfigReadVisitorBase.h>

#include "ITransactionProcessor.h"

namespace adapter
{
    namespace modbus
    {

        template <class T>
        class SubscribeConfigReadVisitor final : public ConfigReadVisitorBase<T>
        {

        public:

            SubscribeConfigReadVisitor(const YAML::Node& root) : ConfigReadVisitorBase<T>(root) {}

            void subscribe(const Logger& logger, IMessageBus& bus, std::shared_ptr<ITransactionProcessor> tx_processor)
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor <commonmodule::MV, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor <commonmodule::CMV, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor <commonmodule::BCR, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor <commonmodule::StatusDPS, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor <commonmodule::StatusSPS, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor <commonmodule::ControlDPC, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor <google::protobuf::FloatValue, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, PrimitiveAccessor <commonmodule::StateKind, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor <switchmodule::SwitchCSG, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor <commonmodule::CheckConditions, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor <commonmodule::ControlFSCC, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor <essmodule::ESSCSG, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor <commonmodule::MessageInfo, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor <commonmodule::IdentifiedObject, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

            void handle(const std::string& field_name, Accessor <commonmodule::ConductingEquipment, T> accessor) override
            {
                throw NotImplemented(LOCATION);
            }

        };
    }
}

#endif
