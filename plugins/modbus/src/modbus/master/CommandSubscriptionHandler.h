// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_COMMANDSUBSCRIPTIONHANDLER_H
#define OPENFMB_ADAPTER_COMMANDSUBSCRIPTIONHANDLER_H

#include <adapter-api/ISubscriptionHandler.h>
#include <adapter-util/ProfileInfo.h>

#include "CommandOptions.h"
#include "CommandSink.h"
#include "ICommandConfigBuilder.h"
#include "ITransactionProcessor.h"

namespace adapter {
namespace modbus {
namespace master {

    template <class T>
    class CommandSubscriptionHandler final : public api::ISubscriptionHandler<T> {
        api::Logger logger;
        const std::shared_ptr<const ICommandConfiguration<T>> config;
        const std::shared_ptr<ITransactionProcessor> tx_processor;

    public:
        CommandSubscriptionHandler(
            api::Logger logger,
            std::shared_ptr<const ICommandConfiguration<T>> config,
            std::shared_ptr<ITransactionProcessor> tx_processor)
            : logger(std::move(logger))
            , config(std::move(config))
            , tx_processor(std::move(tx_processor))
        {
        }

    private:
        void process(const T& message) override
        {
            CommandSink sink;
            this->config->process(message, sink, this->logger);
            auto transaction = sink.try_get_transaction(T::descriptor()->name(), this->logger);
            if (transaction) {
                this->tx_processor->add(std::move(transaction));
            } else {
                logger.warn("received {} that did not generate any writes", T::descriptor()->name());
            }
        }
    };

}
}
}

#endif
