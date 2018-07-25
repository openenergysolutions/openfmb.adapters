
#ifndef OPENFMB_ADAPTER_DNP3_SUBSCRIBINGCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_DNP3_SUBSCRIBINGCONFIGREADVISITOR_H

#include <adapter-api/ProfileInfo.h>
#include <adapter-api/config/ConfigReadVisitorBase.h>

#include "ControlSubscriptionHandler.h"

namespace adapter {
namespace dnp3 {

    template <class T>
    class SubscribingConfigReadVisitor final : public ConfigReadVisitorBase<T> {

        const std::shared_ptr<CommandConfiguration<T>> configuration = std::make_shared<CommandConfiguration<T>>();
        std::string mRID;

    public:
        explicit SubscribingConfigReadVisitor(const YAML::Node& root)
            : ConfigReadVisitorBase<T>(root)
        {
        }

        void subscribe(Logger logger, IMessageBus& bus, std::shared_ptr<ICommandSequenceExecutor> executor)
        {
            if (configuration->is_empty()) {
                throw Exception("command configuration is empty!");
            }

            logger.info("Subscribing to {} w/ mRID {}", T::descriptor()->name(), this->mRID);

            bus.subscribe(
                std::make_shared<ControlSubscriptionHandler<T>>(this->mRID, logger, this->configuration, std::move(executor)));
        }

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
    void SubscribingConfigReadVisitor<T>::handle(const std::string& field_name, const accessor_t<T, bool>& accessor)
    {
    }

    template <class T>
    void SubscribingConfigReadVisitor<T>::handle(const std::string& field_name, const accessor_t<T, int>& accessor)
    {
    }

    template <class T>
    void SubscribingConfigReadVisitor<T>::handle(const std::string& field_name, const accessor_t<T, long>& accessor)
    {
    }

    template <class T>
    void SubscribingConfigReadVisitor<T>::handle(const std::string& field_name, const accessor_t<T, float>& accessor)
    {
    }

    template <class T>
    void SubscribingConfigReadVisitor<T>::handle(const std::string& field_name, const accessor_t<T, std::string>& accessor)
    {
    }

    template <class T>
    void SubscribingConfigReadVisitor<T>::handle(const std::string& field_name, const accessor_t<T, int>& accessor, google::protobuf::EnumDescriptor const* descriptor)
    {
    }

    template <class T>
    void SubscribingConfigReadVisitor<T>::handle(const std::string& field_name, const message_accessor_t<T, commonmodule::Quality>& accessor)
    {
    }

    template <class T>
    void SubscribingConfigReadVisitor<T>::handle(const std::string& field_name, const message_accessor_t<T, commonmodule::Timestamp>& accessor)
    {
    }

    template <class T>
    void SubscribingConfigReadVisitor<T>::handle(const std::string& field_name, const message_accessor_t<T, commonmodule::ControlTimestamp>& accessor)
    {
    }
}
}

#endif
