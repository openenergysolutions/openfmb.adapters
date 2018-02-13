
#ifndef OPENFMB_ADAPTER_HELPERTYPEDEFS_H
#define OPENFMB_ADAPTER_HELPERTYPEDEFS_H

namespace adapter {

    template <class Type, class Profile>
    using getter_t = Type* (*)(Profile& profile);


}

#endif //OPENFMB_ADAPTER_HELPERTYPEDEFS_H
