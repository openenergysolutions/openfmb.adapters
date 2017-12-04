
#ifndef OPENFMB_ADAPTER_POINTMAP_H
#define OPENFMB_ADAPTER_POINTMAP_H

#include "adapter-api/proto/ResourceReadingProfile.pb.h"

#include <yaml-cpp/node/node.h>

#include <map>
#include <functional>

namespace openfmb {

    class PointMap {

        typedef std::function<void (double, ResourceReadingProfile&)> map_fun_t;

    public:

        PointMap(const YAML::Node& node);

        bool apply(uint16_t  index, double value, ResourceReadingProfile& profile) const;

    private:

        void load_mmxu_mapping(const YAML::Node& node);

        template <class T>
        void bind_mmxu_handler(const YAML::Node& node, const T& action);

        std::map<uint16_t, map_fun_t> analog_map;

    };

}

#endif //OPENFMB_ADAPTER_ANALOGHANDLER_H
