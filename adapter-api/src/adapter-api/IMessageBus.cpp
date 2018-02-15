
#include "IMessageBus.h"

namespace adapter
{

    template <>
    publisher_t<resourcemodule::ResourceReadingProfile> IMessageBus::get_publisher()
    {
        return this->get_resource_reading_publisher();
    }
}


