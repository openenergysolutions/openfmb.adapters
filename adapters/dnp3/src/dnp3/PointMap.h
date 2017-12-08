
#ifndef OPENFMB_ADAPTER_POINTMAP_H
#define OPENFMB_ADAPTER_POINTMAP_H

#include "adapter-api/proto/ResourceReadingProfile.pb.h"

#include <yaml-cpp/yaml.h>

#include <map>
#include <functional>

namespace openfmb
{

    class PointMap
    {

        typedef void (*set_fun_t)(ResourceReadingProfile& rrp, float value);

        struct AnalogRecord
        {

        public:

            AnalogRecord() = default;

            AnalogRecord(set_fun_t setter, double scale) :
                setter(setter),
                scale(scale)
            {}

            void set_value(ResourceReadingProfile& rrp, double value) const
            {
                setter(rrp, static_cast<float>(this->scale * value));
            }

        private:

            set_fun_t setter = nullptr;
            double scale = 1.0;
        };

    public:

        PointMap(const YAML::Node& node);

        bool apply(uint16_t  index, double value, ResourceReadingProfile& profile) const;

    private:

        static ReadingMMXU* mmxu(ResourceReadingProfile& rrp)
        {
            return rrp.mutable_resourcereadingvalue()->mutable_readingmmxu();
        }

        static ReadingMMTR* mmtr(ResourceReadingProfile& rrp)
        {
            return rrp.mutable_resourcereadingvalue()->mutable_readingmmtr();
        }

        void load_mmxu_mapping(const YAML::Node& node);
        void load_mmtr_mapping(const YAML::Node& node);

        void load(const YAML::Node& parent, const std::string& name, set_fun_t setter);

        std::map<uint16_t, AnalogRecord> analog_map;

    };

}

#endif //OPENFMB_ADAPTER_ANALOGHANDLER_H
