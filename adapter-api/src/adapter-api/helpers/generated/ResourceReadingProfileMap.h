// 
//   _   _         ______    _ _ _   _             _ _ _
//  | \ | |       |  ____|  | (_) | (_)           | | | |
//  |  \| | ___   | |__   __| |_| |_ _ _ __   __ _| | | |
//  | . ` |/ _ \  |  __| / _` | | __| | '_ \ / _` | | | |
//  | |\  | (_) | | |___| (_| | | |_| | | | | (_| |_|_|_|
//  |_| \_|\___/  |______\__,_|_|\__|_|_| |_|\__, (_|_|_)
//                                            __/ |
//                                           |___/
// 
//  This file is auto-generated. Do not edit manually
// 

#ifndef OPENFMB_RESOURCEREADINGPROFILEMAP_H
#define OPENFMB_RESOURCEREADINGPROFILEMAP_H

#include "ResourceReadingProfile.pb.h"
#include "../HelperTypedefs.h"

namespace openfmb {

class ResourceReadingProfileMap {

    public:

    typedef ResourceReadingProfile profile_t;

    ResourceReadingProfileMap();

    inline const analogue_map_t<profile_t>& get_analogues() const { return this->analogues; }
    inline const bcr_map_t<profile_t>& get_bcrs() const { return this->bcrs; }

    private:

    analogue_map_t<profile_t> analogues;
    bcr_map_t<profile_t> bcrs;
};

} // end namespace openfmb

#endif

