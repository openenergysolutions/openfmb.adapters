
#ifndef OPENFMB_ADAPTER_HELPERTYPEDEFS_H
#define OPENFMB_ADAPTER_HELPERTYPEDEFS_H

#include "../proto/commonmodule/AnalogueValue.pb.h"
#include "../proto/commonmodule/BCR.pb.h"

#include <map>

namespace openfmb {

    template <class Profile>
    using analogue_getter_t = AnalogueValue* (*)(Profile& profile);

    template <class Profile>
    using bcr_getter_t = BCR* (*)(Profile& profile);

    template <class Profile>
    using analogue_map_t = std::map<std::string, analogue_getter_t<Profile>>;

    template <class Profile>
    using bcr_map_t = std::map<std::string, bcr_getter_t<Profile>>;

}

#endif //OPENFMB_ADAPTER_HELPERTYPEDEFS_H