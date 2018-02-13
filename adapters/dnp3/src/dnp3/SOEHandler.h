
#ifndef OPENFMB_ADAPTER_SOEHANDLER_H
#define OPENFMB_ADAPTER_SOEHANDLER_H

#include <opendnp3/master/ISOEHandler.h>

#include "adapter-api/IMessageBus.h"

#include "IProfileMapping.h"

namespace adapter
{

    template <class T>
    class SOEHandler final : public opendnp3::ISOEHandler
    {
        virtual void Start() override {}
        virtual void End() override;

    public:

        SOEHandler(std::unique_ptr<const IProfileMapping<T>> mapping, publisher_t<T> publisher);

        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::Binary>>& values) override {}

        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::DoubleBitBinary>>& values) override {}

        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::Analog>>& values) override
        {
            this->ProcessAny(values);
        }

        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::Counter>>& values) override
        {
            this->ProcessAny(values);
        }

        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::FrozenCounter>>& values) override {}

        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::BinaryOutputStatus>>& values) override {}

        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::AnalogOutputStatus>>& values) override {}

        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::OctetString>>& values) override {}

        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::TimeAndInterval>>& values) override {}

        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::BinaryCommandEvent>>& values) override {}

        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::AnalogCommandEvent>>& values) override {}

        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::SecurityStat>>& values) override {}

        virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::DNPTime>& values) override {}

    private:

        template <class U>
        void ProcessAny(const opendnp3::ICollection<opendnp3::Indexed<U>>& values);

        std::unique_ptr<const IProfileMapping<T>> mapping;
        T profile;
        bool profile_touched = false;
        const publisher_t<T> publisher;
    };

    template <class T>
    SOEHandler<T>::SOEHandler(std::unique_ptr<const IProfileMapping<T>> mapping, publisher_t<T> publisher) :
        mapping(std::move(mapping)),
        publisher(publisher)
    {
        this->mapping->initialize(this->profile);
    }

    template <class T>
    void SOEHandler<T>::End()
    {
        if(this->profile_touched)
        {
            this->profile_touched = false;
            this->mapping->before_publish(this->profile);
            this->publisher->publish(this->profile);
        }
    }

    template <class T>
    template <class U>
    void SOEHandler<T>::ProcessAny(const opendnp3::ICollection<opendnp3::Indexed<U>>& values)
    {

        auto load = [this](const opendnp3::Indexed<U>& meas)
        {

            this->profile_touched |= this->mapping->set_value(meas, this->profile);
        };

        values.ForeachItem(load);
    }

}

#endif //OPENFMB_ADAPTER_SOEHANDLER_H
