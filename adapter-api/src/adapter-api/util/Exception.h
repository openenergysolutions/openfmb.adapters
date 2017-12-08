
#ifndef OPENFMB_ADAPTER_EXCEPTION_H
#define OPENFMB_ADAPTER_EXCEPTION_H

#include "StringUtil.h"

namespace openfmb
{
    /**
    * Super class of std::runtime_error that allows
    * message to be built dynamically
    */
    class Exception : public std::runtime_error
    {

    public:

        explicit Exception(const char* message) : std::runtime_error(message)
        {

        }

        template <class T, class... Args>
        Exception(T t, Args... args) :
            std::runtime_error(strings::join(t, args...))
        {

        }

    };
}

#endif //OPENFMB_ADAPTER_EXCEPTION_H
