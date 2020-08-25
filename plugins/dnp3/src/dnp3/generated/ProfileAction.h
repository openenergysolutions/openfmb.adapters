// 
//   _   _         ______    _ _ _   _             _ _ _
//  | \ | |       |  ____|  | (_) | (_)           | | | |
//  |  \| | ___   | |__   __| |_| |_ _ _ __   __ _| | | |
//  | . ` |/ _ \  |  __| / _` | | __| | '_ \ / _` | | | |
//  | |\  | (_) | | |___| (_| | | |_| | | | | (_| |_|_|_|
//  |_| \_|\___/  |______\__,_|_|\__|_|_| |_|\__, (_|_|_)
//                                            __/ |
//                                           |___/
// 
//  This file is auto-generated. Do not edit manually
// 

#ifndef OPENFMB_PROFILEACTION_H
#define OPENFMB_PROFILEACTION_H

#include <string>
#include <array>

namespace adapter {

namespace dnp3 {

struct ProfileAction
{
    enum class Value
    {
        // update the value
        update,
        // clear the profile, then update the value
        clear_and_update,
        // update the value, publish the profile, then clear the profile
        update_and_publish,
    };

    static const char update[];
    static const char clear_and_update[];
    static const char update_and_publish[];

    static constexpr const char* label = "profile-action";

    static const std::array<Value, 3> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace dnp3

} // end namespace adapter

#endif

