
#ifndef OPENFMB_ADAPTER_PROFILETYPE_H
#define OPENFMB_ADAPTER_PROFILETYPE_H

namespace adapter
{
    enum class ProfileType
    {
        reading,
        status,
        event,
        control
    };

    // --- specializations for these templates in cpp file ---

    template <class Profile>
    ProfileType get_profile_type();
}

#endif
