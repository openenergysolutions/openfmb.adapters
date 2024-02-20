// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_ZENOH_SUBJECTNAME_H
#define OPENFMB_ADAPTER_ZENOH_SUBJECTNAME_H

#include <adapter-util/ProfileInfo.h>

#include <sstream>

namespace adapter {
namespace zenoh {
    constexpr static const char* openfmb = "/openfmb";

    std::string get_subject_name(const std::string& profile, const std::string& suffix)
    {
        std::ostringstream oss;
        std::string name(profile);
        std::replace( name.begin(), name.end(), '.', '/');
        oss << openfmb << "/" << name << "/" << suffix;
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
        return util::profile_info<T>::get_conducting_equip(profile).mrid();
    }

    template <class T>
    std::string get_publish_subject_name(const T& profile)
    {
        std::ostringstream oss;
        auto full_name = T::descriptor()->full_name();
        std::replace( full_name.begin(), full_name.end(), '.', '/');
        oss << openfmb << "/" << full_name << "/" << get_subject_key_mrid(profile);
        return oss.str();
    }
}
}

#endif //OPENFMB_ADAPTER_SUBJECTNAME_H
