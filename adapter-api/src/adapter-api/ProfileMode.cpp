

#include "ProfileMode.h"

namespace adapter {

    ProfileMode parse_profile_mode(const std::string &mode) {
        if (mode == keys::publish) {
            return ProfileMode::publish;
        } else if (mode == keys::subscribe) {
            return ProfileMode::subscribe;
        } else if (mode == keys::none) {
            return ProfileMode::none;
        } else {
            throw Exception("Unknown profile mode: ", mode);
        }

    }

}

