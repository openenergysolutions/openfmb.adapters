#ifndef OPENFMB_ADAPTER_IPROFILEHANDLER_H
#define OPENFMB_ADAPTER_IPROFILEHANDLER_H

#include <yaml-cpp/node/node.h>

#include "Logger.h"
#include "IMessageBus.h"

namespace adapter
{
    class IProfileHandler
    {
    public:
        virtual ~IProfileHandler() = default;

        void handle_all_profiles(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            this->handle_resource_reading(node, logger, bus);
            this->handle_switch_reading(node, logger, bus);
            this->handle_switch_status(node, logger, bus);
        }

    protected:

        virtual void handle_resource_reading(const YAML::Node& node, const Logger& logger, IMessageBus& bus) = 0;

        virtual void handle_switch_reading(const YAML::Node& node, const Logger& logger, IMessageBus& bus) = 0;

        virtual void handle_switch_status(const YAML::Node& node, const Logger& logger, IMessageBus& bus) = 0;

    };
}

#endif
