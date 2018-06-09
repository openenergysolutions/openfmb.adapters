
#ifndef OPENFMB_ADAPTER_EXCEPTION_H
#define OPENFMB_ADAPTER_EXCEPTION_H

#include "StringUtil.h"

namespace adapter
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

    class NotImplemented : public Exception
    {
    public:
        NotImplemented() : Exception("not implemented") {}
    };
}

#endif //OPENFMB_ADAPTER_EXCEPTION_H
