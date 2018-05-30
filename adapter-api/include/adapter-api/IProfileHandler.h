#ifndef OPENFMB_ADAPTER_IPROFILEHANDLER_H
#define OPENFMB_ADAPTER_IPROFILEHANDLER_H

#include <adapter-api/util/Exception.h>
#include <adapter-api/Profile.h>

namespace adapter
{
    class IProfileHandler
    {
    public:

        virtual ~IProfileHandler() = default;

        void handle_all_profiles()
        {
            this->handle_resource_reading();
            this->handle_switch_reading();
            this->handle_switch_status();
        }

        void handle_one_profile(Profile profile)
        {
            switch(profile)
            {
            case(Profile::resource_reading):
                this->handle_resource_reading();
                break;
            case(Profile::switch_reading):
                this->handle_switch_reading();
                break;
            case(Profile::switch_status):
                this->handle_switch_status();
                break;
            default:
                throw Exception("Unhandled profile: ", ProfileMeta::to_string(profile));
            }
        }

        inline void handle_one_profile(const std::string& profile_name)
        {
            return handle_one_profile(ProfileMeta::from_string(profile_name));
        }

    protected:

        virtual void handle_resource_reading() = 0;

        virtual void handle_switch_reading() = 0;

        virtual void handle_switch_status() = 0;

    };
}

#endif
