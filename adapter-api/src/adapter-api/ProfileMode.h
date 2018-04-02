

#ifndef OPENFMB_ADAPTER_PROFILEMODE_H
#define OPENFMB_ADAPTER_PROFILEMODE_H

#include <string>
#include "util/Exception.h"

namespace adapter
{
    enum class ProfileMode
    {
        publish,
        subscribe,
        none
    };

    struct ProfileModeMeta
    {
        static constexpr const char* const publish = "publish";
        static constexpr const char* const subscribe = "subscribe";
        static constexpr const char* const none = "none";

        static ProfileMode parse(const std::string& mode);
    };

}

#endif //OPENFMB_ADAPTER_PROFILEMODE_H
