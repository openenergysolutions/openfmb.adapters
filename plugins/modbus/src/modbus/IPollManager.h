
#ifndef OPENFMB_ADAPTER_MODBUS_IPOLLMANAGER_H
#define OPENFMB_ADAPTER_MODBUS_IPOLLMANAGER_H

#include "modbus/messages/ReadHoldingRegistersRequest.h"

namespace adapter
{
    namespace modbus
    {
        class IPollManager
        {
        public:
            virtual ~IPollManager() = default;

            virtual void add(const ::modbus::ReadHoldingRegistersRequest& request) = 0;
        };
    }
}

#endif
