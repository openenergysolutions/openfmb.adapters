
#ifndef OPENFMB_ADAPTER_MODBUS_IREQUESTBUILDER_H
#define OPENFMB_ADAPTER_MODBUS_IREQUESTBUILDER_H

#include "modbus/messages/ReadCoilsRequest.h"
#include "modbus/messages/ReadDiscreteInputsRequest.h"
#include "modbus/messages/ReadHoldingRegistersRequest.h"
#include "modbus/messages/ReadInputRegistersRequest.h"

namespace adapter {
namespace modbus {
namespace master {

    class IRequestBuilder {
    public:
        virtual ~IRequestBuilder() = default;

        virtual void add(const ::modbus::ReadCoilsRequest& request) = 0;
        virtual void add(const ::modbus::ReadDiscreteInputsRequest& request) = 0;
        virtual void add(const ::modbus::ReadHoldingRegistersRequest& request) = 0;
        virtual void add(const ::modbus::ReadInputRegistersRequest& request) = 0;
    };

}
}
}

#endif
