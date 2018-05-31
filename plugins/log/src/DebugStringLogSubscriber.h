#ifndef OPENFMB_ADAPTER_DEBUGSTRINGLOGSUBSCRIBER_H
#define OPENFMB_ADAPTER_DEBUGSTRINGLOGSUBSCRIBER_H

#include <adapter-api/ISubscriber.h>
#include <adapter-api/Logger.h>

namespace adapter
{
    namespace log
    {
        template <class Proto>
        class DebugStringLogSubscriber final : public ISubscriber<Proto>
        {
            Logger logger;

        public:

            explicit DebugStringLogSubscriber(Logger logger) : logger(std::move(logger))
            {}

            virtual void receive(const Proto& message) override
            {
                logger.info("published {}\n {}", Proto::descriptor()->name(), message.DebugString());
            }

        };
    }
}

#endif
