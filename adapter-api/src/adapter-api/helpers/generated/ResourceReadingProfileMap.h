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

#include "resourcemodule/resourcemodule.pb.h"
#include "../HelperTypedefs.h"

namespace openfmb {

class ResourceReadingProfileMap {

    public:

    typedef resourcemodule::ResourceReadingProfile profile_t;

    ResourceReadingProfileMap();

    inline const analogue_map_t<profile_t>& get_analogs() const { return this->analogs; }
    inline const bcr_map_t<profile_t>& get_bcrs() const { return this->bcrs; }

    private:

    analogue_map_t<profile_t> analogs;
    bcr_map_t<profile_t> bcrs;
};

} // end namespace openfmb

#endif

