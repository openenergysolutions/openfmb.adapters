
#ifndef OPENFMB_ADAPTER_TIME_H
#define OPENFMB_ADAPTER_TIME_H

#include <commonmodule/commonmodule.pb.h>
#include <chrono>


namespace adapter
{
    namespace time
    {
        /**
         * Apply a C++ system time-point to an OpenFMB timestamp
         *
         * @param time C++ time_point
         * @param timestamp OpenFMB timestamp
         */
        void set(const std::chrono::system_clock::time_point& time, commonmodule::Timestamp& timestamp);
    }
}

#endif
