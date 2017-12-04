
#ifndef OPENFMB_ADAPTER_RESOURCEREADINGPOINTMAP_H
#define OPENFMB_ADAPTER_RESOURCEREADINGPOINTMAP_H

#include "adapter-api/proto/ResourceReadingProfile.pb.h"

#include <map>
#include <functional>

namespace openfmb {

    class ResourceReadingPointMap {

        typedef std::function<void (double, ResourceReadingProfile&)> map_fun_t;

    public:

        bool apply(uint16_t  index, double value, ResourceReadingProfile& profile)
        {
            const auto iter = this->analog_map.find(index);
            if(iter == this->analog_map.end()) return false;
            iter->second(value, profile);
            return true;
        }

    private:

        std::map<uint16_t, map_fun_t> analog_map;

    };

}

#endif //OPENFMB_ADAPTER_ANALOGHANDLER_H
