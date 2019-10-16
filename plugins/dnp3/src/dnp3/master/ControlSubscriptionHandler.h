

#ifndef OPENFMB_ADAPTER_DNP3_MASTER_CONTROLSUBSCRIPTIONHANDLER_H
#define OPENFMB_ADAPTER_DNP3_MASTER_CONTROLSUBSCRIPTIONHANDLER_H

#include <adapter-api/ISubscriptionHandler.h>
#include <adapter-api/Logger.h>

#include "dnp3/master/CommandConfiguration.h"
#include "dnp3/master/CommandSequence.h"

namespace adapter {
namespace dnp3 {
    namespace master {

        template <class T>
        class ControlSubscriptionHandler final : public api::ISubscriptionHandler<T> {

            api::Logger logger;
            const std::shared_ptr<CommandConfiguration<T>> configuration;
            const std::shared_ptr<ICommandSequenceExecutor> executor;

        public:
            ControlSubscriptionHandler(api::Logger logger,
                                       std::shared_ptr<CommandConfiguration<T>> configuration,
                                       std::shared_ptr<ICommandSequenceExecutor> executor);

        protected:
            void process(const T& message) override;
        };

        template <class T>
        ControlSubscriptionHandler<T>::ControlSubscriptionHandler(api::Logger logger,
                                                                  std::shared_ptr<CommandConfiguration<T>> configuration,
                                                                  std::shared_ptr<ICommandSequenceExecutor> executor)
            : logger(std::move(logger))
            , configuration(std::move(configuration))
            , executor(std::move(executor))
        {
        }

        template <class T>
        void ControlSubscriptionHandler<T>::process(const T& message)
        {
            auto sequence = std::make_unique<CommandSequence>(T::descriptor()->name());

            this->configuration->get_actions(message, this->logger, *sequence);

            if (sequence->is_empty()) {
                logger.warn("{} - contains no commands", sequence->get_name());
            } else {
                this->executor->add(std::move(sequence));
            }
        }
    }
}
}

#endif
