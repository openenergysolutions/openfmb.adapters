#ifndef OPENFMB_ADAPTER_IPROFILEWRITER_H
#define OPENFMB_ADAPTER_IPROFILEWRITER_H

#include <yaml-cpp/emitter.h>
#include <adapter-api/util/Exception.h>

#include "Profile.h"

namespace adapter
{
    class IProfileWriter
    {
    public:
        virtual ~IProfileWriter() = default;

        void write_all_profiles(YAML::Emitter& out)
        {
            this->write_resource_reading(ProfileMeta::to_string(Profile::resource_reading), out);
            this->write_switch_reading(ProfileMeta::to_string(Profile::switch_reading), out);
            this->write_switch_status(ProfileMeta::to_string(Profile::switch_status), out);
        }

        void write_one_profile(Profile profile, YAML::Emitter& out)
        {
            switch(profile)
            {
            case(Profile::resource_reading):
                this->write_resource_reading(ProfileMeta::to_string(profile), out);
                break;
            case(Profile::switch_reading):
                this->write_switch_reading(ProfileMeta::to_string(profile), out);
                break;
            case(Profile::switch_status):
                this->write_switch_status(ProfileMeta::to_string(profile), out);
                break;
            default:
                throw Exception("Unhandled profile: ", ProfileMeta::to_string(profile));
            }
        }

        inline void write_one_profile(const std::string& profile_name, YAML::Emitter& out)
        {
            return write_one_profile(ProfileMeta::from_string(profile_name), out);
        }

    protected:

        virtual void write_resource_reading(const std::string& name, YAML::Emitter& out) = 0;

        virtual void write_switch_reading(const std::string& name, YAML::Emitter& out) = 0;

        virtual void write_switch_status(const std::string& name, YAML::Emitter& out) = 0;

    };
}

#endif
