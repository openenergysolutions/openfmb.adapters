
#ifndef OPENFMB_ADAPTER_COMMANDSUBSCRIBER_H
#define OPENFMB_ADAPTER_COMMANDSUBSCRIBER_H

#include <adapter-api/ISubscriber.h>
#include <adapter-api/config/MessageInformation.h>

#include "ICommandConfigBuilder.h"
#include "ITransactionProcessor.h"
#include "CommandSink.h"

namespace adapter
{
    namespace modbus
    {
        template <class T>
        class CommandSubscriber final : public ISubscriber<T>
        {
            Logger logger;
            const std::string uuid;
            const std::shared_ptr<const ICommandConfiguration<T>> config;
            const std::shared_ptr<ITransactionProcessor> tx_processor;

        public:

            CommandSubscriber(
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
                auto transaction = sink.get_transaction();
                if(transaction)
                {
                    this->tx_processor->add(std::move(transaction));
                }
            }

        };
    }
}

#endif

