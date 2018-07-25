
#ifndef OPENFMB_ADAPTER_CONFIGSTRINGS_H
#define OPENFMB_ADAPTER_CONFIGSTRINGS_H

namespace adapter {
namespace keys {
    // ---- generic strings used all over the place ----

    constexpr const char* const profile = "profile";
    constexpr const char* const profiles = "profiles";
    constexpr const char* const path = "path";
    constexpr const char* const overrides = "overrides";
    constexpr const char* const scale = "scale";
    constexpr const char* const index = "index";

    // ---- model related strings ----

    constexpr const char* const name = "name";
    constexpr const char* const identified_object = "identifiedObject";
    constexpr const char* const messageInfo = "messageInfo";
    constexpr const char* const description = "description";
    constexpr const char* const mRID = "mRID";
    constexpr const char* const mod_blk = "modBlk";
    constexpr const char* const control_value = "controlValue";
    constexpr const char* const connected = "connected";
    constexpr const char* const aCDCTerminal = "aCDCTerminal";

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
    constexpr const char* const messageTimeStamp = "messageTimeStamp";
    constexpr const char* const t = "t";
}
}

#endif
