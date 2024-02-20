// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

//
// Created by cory on 2/9/21.
//

#ifndef OPENFMB_ADAPTER_ICCP_CLIENT_CONTROLSUBCRIPTIONHANDLER_H
#define OPENFMB_ADAPTER_ICCP_CLIENT_CONTROLSUBCRIPTIONHANDLER_H

#include <adapter-api/ISubscriptionHandler.h>
#include <adapter-api/Logger.h>

#include "CommandConfiguration.h"
#include "ITransactionProcessor.h"
#include "CommandSequence.h"

namespace adapter {
namespace iccp {
    namespace client {

        template <class T>
        class ControlSubscriptionHandler final : public api::ISubscriptionHandler<T> {

            api::Logger logger;
            const std::shared_ptr<CommandConfiguration<T>> configuration;
            const std::shared_ptr<ITransactionProcessor> executor;

        public:
            ControlSubscriptionHandler(api::Logger logger,
                                       std::shared_ptr<CommandConfiguration<T>> configuration,
                                       std::shared_ptr<ITransactionProcessor> executor);

        protected:
            void process(const T& message) override;
        };

        template <class T>
        ControlSubscriptionHandler<T>::ControlSubscriptionHandler(api::Logger logger,
                                                                  std::shared_ptr<CommandConfiguration<T>> configuration,
                                                                  std::shared_ptr<ITransactionProcessor> executor)
            : logger(std::move(logger))
            , configuration(std::move(configuration))
            , executor(std::move(executor))
        {
        }

        template <class T>
        void ControlSubscriptionHandler<T>::process(const T& message)
        {
            // TODO
        }
    }
}
}

#endif
