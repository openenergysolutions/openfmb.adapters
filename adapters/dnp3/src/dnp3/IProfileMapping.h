
#ifndef OPENFMB_ADAPTER_IPROFILEMAPPING_H
#define OPENFMB_ADAPTER_IPROFILEMAPPING_H

#include <opendnp3/app/MeasurementTypes.h>
#include <opendnp3/app/Indexed.h>

#include <memory>
#include <yaml-cpp/yaml.h>

#include "adapter-api/helpers/IProtoVisitor.h"

namespace adapter
{

    template<class T>
    class IProfileMapping
    {


    public:

        virtual ~IProfileMapping() = default;

        virtual bool set_value(const opendnp3::Indexed<opendnp3::Analog>& meas, T& profile) const = 0;

        virtual bool set_value(const opendnp3::Indexed<opendnp3::Counter>& meas, T& profile) const = 0;

    };

}

#endif //OPENFMB_ADAPTER_IPROFILEMAPPING_H
