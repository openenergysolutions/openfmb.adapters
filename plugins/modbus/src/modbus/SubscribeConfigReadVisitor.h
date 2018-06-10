
#ifndef OPENFMB_ADAPTER_MODBUS_SUBSCRIBECONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_MODBUS_SUBSCRIBECONFIGREADVISITOR_H

#include <adapter-api/config/ConfigReadVisitorBase.h>

#include "ITransactionProcessor.h"
#include "ModifyRegisterTransaction.h"
#include "CommandConfigBuilder.h"
#include "../../../../application/src/ConfigKeys.h"

namespace adapter
{
    namespace modbus
    {

        template <class T>
        class SubscribeConfigReadVisitor final : public ConfigReadVisitorBase<T>
        {
            CommandConfigBuilder<T> builder;

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
                const YAML::Node node = this->get_config_node(field_name);
                const auto enabled = yaml::require(node, ::adapter::keys::enabled).as<bool>();
                if(enabled)
                {
                    const auto index = yaml::require_integer<uint16_t>(node, keys::index);
                    const auto scale = yaml::require(node, keys::scale).as<double>();
                    const auto priority = yaml::require_integer<uint32_t>(node, keys::priority);

                    this->builder.add(
                        [ = ](const T & profile, ICommandSink & sink, Logger & logger)
                    {
                        accessor.if_present(
                            profile,
                            [&](const google::protobuf::FloatValue & fv)
                        {
                            sink.set_register(index, priority, static_cast<uint16_t>(fv.value()*scale));
                        }
                        );
                    }
                    );
                }
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

            void handle(const std::string& field_name, Accessor <commonmodule::ScheduleCSG, T> accessor) override
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
