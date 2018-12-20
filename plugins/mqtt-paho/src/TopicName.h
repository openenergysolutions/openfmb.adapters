
#ifndef OPENFMB_ADAPTER_TOPICNAME_H
#define OPENFMB_ADAPTER_TOPICNAME_H

#include <adapter-util/ProfileInfo.h>

#include <sstream>
#include <algorithm>

namespace adapter {
namespace mqtt {
    constexpr static const char* openfmb = "openfmb";

    /**
     * How you get the mRID from a profile is profile-specific
     *
     * There are template specializations for each profile in the cpp file
     */
    template <class T>
    std::string get_subject_key_mrid(const T& profile)
    {
        return util::profile_info<T>::get_conducting_equip(profile).mrid();
    }

    template <class T>
    std::string get_publish_topic_name(const T& profile)
    {
        std::ostringstream oss;
        auto name = T::descriptor()->full_name();
        std::replace( name.begin(), name.end(), '.', '/');
        oss << openfmb << "/" << name << "/" << get_subject_key_mrid(profile);
        return oss.str();
    }
}
}

#endif //OPENFMB_ADAPTER_TOPICNAME_H
