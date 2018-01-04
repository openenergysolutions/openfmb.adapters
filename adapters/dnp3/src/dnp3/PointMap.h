
#ifndef OPENFMB_ADAPTER_POINTMAP_H
#define OPENFMB_ADAPTER_POINTMAP_H

#include <opendnp3/app/MeasurementTypes.h>
#include <opendnp3/app/Indexed.h>

#include "adapter-api/helpers/HelperTypedefs.h"
#include "adapter-api/util/Exception.h"
#include "adapter-api/util/YAMLUtil.h"

#include <map>
#include <functional>


namespace adapter
{

    template <class ProfileMap>
    class PointMap
    {

    public:

        typedef typename ProfileMap::profile_t profile_t;

        template <class T>
        using setter_t = std::function<void (const T& analog, profile_t& profile)>;

        PointMap(const YAML::Node& node);

        bool apply(const opendnp3::Indexed<opendnp3::Analog>& meas, profile_t& profile) const;
        bool apply(const opendnp3::Indexed<opendnp3::Counter>& meas, profile_t& profile) const;

    private:

        void map_analogue(const YAML::Node& parent, const std::string& name, analogue_getter_t<profile_t> getter);
        void map_bcr(const YAML::Node& parent, const std::string& name, bcr_getter_t<profile_t> getter);

        std::map<uint16_t, setter_t<opendnp3::Analog>> analog_map;
        std::map<uint16_t, setter_t<opendnp3::Counter>> counter_map;

    };

    template <class ProfileMap>
    PointMap<ProfileMap>::PointMap(const YAML::Node& node)
    {
        ProfileMap map; // instantiate the mapping

        for(auto& pair : map.get_analogs())
        {
            this->map_analogue(node, pair.first, pair.second);
        }

        for(auto& pair : map.get_bcrs())
        {
            this->map_bcr(node, pair.first, pair.second);
        }
    }

    template <class ProfileMap>
    bool PointMap<ProfileMap>::apply(const opendnp3::Indexed<opendnp3::Analog>& meas, profile_t& profile) const
    {
        auto iter = this->analog_map.find(meas.index);
        if(iter == this->analog_map.end()) return false;
        iter->second(meas.value, profile);
        return true;
    }

    template <class ProfileMap>
    bool PointMap<ProfileMap>::apply(const opendnp3::Indexed<opendnp3::Counter>& meas, profile_t& profile) const
    {
        auto iter = this->counter_map.find(meas.index);
        if(iter == this->counter_map.end()) return false;
        iter->second(meas.value, profile);
        return true;
    }

    template <class ProfileMap>
    void PointMap<ProfileMap>::map_analogue(const YAML::Node& parent, const std::string& name, analogue_getter_t<profile_t> getter)
    {
        const auto node = yaml::require(parent, name);
        const auto long_index = yaml::require(node, "index").as<int32_t>();

        // negative indices are ignored
        if(long_index < 0) return;

        if(long_index > std::numeric_limits<uint16_t>::max())
        {
            throw Exception("Index exceeds max ushort: ", long_index);
        }

        const auto scale = yaml::require(node, "scale").as<double>();
        const auto index = static_cast<uint16_t>(long_index);


        this->analog_map[index] = [getter, scale](const opendnp3::Analog & analog, profile_t& profile)
        {
            getter(profile)->set_f(static_cast<float>(analog.value * scale));
        };
    }

    template <class ProfileMap>
    void PointMap<ProfileMap>::map_bcr(const YAML::Node& parent, const std::string& name, bcr_getter_t<profile_t> getter)
    {
        const auto node = yaml::require(parent, name);
        const auto long_index = yaml::require(node, "index").as<int32_t>();

        // negative indices are ignored
        if(long_index < 0) return;

        if(long_index > std::numeric_limits<uint16_t>::max())
        {
            throw Exception("Index exceeds max ushort: ", long_index);
        }

        const auto scale = yaml::require(node, "scale").as<double>();
        const auto index = static_cast<uint16_t>(long_index);


        this->analog_map[index] = [getter, scale](const opendnp3::Analog & analog, profile_t& profile)
        {
            getter(profile)->set_actval(
                static_cast<int64_t>(analog.value * scale)
            );
        };
    }
}

#endif //OPENFMB_ADAPTER_ANALOGHANDLER_H
