
#ifndef OPENFMB_ADAPTER_MODBUS_IPROFILEMAPPING_H
#define OPENFMB_ADAPTER_MODBUS_IPROFILEMAPPING_H

#include "modbus/messages/ReadHoldingRegistersResponse.h"

namespace adapter
{
    namespace modbus
    {
        template<class T>
        class IProfileMapping
        {


        public:

            virtual ~IProfileMapping() = default;

            /**
             * called prior to beginning a sequence of polls
             */
            virtual void initialize() = 0;

            /**
             * called after receiving a response to record some state
             */
            virtual void apply(const ::modbus::ReadHoldingRegistersResponse& response) = 0;

            /**
             * called after polls are complete to fill out a message
             */
            virtual void flush(T& profile) = 0;

            /**
             *
             * @return
             */
            virtual size_t num_mapped_values() const = 0;

        };
    }
}

#endif
