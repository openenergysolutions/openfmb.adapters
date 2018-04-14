#ifndef OPENFMB_ADAPTER_IPROFILEREADER_H
#define OPENFMB_ADAPTER_IPROFILEREADER_H

#include <yaml-cpp/node/node.h>
#include <adapter-api/util/Exception.h>

#include "Logger.h"
#include "IMessageBus.h"

namespace adapter
{
    class IProfileReader
    {
    public:
        virtual ~IProfileReader() = default;

        void read_all_profiles(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            this->read_resource_reading(node, logger, bus);
            this->read_switch_reading(node, logger, bus);
            this->read_switch_status(node, logger, bus);
        }

        void read_one_profile(Profile profile, const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            switch(profile)
            {
            case(Profile::resource_reading):
                this->read_resource_reading(node, logger, bus);
                break;
            case(Profile::switch_reading):
                this->read_switch_reading(node, logger, bus);
                break;
            case(Profile::switch_status):
                this->read_switch_status(node, logger, bus);
                break;
            default:
                throw Exception("Unhandled profile: ", ProfileMeta::to_string(profile));
            }
        }

        inline void read_one_profile(const std::string& profile_name, const YAML::Node& node, const Logger& logger,
                                     IMessageBus& bus)
        {
            return read_one_profile(ProfileMeta::from_string(profile_name), node, logger, bus);
        }

    protected:

        virtual void read_resource_reading(const YAML::Node& node, const Logger& logger, IMessageBus& bus) = 0;

        virtual void read_switch_reading(const YAML::Node& node, const Logger& logger, IMessageBus& bus) = 0;

        virtual void read_switch_status(const YAML::Node& node, const Logger& logger, IMessageBus& bus) = 0;

    };
}

#endif
