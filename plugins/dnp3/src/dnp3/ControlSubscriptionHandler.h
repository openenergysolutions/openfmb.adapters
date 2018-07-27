

#ifndef OPENFMB_ADAPTER_CONTROLSUBSCRIPTIONHANDLER_H
#define OPENFMB_ADAPTER_CONTROLSUBSCRIPTIONHANDLER_H

#include "adapter-api/ISubscriptionHandler.h"
#include "adapter-api/Logger.h"

#include "CommandConfiguration.h"
#include "CommandSequence.h"

namespace adapter {
namespace dnp3 {

    template <class T>
    class ControlSubscriptionHandler final : public ISubscriptionHandler<T> {

        const std::string mRID;
        Logger logger;
        const std::shared_ptr<CommandConfiguration<T>> configuration;
        const std::shared_ptr<ICommandSequenceExecutor> executor;

    public:
        ControlSubscriptionHandler(std::string mRID, Logger logger, std::shared_ptr<CommandConfiguration<T>> configuration, std::shared_ptr<ICommandSequenceExecutor> executor);

    protected:
        bool matches(const T& message) const override;

        void process(const T& message) override;
    };

    template <class T>
    ControlSubscriptionHandler<T>::ControlSubscriptionHandler(std::string mRID, Logger logger, std::shared_ptr<CommandConfiguration<T>> configuration, std::shared_ptr<ICommandSequenceExecutor> executor)
        : mRID(std::move(mRID))
        , logger(std::move(logger))
        , configuration(std::move(configuration))
        , executor(std::move(executor))
    {
    }

    template <class T>
    bool ControlSubscriptionHandler<T>::matches(const T& message) const
    {
        return this->mRID == profile_info<T>::get_conducting_equip(message).mrid();
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

#endif //OPENFMB_ADAPTER_CONTROLSUBSCRIPTIONHANDLER_H
