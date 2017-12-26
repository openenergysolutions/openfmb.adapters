
#ifndef OPENFMB_ADAPTER_HELPERTYPEDEFS_H
#define OPENFMB_ADAPTER_HELPERTYPEDEFS_H

#include "../proto/commonmodule/AnalogueValue.pb.h"
#include "../proto/commonmodule/BCR.pb.h"

#include <map>

namespace openfmb {

    template <class Profile>
    using analogue_map_t = std::map<std::string, AnalogueValue* (*)(Profile& profile)>;

    template <class Profile>
    using bcr_map_t = std::map<std::string, BCR* (*)(Profile& profile)>;

}

#endif //OPENFMB_ADAPTER_HELPERTYPEDEFS_H
