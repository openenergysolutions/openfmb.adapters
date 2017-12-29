//
// Created by jadamcrain on 12/8/17.
//

#ifndef OPENFMB_ADAPTER_SOEHANDLER_H
#define OPENFMB_ADAPTER_SOEHANDLER_H

#include <opendnp3/master/ISOEHandler.h>

#include "adapter-api/IProtoPublishers.h"

#include "PointMap.h"
#include "adapter-api/helpers/generated/ResourceReadingProfileMap.h"

namespace openfmb
{

    class SOEHandler final : public opendnp3::ISOEHandler
    {
        virtual void Start() override;
        virtual void End() override;

    public:

        SOEHandler(const YAML::Node& parent);

        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::Binary>>& values) override;
        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::DoubleBitBinary>>& values) override;
        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::Analog>>& values) override;
        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::Counter>>& values) override;
        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::FrozenCounter>>& values) override;
        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::BinaryOutputStatus>>& values) override;
        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::AnalogOutputStatus>>& values) override;
        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::OctetString>>& values) override;
        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::TimeAndInterval>>& values) override;
        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::BinaryCommandEvent>>& values) override;
        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::AnalogCommandEvent>>& values) override;
        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::SecurityStat>>& values) override;
        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::DNPTime>& values) override;

        inline void set_publisher(const std::shared_ptr<IProtoPublishers> publisher)
        {
            this->publisher = publisher;
        }

    private:

        PointMap<ResourceReadingProfileMap> point_map;
        ResourceReadingProfile profile;
        bool rrp_touched = false;



        std::shared_ptr<IProtoPublishers> publisher;
    };

}

#endif //OPENFMB_ADAPTER_SOEHANDLER_H