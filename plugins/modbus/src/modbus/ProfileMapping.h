
#ifndef OPENFMB_ADAPTER_PROFILEMAPPING_H
#define OPENFMB_ADAPTER_PROFILEMAPPING_H

#include "IProfileMapping.h"
#include "IRegister.h"
#include "ICachedValue.h"

#include "adapter-api/util/Exception.h"

#include <map>
#include <vector>
#include <memory>
#include <functional>

namespace adapter
{

    template <class T>
    class ProfileMapping : public IProfileMapping<T>
    {

        using flush_fun_t = std::function<bool (T&)>;

        using init_fun_t = std::function<void ()>;

        template <class Type, class Profile>
        using getter_t = Type * (*)(Profile& profile);

    public:

        /// ---- implement IProfileMapping<T> ----

        void initialize(T& profile) override;
        void apply(const modbus::ReadHoldingRegistersResponse& response) override;
        void flush(T& profile) override;
        size_t num_holding_registers() const override;

        /// ---- helpers for configuring the mapping ----

        void add_holding_register(uint16_t index, std::shared_ptr<IRegister> reg)
        {
            if(holding_registers.find(index) != holding_registers.end())
            {
                throw Exception("Index already mapped: ", index);
            }
            this->holding_registers[index] = reg;
        }

        void add_flush_action(flush_fun_t fun)
        {
            this->flush_actions.push_back(fun);
        }

        void add_init_action(init_fun_t fun)
        {
            this->init_actions.push_back(fun);
        }

    private:

        std::map<uint16_t, std::shared_ptr<IRegister>> holding_registers;
        std::vector<flush_fun_t> flush_actions;
        std::vector<init_fun_t> init_actions;
    };

    template <class T>
    void ProfileMapping<T>::initialize(T& profile)
    {
        profile.Clear();
        for(auto& action : this->init_actions)
        {
            action();
        }
    }

    template <class T>
    void ProfileMapping<T>::apply(const modbus::ReadHoldingRegistersResponse& response)
    {
        for(auto& value : response.get_values())
        {
            auto iter = holding_registers.find(value.address);
            if(iter != holding_registers.end())
            {
                iter->second->set(value.value);
            }
        }
    }

    template <class T>
    void ProfileMapping<T>::flush(T& profile)
    {
        for(auto& check : this->flush_actions)
        {
            check(profile);
        }
    }

    template<class T>
    size_t ProfileMapping<T>::num_holding_registers() const
    {
        return this->holding_registers.size();
    }
}

#endif //OPENFMB_ADAPTER_PROFILEMAPPING_H
