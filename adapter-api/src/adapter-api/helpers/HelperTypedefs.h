
#ifndef OPENFMB_ADAPTER_HELPERTYPEDEFS_H
#define OPENFMB_ADAPTER_HELPERTYPEDEFS_H

#include "../proto/commonmodule/commonmodule.pb.h"

#include <map>

namespace adapter {

    template <class Profile>
    using analogue_getter_t = commonmodule::AnalogValue* (*)(Profile& profile);

    template <class Profile>
    using bcr_getter_t = commonmodule::BCR* (*)(Profile& profile);

    template <class Profile>
    using analogue_map_t = std::map<std::string, analogue_getter_t<Profile>>;

    template <class Profile>
    using bcr_map_t = std::map<std::string, bcr_getter_t<Profile>>;

}

#endif //OPENFMB_ADAPTER_HELPERTYPEDEFS_H
