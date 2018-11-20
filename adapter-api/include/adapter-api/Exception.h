
#ifndef OPENFMB_ADAPTER_EXCEPTION_H
#define OPENFMB_ADAPTER_EXCEPTION_H

#include "StringUtil.h"
#include <yaml-cpp/mark.h>

#define OPENFMB_MACRO_STRINGIFY(x) #x
#define OPENFMB_MACRO_TOSTRING(x) OPENFMB_MACRO_STRINGIFY(x)
#define LOCATION "line: " OPENFMB_MACRO_TOSTRING(__LINE__)

namespace adapter {
namespace api {
    /**
    * Super class of std::runtime_error that allows
    * message to be built dynamically
    */
    class Exception : public std::runtime_error {

    public:
        explicit Exception(const char* message)
            : std::runtime_error(message)
        {
        }

        template <class T, class... Args>
        Exception(T t, Args... args)
            : std::runtime_error(strings::join(t, args...))
        {
        }

        template <class T, class... Args>
        Exception(const YAML::Mark& mark, T t, Args... args)
            : std::runtime_error(strings::join(t, args..., " line: ", mark.line))
        {
        }
    };

}
}

#endif //OPENFMB_ADAPTER_EXCEPTION_H
