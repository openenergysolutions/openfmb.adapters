
#include "adapter-api/IMessageBus.h"

namespace adapter
{

    template <>
    publisher_t<resourcemodule::ResourceReadingProfile> IMessageBus::get_publisher()
    {
        return this->get_resource_reading_publisher();
    }

    template <>
    publisher_t<switchmodule::SwitchReadingProfile> IMessageBus::get_publisher()
    {
        return this->get_switch_reading_publisher();
    }

    template <>
    publisher_t<switchmodule::SwitchStatusProfile> IMessageBus::get_publisher()
    {
        return this->get_switch_status_publisher();
    }


}


