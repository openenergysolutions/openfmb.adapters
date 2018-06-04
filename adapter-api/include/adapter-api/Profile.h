
#ifndef OPENFMB_ADAPTER_PROFILENAME_H
#define OPENFMB_ADAPTER_PROFILENAME_H

#include <string>

namespace adapter
{
    enum class Profile
    {
        resource_reading,
        switch_control,
        switch_reading,
        switch_status
    };

    struct ProfileMeta
    {
        ProfileMeta() = delete;

        static std::string to_string(Profile profile);

        static Profile from_string(const std::string& name);

        template <class T>
        static void foreach_enum(const T& handler)
        {
            handler(Profile::resource_reading);
            handler(Profile::switch_control);
            handler(Profile::switch_reading);
            handler(Profile::switch_status);
        }
    };

}



#endif
