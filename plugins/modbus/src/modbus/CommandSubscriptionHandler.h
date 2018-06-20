
#ifndef OPENFMB_ADAPTER_COMMANDSUBSCRIPTIONHANDLER_H
#define OPENFMB_ADAPTER_COMMANDSUBSCRIPTIONHANDLER_H

#include <adapter-api/ISubscriptionHandler.h>
#include <adapter-api/config/MessageInformation.h>

#include "ICommandConfigBuilder.h"
#include "ITransactionProcessor.h"
#include "CommandSink.h"

namespace adapter
{
    namespace modbus
    {
        template <class T>
        class CommandSubscriptionHandler final : public ISubscriptionHandler<T>
        {
            Logger logger;
            const std::string uuid;
            const std::shared_ptr<const ICommandConfiguration<T>> config;
            const std::shared_ptr<ITransactionProcessor> tx_processor;

        public:

            CommandSubscriptionHandler(
                Logger logger,
                std::string uuid,
                std::shared_ptr<const ICommandConfiguration<T>> config,
                std::shared_ptr<ITransactionProcessor> tx_processor
            ) :
                logger(std::move(logger)),
                uuid(std::move(uuid)),
                config(std::move(config)),
                tx_processor(std::move(tx_processor))
            {}

            bool matches(const T& message) const override
            {
                return get_conducting_equip(message).mrid() == this->uuid;
            }

        private:

            void process(const T& message) override
            {
                CommandSink sink;
                this->config->process(message, sink, this->logger);
                auto transaction = sink.try_get_transaction(T::descriptor()->name(), this->logger);
                if(transaction)
                {
                    this->tx_processor->add(std::move(transaction));
                }
                else
                {
                    logger.warn("received {} that did not generate any writes", T::descriptor()->name());
                }
            }

        };
    }
}

#endif

