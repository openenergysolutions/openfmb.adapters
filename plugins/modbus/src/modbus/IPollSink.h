
#ifndef OPENFMB_ADAPTER_MODBUS_IPOLLSINK_H
#define OPENFMB_ADAPTER_MODBUS_IPOLLSINK_H

#include "modbus/messages/ReadHoldingRegistersResponse.h"

namespace adapter
{

    namespace modbus
    {

        class IPollSink
        {

        public:

            virtual ~IPollSink() = default;

            /// ---- poll sequence -----

            virtual void begin() = 0;

            virtual void apply(const ::modbus::ReadHoldingRegistersResponse& response) = 0;

            virtual void end() = 0;


            /// ---- informational -----

            virtual size_t num_mapped_values() const = 0;

        };

    }
}

#endif
