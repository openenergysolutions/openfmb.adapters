#include "SOEHandler.h"

namespace openfmb
{
    void SOEHandler::Start()
    {

    }

    void SOEHandler::End()
    {
        //this->publisher->publish(this->profile);

        if(this->rrp_touched && this->publisher)
        {
            this->rrp_touched = false;
            this->publisher->publish(this->profile);
        }
    }

    SOEHandler::SOEHandler(const YAML::Node& parent) : point_map(parent)
    {
        //this->profile.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_hz()->mutable_mag()->set_f(10.0);
    }

    void SOEHandler::Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::Binary>>& values)
    {}

    void SOEHandler::Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::DoubleBitBinary>>& values)
    {}

    void SOEHandler::Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::Analog>>& values)
    {
        auto load = [this](const opendnp3::Indexed<opendnp3::Analog>& meas)
        {

            this->rrp_touched |= this->point_map.apply(meas.index, meas.value.value, this->profile);
        };

        values.ForeachItem(load);
    }

    void SOEHandler::Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::Counter>>& values)
    {}

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

}


