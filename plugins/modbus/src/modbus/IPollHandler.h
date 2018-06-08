
#ifndef OPENFMB_ADAPTER_MODBUS_IPOLLHANDLER_H
#define OPENFMB_ADAPTER_MODBUS_IPOLLHANDLER_H

#include "modbus/messages/ReadHoldingRegistersResponse.h"

#include <adapter-api/Logger.h>

namespace adapter
{
    namespace modbus
    {
        class IPollHandler
        {


        public:

            virtual ~IPollHandler() = default;

            /**
             * called prior to beginning a sequence of polls
             */
            virtual void begin(Logger& logger) = 0;

            /**
             * called after receiving a response to record some state
             */
            virtual void apply(const ::modbus::ReadHoldingRegistersResponse& response) = 0;

            /**
             * called after polls are complete to fill and publish a message
             */
            virtual void end(Logger& logger) = 0;

            /**
             *
             * @return
             */
            virtual std::size_t num_mapped_values() const = 0;

        };
    }
}

#endif
