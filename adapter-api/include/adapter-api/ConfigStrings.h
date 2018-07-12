
#ifndef OPENFMB_ADAPTER_CONFIGSTRINGS_H
#define OPENFMB_ADAPTER_CONFIGSTRINGS_H

namespace adapter {
namespace keys {
    // ---- generic strings used all over the place ----

    constexpr const char* const profile = "profile";
    constexpr const char* const profiles = "profiles";
    constexpr const char* const path = "path";
    constexpr const char* const overrides = "overrides";

    // ---- model related strings ----

    constexpr const char* const name = "name";
    constexpr const char* const identified_object = "identifiedObject";
    constexpr const char* const messageInfo = "messageInfo";
    constexpr const char* const named_object = "namedObject";
    constexpr const char* const description = "description";
    constexpr const char* const mRID = "mRID";

    constexpr const char* const value = "value";
    constexpr const char* const mag = "mag";
    constexpr const char* const ang = "ang";
    constexpr const char* const cVal = "cVal";
    constexpr const char* const actVal = "actVal";
    constexpr const char* const stVal = "stVal";
    constexpr const char* const ctlVal = "ctlVal";
    constexpr const char* const interlockCheck = "interlockCheck";
    constexpr const char* const synchroCheck = "synchroCheck";
    constexpr const char* const controlScheduleFSCH = "controlScheduleFSCH";
    constexpr const char* const ValACSG = "ValACSG";
}
}

#endif
