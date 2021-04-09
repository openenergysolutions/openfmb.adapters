// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_TOPICNAME_H
#define OPENFMB_ADAPTER_TOPICNAME_H

#include <adapter-util/ProfileInfo.h>

#include <sstream>
#include <algorithm>

#include "TopicNameSuffix.h"

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

    template <class T>
    std::string get_base_topic_name()
    {
        auto name = T::descriptor()->full_name();
        std::replace( name.begin(), name.end(), '.', '/');

        std::ostringstream oss;
        oss << openfmb << "/" << name;
        return oss.str();
    }

    template <class T>
    std::string get_subscribe_topic_name(const TopicNameSuffix& suffix)
    {
        const auto base_topic = get_base_topic_name<T>();
        std::ostringstream oss;
        oss << base_topic << "/" << suffix.get_value();
        return oss.str();
    }
}
}

#endif //OPENFMB_ADAPTER_TOPICNAME_H
