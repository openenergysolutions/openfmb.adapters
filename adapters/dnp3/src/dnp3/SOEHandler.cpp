#include "SOEHandler.h"

#include <boost/uuid/uuid_io.hpp>


namespace adapter
{
    void SOEHandler::Start() {}

    void SOEHandler::End()
    {
        if(this->rrp_touched)
        {
            const auto uuid = this->uuid_generator();

            // mRID is changed whenever we publish a new message
            this->profile.mutable_readingmessageinfo()->mutable_identifiedobject()->set_mrid(
                boost::uuids::to_string(uuid)
            );

            this->rrp_touched = false;
            this->publisher.publish(this->profile);
        }
    }

    SOEHandler::SOEHandler(const YAML::Node& parent, Publisher<resourcemodule::ResourceReadingProfile> publisher) :
        point_map(parent),
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

            this->rrp_touched |= this->point_map.apply(meas, this->profile);
        };

        values.ForeachItem(load);
    }

    void SOEHandler::Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::Counter>>& values)
    {
        auto load = [this](const opendnp3::Indexed<opendnp3::Counter>& meas)
        {

            this->rrp_touched |= this->point_map.apply(meas, this->profile);
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

}


