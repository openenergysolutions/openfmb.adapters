
#ifndef OPENFMB_ADAPTER_MODBUS_IPOLLSINK_H
#define OPENFMB_ADAPTER_MODBUS_IPOLLSINK_H

#include "modbus/messages/ReadHoldingRegistersResponse.h"

namespace adapter {

    namespace modbus {

        class IPollSink {

            virtual void begin() = 0;

            virtual void apply(const ::modbus::ReadHoldingRegistersResponse& response) = 0;

            virtual void end() = 0;

        };

    }
}

#endif
