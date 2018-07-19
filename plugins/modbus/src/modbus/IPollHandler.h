
#ifndef OPENFMB_ADAPTER_MODBUS_IPOLLHANDLER_H
#define OPENFMB_ADAPTER_MODBUS_IPOLLHANDLER_H

#include "modbus/messages/ReadHoldingRegistersResponse.h"

#include <adapter-api/Logger.h>

#include "IRequestBuilder.h"

namespace adapter
{
    namespace modbus
    {
        struct AutoPollConfig
        {
            explicit AutoPollConfig(uint16_t max_register_gaps) : max_register_gaps(max_register_gaps)
            {}

            const uint16_t max_register_gaps;
        };

        class IPollHandler
        {


        public:

            virtual ~IPollHandler() = default;

            // --- poll lifecycle ----

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


            // --- helpers ----

            /**
             * Configure poll requests
             *
             * @param config Configuration parameters for auto polling
             * @param builder Callback interface to specify polls
             */
            virtual void configure(const AutoPollConfig& config, IRequestBuilder& builder) = 0;

            /**
             *
             * @return
             */
            virtual std::size_t num_mapped_values() const = 0;

        };
    }
}

#endif
