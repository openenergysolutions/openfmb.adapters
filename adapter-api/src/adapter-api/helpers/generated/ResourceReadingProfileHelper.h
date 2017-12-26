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

#ifndef OPENFMB_RESOURCEREADINGPROFILEHELPER_H
#define OPENFMB_RESOURCEREADINGPROFILEHELPER_H

#include "ResourceReadingProfile.pb.h"
#include "../HelperTypedefs.h"

namespace openfmb {

class ResourceReadingProfileHelper {

    public:

    ResourceReadingProfileHelper();

    inline const analogue_map_t<ResourceReadingProfile>& get_analogues() const { return this->analogues; }
    inline const bcr_map_t<ResourceReadingProfile>& get_bcrs() const { return this->bcrs; }

    private:

    analogue_map_t<ResourceReadingProfile> analogues;
    bcr_map_t<ResourceReadingProfile> bcrs;
};

} // end namespace openfmb

#endif

