
#ifndef OPENFMB_ADAPTER_POINTMAP_H
#define OPENFMB_ADAPTER_POINTMAP_H

#include "adapter-api/proto/ResourceReadingProfile.pb.h"

#include <yaml-cpp/yaml.h>

#include <map>
#include <functional>

namespace openfmb {

    class PointMap {

        typedef AnalogueValue* (*select_fun_t)(ResourceReadingProfile& rrp);

        struct AnalogRecord {

            AnalogRecord() = default;

            AnalogRecord(select_fun_t select, double scale) :
            select(select),
            scale(scale)
            {}

            select_fun_t select = nullptr;
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

        void load_mmxu_mapping(const YAML::Node& node);
        void add_analogue_handlers(const YAML::Node& node, const std::initializer_list<std::pair<std::string, select_fun_t>>& points);
        void add_analogue_handler(const YAML::Node& node, const std::string& name, select_fun_t select);

        std::map<uint16_t, AnalogRecord> analog_map;

    };

}

#endif //OPENFMB_ADAPTER_ANALOGHANDLER_H
