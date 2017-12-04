
#include "PointMap.h"

namespace openfmb {


    PointMap::PointMap(const YAML::Node &node) {

    }

    bool PointMap::apply(uint16_t index, double value, ResourceReadingProfile &profile) const {
        const auto iter = this->analog_map.find(index);
        if (iter == this->analog_map.end()) return false;
        iter->second(value, profile);
        return true;
    }

}

