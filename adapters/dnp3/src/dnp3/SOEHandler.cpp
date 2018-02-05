#include "SOEHandler.h"




namespace adapter
{

/*
    SOEHandler::SOEHandler(std::unique_ptr<const IProfileMapping<resourcemodule::ResourceReadingProfile>> mapping, publisher_t<resourcemodule::ResourceReadingProfile> publisher) :
        mapping(std::move(mapping)),
        publisher(publisher)
    {}

    void SOEHandler::Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::Binary>>& values)
    {}

    void SOEHandler::Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::DoubleBitBinary>>& values)
    {}

    void SOEHandler::Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::Analog>>& values)
    {
        auto load = [this](const opendnp3::Indexed<opendnp3::Analog>& meas)
        {

            this->profile_touched |= this->mapping->set_value(meas, this->profile);
        };

        values.ForeachItem(load);
    }

    void SOEHandler::Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::Counter>>& values)
    {
        auto load = [this](const opendnp3::Indexed<opendnp3::Counter>& meas)
        {

            this->profile_touched |= this->mapping->set_value(meas, this->profile);
        };

        values.ForeachItem(load);
    }

    void SOEHandler::Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::FrozenCounter>>& values)
    {}

    void SOEHandler::Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::BinaryOutputStatus>>& values)
    {}

    void SOEHandler::Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::AnalogOutputStatus>>& values)
    {}

    void SOEHandler::Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::OctetString>>& values)
    {}

    void SOEHandler::Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::TimeAndInterval>>& values)
    {}

    void SOEHandler::Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::BinaryCommandEvent>>& values)
    {}

    void SOEHandler::Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::AnalogCommandEvent>>& values)
    {}

    void SOEHandler::Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::SecurityStat>>& values)
    {}

    void SOEHandler::Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::DNPTime>& values)
    {}
*/

}


