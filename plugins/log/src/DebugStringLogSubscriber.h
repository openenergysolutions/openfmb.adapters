#ifndef OPENFMB_ADAPTER_DEBUGSTRINGLOGSUBSCRIBER_H
#define OPENFMB_ADAPTER_DEBUGSTRINGLOGSUBSCRIBER_H

#include <adapter-api/ISubscriptionHandler.h>
#include <adapter-api/Logger.h>

namespace adapter {
namespace log {
    template <class Proto>
    class DebugStringLogSubscriptionHandler final : public api::ISubscriptionHandler<Proto> {
        api::Logger logger;

    public:
        explicit DebugStringLogSubscriptionHandler(api::Logger logger)
            : logger(std::move(logger))
        {
        }

    private:
        void process(const Proto& message) override
        {
            logger.info("published {}\n {}", Proto::descriptor()->name(), message.DebugString());
        }
    };
}
}

#endif
