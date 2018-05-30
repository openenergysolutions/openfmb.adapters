#ifndef OPENFMB_ADAPTER_DEBUGLOGGERPROFILEHANDLER_H
#define OPENFMB_ADAPTER_DEBUGLOGGERPROFILEHANDLER_H

#include <adapter-api/ISubscriber.h>
#include <adapter-api/Logger.h>
#include <adapter-api/IProfileHandler.h>

namespace adapter
{
    namespace log
    {
        template <class Proto>
        class DebugLogSubscriber final : public ISubscriber<Proto>
        {
            Logger logger;

        public:

            explicit DebugLogSubscriber(Logger logger) : logger(std::move(logger))
            {}

            virtual void receive(const Proto& message) override
            {
                logger.info("published {}\n {}", Proto::descriptor()->name(), message.DebugString());
            }

        };

        class DebugLoggerProfileHandler : public IProfileHandler
        {
            const Logger logger;
            IMessageBus& bus;

            template <class T>
            void handle_any()
            {
                this->bus.subscribe(
                        std::make_shared<DebugLogSubscriber<T>>(this->logger)
                );
            }

        public:
            DebugLoggerProfileHandler(Logger logger, IMessageBus &bus) : logger(std::move(logger)), bus(bus) {}

        protected:

            void handle_resource_reading() override {
                this->handle_any<resourcemodule::ResourceReadingProfile>();
            }

            void handle_switch_reading() override {
                this->handle_any<switchmodule::SwitchReadingProfile>();
            }

            void handle_switch_status() override {
                this->handle_any<switchmodule::SwitchStatusProfile>();
            }

        };
    }
}

#endif
