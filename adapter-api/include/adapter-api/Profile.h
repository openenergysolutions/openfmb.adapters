
#ifndef OPENFMB_ADAPTER_PROFILENAME_H
#define OPENFMB_ADAPTER_PROFILENAME_H

#include <string>

namespace adapter
{
    enum class Profile
    {
        resource_reading,
        // switch
        switch_control,
        switch_reading,
        switch_status,
        // ess
        ess_reading,
        ess_status,
        ess_control,
        // solar
        solar_reading,
        solar_status,
        solar_control
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

            handler(Profile::ess_reading);
            handler(Profile::ess_status);
            handler(Profile::ess_control);

            handler(Profile::solar_reading);
            handler(Profile::solar_status);
            handler(Profile::solar_control);
        }
    };

}



#endif
