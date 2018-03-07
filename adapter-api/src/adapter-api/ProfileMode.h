

#ifndef OPENFMB_ADAPTER_PROFILEMODE_H
#define OPENFMB_ADAPTER_PROFILEMODE_H

#include <string>
#include "util/Exception.h"

namespace adapter
{

    namespace keys
    {
        static const char* const profiles = "profiles";
        static const char* const publish = "publish";
        static const char* const subscribe = "subscribe";
        static const char* const none = "none";
    }

    enum class ProfileMode
    {
        publish,
        subscribe,
        none
    };

    ProfileMode parse_profile_mode(const std::string& mode);

}

#endif //OPENFMB_ADAPTER_PROFILEMODE_H
