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
            this->write_resource_reading(out);
            this->write_switch_reading(out);
            this->write_switch_status(out);
        }

        void write_one_profile(Profile profile, YAML::Emitter& out)
        {
            switch(profile)
            {
            case(Profile::resource_reading):
                this->write_resource_reading(out);
                break;
            case(Profile::switch_reading):
                this->write_switch_reading(out);
                break;
            case(Profile::switch_status):
                this->write_switch_status(out);
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

        virtual void write_resource_reading(YAML::Emitter& out) = 0;

        virtual void write_switch_reading(YAML::Emitter& out) = 0;

        virtual void write_switch_status(YAML::Emitter& out) = 0;

    };
}

#endif
