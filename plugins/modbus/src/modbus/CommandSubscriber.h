
#ifndef OPENFMB_ADAPTER_COMMANDSUBSCRIBER_H
#define OPENFMB_ADAPTER_COMMANDSUBSCRIBER_H

#include <adapter-api/ISubscriber.h>
#include <adapter-api/config/MessageInformation.h>

#include "ICommandConfigBuilder.h"
#include "ITransactionProcessor.h"

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
                    const std::string& uuid,
                    std::shared_ptr<const ICommandConfiguration<T>> config,
                    std::shared_ptr<ITransactionProcessor> tx_processor
            ) :
                    logger(std::move(logger)),
                    uuid(uuid),
                    config(std::move(config)),
                    tx_processor(std::move(tx_processor))
            {}

            virtual bool matches(const T& message) const override
            {
                return get_conducting_equip(message).mrid() == this->uuid;
            }

        private:

            virtual void process(const T& message) override
            {

            }

        };
    }
}

#endif

