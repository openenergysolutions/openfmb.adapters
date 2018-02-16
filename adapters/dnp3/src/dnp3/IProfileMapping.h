
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

        /**
         * called once, during initialization
         */
        virtual void initialize(T& profile) = 0;

        /**
         * called just before a message is published
         */
        virtual void before_publish(T& profile) const = 0;

        virtual bool set_value(const opendnp3::Indexed<opendnp3::Analog>& meas, T& profile) const = 0;

        virtual bool set_value(const opendnp3::Indexed<opendnp3::Counter>& meas, T& profile) const = 0;

        /**
         * Total number of mapped measurement values
         */
        virtual size_t get_num_mappings() const = 0;

        /**
         * Test if there are any point mappings loaded
         */
        inline bool is_empty() const
        {
            return this->get_num_mappings() == 0;
        }

    };

}

#endif //OPENFMB_ADAPTER_IPROFILEMAPPING_H
