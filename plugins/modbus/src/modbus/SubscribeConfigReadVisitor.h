
#ifndef OPENFMB_ADAPTER_MODBUS_SUBSCRIBECONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_MODBUS_SUBSCRIBECONFIGREADVISITOR_H

#include <adapter-api/ConfigStrings.h>
#include <adapter-api/config/ConfigReadVisitorBase.h>

#include "CommandConfiguration.h"
#include "CommandSubscriptionHandler.h"
#include "ICommandPrioritySource.h"
#include "ITransactionProcessor.h"
#include "ModifyRegisterTransaction.h"

namespace adapter {
namespace modbus {

    template <class T>
    class SubscribeConfigReadVisitor final : public ConfigReadVisitorBase<T> {

        const std::shared_ptr<CommandConfiguration<T>> config = std::make_shared<CommandConfiguration<T>>();
        const ICommandPrioritySource& priority_source;
        std::string mRID;

    public:
        SubscribeConfigReadVisitor(const YAML::Node& root, const ICommandPrioritySource& priority_source);

        void subscribe(const Logger& logger, IMessageBus& bus, std::shared_ptr<ITransactionProcessor> tx_processor);

        void handle(const std::string& field_name, const accessor_t<T, bool>& accessor) override;

        void handle(const std::string& field_name, const accessor_t<T, int>& accessor) override;

        void handle(const std::string& field_name, const accessor_t<T, long>& accessor) override;

        void handle(const std::string& field_name, const accessor_t<T, float>& accessor) override;

        void handle(const std::string& field_name, const accessor_t<T, std::string>& accessor) override;

        void handle(const std::string& field_name, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor) override;

        void handle(const std::string& field_name, const message_accessor_t<T, commonmodule::Quality>& accessor) override;

        void handle(const std::string& field_name, const message_accessor_t<T, commonmodule::Timestamp>& accessor) override;

        void handle(const std::string& field_name, const message_accessor_t<T, commonmodule::ControlTimestamp>& accessor) override;
    };

    template <class T>
    SubscribeConfigReadVisitor<T>::SubscribeConfigReadVisitor(const YAML::Node& root, const ICommandPrioritySource& priority_source)
        : ConfigReadVisitorBase<T>(root)
        , priority_source(priority_source)
    {
    }

    template <class T>
    void SubscribeConfigReadVisitor<T>::subscribe(const Logger& logger, IMessageBus& bus, std::shared_ptr<ITransactionProcessor> tx_processor)
    {
        bus.subscribe(
            std::make_shared<CommandSubscriptionHandler<T>>(logger, this->mRID, this->config, std::move(tx_processor)));
    }

    template <class T>
    void SubscribeConfigReadVisitor<T>::handle(const std::string& field_name, const accessor_t<T, bool>& accessor)
    {
    }

    template <class T>
    void SubscribeConfigReadVisitor<T>::handle(const std::string& field_name, const accessor_t<T, int32_t>& accessor)
    {
    }

    template <class T>
    void SubscribeConfigReadVisitor<T>::handle(const std::string& field_name, const accessor_t<T, int64_t>& accessor)
    {
    }

    template <class T>
    void SubscribeConfigReadVisitor<T>::handle(const std::string& field_name, const accessor_t<T, float>& accessor)
    {
    }

    template <class T>
    void SubscribeConfigReadVisitor<T>::handle(const std::string& field_name, const accessor_t<T, std::string>& accessor)
    {
    }

    template <class T>
    void SubscribeConfigReadVisitor<T>::handle(const std::string& field_name, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor)
    {
    }

    template <class T>
    void SubscribeConfigReadVisitor<T>::handle(const std::string& field_name, const message_accessor_t<T, commonmodule::Quality>& accessor)
    {
    }

    template <class T>
    void SubscribeConfigReadVisitor<T>::handle(const std::string& field_name, const message_accessor_t<T, commonmodule::Timestamp>& accessor)
    {
    }

    template <class T>
    void SubscribeConfigReadVisitor<T>::handle(const std::string& field_name, const message_accessor_t<T, commonmodule::ControlTimestamp>& accessor)
    {
    }
}
}

#endif
