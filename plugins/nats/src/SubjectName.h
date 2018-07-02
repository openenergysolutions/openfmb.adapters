
#ifndef OPENFMB_ADAPTER_SUBJECTNAME_H
#define OPENFMB_ADAPTER_SUBJECTNAME_H

#include "adapter-api/ProfileInfo.h"

#include <sstream>

namespace adapter {
namespace nats {
    constexpr static const char* openfmb = "openfmb";

    template <class T>
    std::string get_subscribe_all_subject_name()
    {
        std::ostringstream oss;
        oss << openfmb << "." << T::descriptor()->full_name() << ".*";
        return oss.str();
    }

    /**
         * How you get the mRID from a profile is profile-specific
         *
         * There are template specializations for each profile in the cpp file
         */
    template <class T>
    std::string get_subject_key_mrid(const T& profile)
    {
        return profile_info<T>::get_conducting_equip(profile).mrid();
    }

    template <class T>
    std::string get_publish_subject_name(const T& profile)
    {
        std::ostringstream oss;
        oss << openfmb << "." << T::descriptor()->full_name() << "." << get_subject_key_mrid(profile);
        return oss.str();
    }
}
}

#endif //OPENFMB_ADAPTER_SUBJECTNAME_H
