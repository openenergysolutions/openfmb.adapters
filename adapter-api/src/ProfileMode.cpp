

#include "adapter-api/ProfileMode.h"

namespace adapter {

ProfileMode ProfileModeMeta::parse(const std::string& mode)
{
    if (mode == ProfileModeMeta::publish) {
        return ProfileMode::publish;
    } else if (mode == ProfileModeMeta::subscribe) {
        return ProfileMode::subscribe;
    } else if (mode == ProfileModeMeta::none) {
        return ProfileMode::none;
    } else {
        throw Exception("Unknown profile mode: ", mode);
    }
}
}
