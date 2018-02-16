
#ifndef OPENFMB_ADAPTER_PROFILEPMAPPING_H
#define OPENFMB_ADAPTER_PROFILEPMAPPING_H

#include "IProfileMapping.h"
#include "adapter-api/util/Exception.h"

#include <map>
#include <functional>

namespace adapter
{

    template <class T>
    class ProfileMapping final : public IProfileMapping<T>
    {

    public:

        /**
         * A functor that takes a measurement value and updates a protobuf message (profile)
         */
        template <class U>
        using setter_t = std::function<void (const U& meas, T& profile)>;

        using initializer_t = std::function<void (T& profile)>;

        // --- implement IProfileMapping<T> ---

        virtual bool set_value(const opendnp3::Indexed<opendnp3::Analog>& meas, T& profile) const override;

        virtual bool set_value(const opendnp3::Indexed<opendnp3::Counter>& meas, T& profile) const override;

        virtual void initialize(T& profile) override;

        virtual void before_publish(T& profile) const override;

        virtual size_t get_num_mappings() const override;

        // --- methods used to populate the mapping ---

        void add(uint16_t index, const setter_t<opendnp3::Analog>& setter);

        void add(uint16_t index, const setter_t<opendnp3::Counter>& setter);

        void add_one_time_initializer(const initializer_t& initializer)
        {
            this->one_time_initializers.push_back(initializer);
        }

        void add_before_publish_initializer(const initializer_t& initializer)
        {
            this->before_publish_initializers.push_back(initializer);
        }

    private:

        std::map<uint16_t, setter_t<opendnp3::Analog>> analog_map;
        std::map<uint16_t, setter_t<opendnp3::Counter>> counter_map;
        std::vector<initializer_t> one_time_initializers;
        std::vector<initializer_t> before_publish_initializers;
    };


    template <class T>
    bool ProfileMapping<T>::set_value(const opendnp3::Indexed<opendnp3::Analog>& meas, T& profile) const
    {
        auto iter = this->analog_map.find(meas.index);
        if(iter == this->analog_map.end()) return false;
        iter->second(meas.value, profile);
        return true;
    }

    template <class T>
    bool ProfileMapping<T>::set_value(const opendnp3::Indexed<opendnp3::Counter>& meas, T& profile) const
    {
        auto iter = this->counter_map.find(meas.index);
        if(iter == this->counter_map.end()) return false;
        iter->second(meas.value, profile);
        return true;
    }

    template <class T>
    void ProfileMapping<T>::initialize(T& profile)
    {
        for(auto& init : this->one_time_initializers)
        {
            init(profile);
        }

        this->one_time_initializers.clear();
    }

    template <class T>
    void ProfileMapping<T>::before_publish(T& profile) const
    {
        for(auto& init : this->before_publish_initializers)
        {
            init(profile);
        }
    }

    template <class T>
    size_t ProfileMapping<T>::get_num_mappings() const
    {
        return this->counter_map.size() + this->analog_map.size();
    }

    template <class T>
    void ProfileMapping<T>::add(uint16_t index, const setter_t<opendnp3::Analog>& setter)
    {
        const auto iter = this->analog_map.find(index);
        if(iter != this->analog_map.end())
        {
            throw Exception("Bad configuration, analog index already mapped: ", index);
        }
        else
        {
            this->analog_map[index] = setter;
        }
    }

    template <class T>
    void ProfileMapping<T>::add(uint16_t index, const setter_t<opendnp3::Counter>& setter)
    {
        const auto iter = this->counter_map.find(index);
        if(iter != this->counter_map.end())
        {
            throw Exception("Bad configuration, counter index already mapped: ", index);
        }
        else
        {
            this->counter_map[index] = setter;
        }
    }
}

#endif //OPENFMB_ADAPTER_PROFILEPMAPPING_H
