
#ifndef OPENFMB_ADAPTER_MODBUS_IREQUESTBUILDER_H
#define OPENFMB_ADAPTER_MODBUS_IREQUESTBUILDER_H

#include "modbus/messages/ReadHoldingRegistersRequest.h"

namespace adapter {
namespace modbus {
    class IRequestBuilder {
    public:
        virtual ~IRequestBuilder() = default;

        virtual void add(const ::modbus::ReadHoldingRegistersRequest& request) = 0;
    };
}
}

#endif
