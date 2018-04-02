
#ifndef OPENFMB_ADAPTER_CONFIGSTRINGS_H
#define OPENFMB_ADAPTER_CONFIGSTRINGS_H

namespace adapter
{
    namespace keys
    {
        // ---- generic strings used all over the place ----

        constexpr const char* const profiles = "profiles";

        // ---- model related strings ----

        constexpr const char* const name = "name";
        constexpr const char* const application_name = "applicationName";
        constexpr const char* const identified_object = "identifiedObject";
        constexpr const char* const description = "description";
        constexpr const char* const mRID = "mRID";

        constexpr const char* const mag = "mag";
        constexpr const char* const ang = "ang";
        constexpr const char* const cVal = "cVal";
    }
}

#endif
