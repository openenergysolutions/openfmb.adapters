
#ifndef OPENFMB_ADAPTER_IPROFILEMAPPING_H
#define OPENFMB_ADAPTER_IPROFILEMAPPING_H

#include "modbus/messages/ReadHoldingRegistersResponse.h"

namespace adapter
{

    template<class T>
    class IProfileMapping
    {


    public:

        virtual ~IProfileMapping() = default;

        /**
         * called prior to beginning a sequence of polls
         */
        virtual void initialize(T& profile) = 0;

        /**
         * called after receiving a response to record some state
         */
        virtual void apply(const modbus::ReadHoldingRegistersResponse& response) = 0;

        /**
         * called after polls are complete to fill out a message
         */
        virtual void flush(T& profile) = 0;

    };

}

#endif //OPENFMB_ADAPTER_IPROFILEMAPPING_H
